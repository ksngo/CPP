// #ifndef ex711_h
// #define ex711_h

#include <iostream>
#include <string>

struct Sales_data; //ex 7.12, declare required for line 8 Sales_data
std::istream& read(std::istream& is, Sales_data& item); //ex7.12, declare required for line 19 read

// Add constructors to your Sales_data class
struct Sales_data {
    Sales_data() = default;  //default constructor
    //Sales_data(): units_sold(0), revenue(0.0){} //ex7.14
    
    Sales_data(const std::string& s) : bookNo(s) {}
    Sales_data(const std::string& s, unsigned n, double p)
        : bookNo(s), units_sold(n), revenue(n * p)
    {
    }
    Sales_data(std::istream& is){
        read(is, *this); //move into class body
    };

    std::string isbn() const { return bookNo; };
    Sales_data& combine(const Sales_data&);

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

// nonmember functions
std::istream& read(std::istream& is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item)
{
    os << item.isbn() << " " << item.units_sold << " " << item.revenue;
    return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

// member functions.

// Sales_data::Sales_data(std::istream& is) //ex7.11 , not used in ex7.12
// {
//     read(is, *this);
// }

Sales_data& Sales_data::combine(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

//#endif