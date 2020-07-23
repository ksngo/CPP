#include <iostream>
#include <vector>

using namespace std; //without this line, need to std::vector

int main()
{
    vector <int> my_v;
    int my_int;

    cout<<"enter a bunch of integers:";
    while(cin>>my_int) my_v.push_back(my_int);

    cout<<"User provided: ";
    for(auto iter = my_v.begin(); iter!=my_v.end(); iter++){
        cout<<*iter<<" ";
    }
    cout<<endl;

    for(auto &number: my_v){ //make reference to number by &
        number = ((number%2)!=0) ? number*2 : number;
    }
    cout<<"After amendment:";
    for(auto number: my_v){
        cout<<number<<" ";
    }
    cout<<endl;

}