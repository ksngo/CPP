#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <int> int_vec;
    int input;

    cout<<"Enter 10 integers:"<<endl;
    for(int i=0; i<10;i++){
        cin>>input;
        int_vec.push_back(input);
    }

    for(auto iter = int_vec.begin(); iter!=int_vec.end();iter++){
        *iter = (*iter)*2;
        cout<<(*iter)<< " ";
    }
    cout<<endl;

    for(auto number: int_vec) cout<<number<<" ";
    cout<<endl;

    return 0;


}