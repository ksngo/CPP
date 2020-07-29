#include <string>
#include <iostream>

using namespace std;

struct Person;
istream& read(istream &is , Person &item);


class Person
{   

    friend istream& read(istream &is , Person &item); // to allow access to private class members 
    friend ostream& print(ostream &os, Person &item);

    public:
    //constructor
    Person() = default; //ex7.15
    Person(string s, string a): name(s), address(a) {} //ex7.15
    Person(istream& is){ read(is, *this);}

    //members functions
    const string& getName() const { return name;}
    const string& getAddress() const { return address;}


    private:
    //members
    string name;
    string address;
        

};


//non-members functions
istream& read(istream &is , Person &item){

    is>>item.name>>item.address;

    return is;
}

ostream& print(ostream &os, Person &item){
    os<<item.name<<" "<<item.address;

    return os;
}
