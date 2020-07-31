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
    explicit Person(istream& is){ read(is, *this);}
    // explicit keyword before constructor basically prevents the constructor being used for any implicit arguement type(e.g. istream& ) to convert to Person class type
    //explicit is only meaningful for a single argument constructor
    //explicit will prevent any implicit class-type conversion
    //e.g. if there's a function(Person& p).
    //e.g. normally, function(p) where p is Person class type
    //e.g. also acceptes, function(cin) where cin is istream type
    //e.g. implicitly converts istream type to Person class type
    // explicit is used only on the constructor declaration inside the class.Not repeated on definition 
    //outside the class body. 
    // to force a conversion if constructor is explicit
    // function(Person(cin)) or function(static_cast<Person>(cin))

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
