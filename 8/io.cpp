#include <iostream>
#include <string>
#include <ios>
#include <limits>

//using namespace std;

int main()
{   
     
    
    //(1) istream type
    //(2) cin object of istream
    // istream is a class
    // istream& my_stream() will create a reference object my_stream
    // cin is already a ready object provided by std with is of istream class
    
    std::istream& is = std::cin;

    int input;
    is>>input;
    
    //(3) ostream type
    //(4) cout object of ostream
    std::ostream& os = std::cout;

    os<<"Input is "<<input<<std::endl;

    //(5) cerr object of ostream
    std::ostream& es = std::cerr;

    //es<<"Error!"<<std::endl;

    //(6) >> operator to read input from istream object
    //(7) << operator to write output to ostream object
    //(8) getline function

    // char unwanted;
    // while((is >>  unwanted) && unwanted != '\n')
    //     std::cout<<"hello"<<unwanted<<std::endl;


    /* BOTH METHODS CAN WORK */

    //is.sync(); //discard all  that is left in buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n'); 

    /*-----------------------*/

    std::cout<<"Get line"<<std::endl;
    std::string my_string;
    getline(std::cin, my_string);
    std::cout<<my_string<<std::endl;

    
   



}