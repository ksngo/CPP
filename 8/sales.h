#include <iostream>
#include <string>

using namespace std;

class Sales_data {

    friend istream& read(istream&, Sales_data&);
    friend ostream& print(ostream&, Sales_data&);
    friend Sales_data add(Sales_data& , Sales_data&);
    

    public:
    Sales_data() = default;
    Sales_data(string s): bookNo(s) {}
    Sales_data(string s, unsigned n, double r): bookNo(s) , units_sold(n) , revenue(r) {}
    Sales_data( istream& is){ 
        read(is, *this);
    }

    string isbn() const {return bookNo;};
    Sales_data& combine(Sales_data&);

    private:

        string bookNo;
        unsigned units_sold = 0;
        double revenue = 0.0;

        double avg_price();

};

//constructor

// Sales_data::Sales_data(std::istream& is) : Sales_data()
// {
//     std::cout << "Sales_data(istream &is)" << std::endl;
//     read(is, *this);
// }



//member function
double Sales_data::avg_price(){
    return units_sold ? revenue/units_sold : 0 ;
}

Sales_data& Sales_data::combine(Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

// friends and non-member function 

istream& read(istream& is, Sales_data& item){
    double price = 0;
    is>> item.bookNo >> item.units_sold >> price;
    item.revenue = price*item.units_sold;
    return is;

}

ostream& print(ostream& os, Sales_data& item){
    os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue;
    return os;
}

Sales_data add(Sales_data& lhs, Sales_data& rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}



