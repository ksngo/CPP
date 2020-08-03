#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<int> v1;
    vector<int> v2(10);
    vector<int> v3(10, 99);
    vector<int> v4{1,2,3,4,5};
    vector<int> v5 = {6,7,8,9,10};
    vector<int> v6 = v5;
    vector<int> v7(v5);
    vector<int> v8(v5.begin() , v5.end());

    //cout<< v1[0] <<" "<< v1[4]<<endl; //error
    cout<<"2 "<< v2[0] <<" "<< v2[4]<<endl;
    cout<<"3 "<< v3[0] <<" "<< v3[4]<<endl;
    cout<<"4 "<< v4[0] <<" "<< v4[4]<<endl;
    cout<<"5 "<< v5[0] <<" "<< v5[4]<<endl;
    cout<<"6 "<< v6[0] <<" "<< v6[4]<<endl;
    cout<<"7 "<< v7[0] <<" "<< v7[4]<<endl;
    cout<<"8 "<< v8[0] <<" "<< v8[4]<<endl;

}