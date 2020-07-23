#include <iostream>
#include <string>

using namespace std;

int power(int p)
{   
    int sum=1;
    int i=0;
    while(i<p){
        sum = sum*2;
        ++i;
    }

    return sum;
} 

int main()
{
    int my_int = 9;

    int *pointer = &my_int;

    cout<<pointer<<endl;
    

    if((++pointer)!=0) cout<<"ok "<<pointer<<endl;
    if(*pointer) cout<<"ok "<<*pointer<<endl;
    --pointer;
    if(*pointer) cout<<"again ok"<<*pointer<<endl;

    bool result;

    //if else statement
    if(*pointer == 9){
        result = true;
    }else{
        result= false;
    }

    cout<<result<<endl;


    //conditional operator
    result = (*pointer==9) ? true : false;
    cout<<result<<endl;

    //ex4.23

    string s ="word";
    string pl = s + s[s.size()-1];
    cout<<pl<<endl;

    cout<< power(7) + power(8) + power(9) + power(13)<<endl;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long)<<endl;
    cout<<sizeof(short)<<endl;

    int my_array[] ={1,2,3,4,5};

    cout<<sizeof(my_array)<<endl; //4 bytes per elements; ans is 20 bytes
    cout<<sizeof(*my_array)<<endl; //4 bytes for the first element.

    constexpr size_t sz = sizeof(my_array) / sizeof(*my_array); //determine elements in array required

    int my_array2[sz]; 
    int i =0;
    for(auto &element: my_array2) {
        element = i;
        ++i;
        cout<<element<<" ";
    }
    cout<<endl;

    //ex4.29

    int x[10]; int *p = x;
    cout<<sizeof(x)/sizeof(*x)<<endl; //ans 4
    cout<<sizeof(p)<<endl; //ans 4 //this is address used memory 
    cout<<sizeof(*p)<<endl; //ans 4 //this is value used memory

    long long y[10]; long long *pt = y;
    cout<<sizeof(y)<<endl; //ans 80
    cout<<sizeof(*y)<<endl; //ans 8
    cout<<sizeof(pt)<<endl; //ans 4 , address thats 4 bytes of memory
    cout<<sizeof(*pt)<<endl; //ans 8, valuse takes 8 bytes of memory(long long)


    //explicit conversion: cast
    //namecast :casting one of the operands to double e.g
    //static_cast<type>(expression)


    int a = 10,b =7;
    double slope = a/b;

    cout<<slope<<endl; // result is 1

    double gradient = static_cast<double>(a) / b;

    cout<<gradient<<endl; // result is 1.42857


    //const_cast<type> expression

    const char *m;
    const char *mc = m;
    char *mc = const_cast<char*>(m); //cast away the constant

    //reinterpret_cast

    int *ip;
    char *pc = reinterpret_cast<char*>(ip); //new style cast
    char *pc = (char*) ip; //c-style cast


}

