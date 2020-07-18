#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> v1;

    cout<<"size: "<<v1.size()<<endl;
    cout<<"--------end v1-------"<<endl;

    vector<int> v2(10);
    int i=0;

    cout<<"size: "<<v2.size()<<endl;
    while(v2[i]){
        cout<<v2[i]<<" ";
        i++;
    }
    cout<<endl;
    cout<<"--------end v2-------"<<endl;

    vector<int> v3(10,42);
    int j;

    cout<<"size: "<<v3.size()<<endl;
    for(j=0;j<v3.size();j++){
        cout<<v3[j]<<" ";
    }

    cout<<endl;
    cout<<"-------end v3--------"<<endl;

    vector<int> v4{10};

    cout<<"size: "<<v4.size()<<endl;

    for(auto my_int: v4){
        cout<<my_int<<" ";
    }

    cout<<endl;
    cout<<"--------end v4-------"<<endl;


    vector<int> v5{10,42};

    i=0;
    cout<<"size: "<<v5.size()<<endl;
    while(v5[i]){
        cout<<v5[i]<<" ";
        i++;
    }

    cout<<endl;
    for(auto my_int: v5){
        cout<<my_int<<" ";
    }

    cout<<endl;
    cout<<"--------end v5-------"<<endl;

    vector<string> v6{10};

    cout<<"size: "<<v6.size()<<endl; //vector.size()

    i=0;
    for(i=0;i<10;i++){
        if(v6[i].empty()){ //vector.empty()
            cout<<"null ";
        }else {
            cout<<v6[i]<<" ";
        }
        
    }

    cout<<endl;
    cout<<"------end v6---------"<<endl;

    vector<string> v7{10,"hi"};
    i=0;
    cout<<"size: "<<v7.size()<<endl;
    for(i=0;i<10;i++){
        cout<<v7[i]<<" ";
    }

    cout<<endl;
    cout<<"-------end v7--------"<<endl;
    



}