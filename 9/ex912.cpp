#include <vector>
#include <list>
#include <iostream>
#include <string>

using namespace std;

void print(vector<string> vs1, vector<string> vs2){

    for(auto element: vs1){
        cout<<element<<" ";
    };
    cout<<endl;
    for(auto element: vs2){
        cout<<element<<" ";
    };
    cout<<endl;
    
}

int main()
{
    vector<int> vec1{1,2,3,4,5,6,7,8,9,10};

    list<int> list1;

    //(1) constructor that takes container to copy
    // copying only allows same container class and element type 

    // list1 = vec1; //error
    vector<int> vec2(vec1);
    vector<int> vec3 = vec1;
    
    


    //(2) constructor that takes two iterators
    // iterator allows different container class, different element type as long it's convertable and 
    // allows specifying range for iterator

    list<int> list2(vec1.begin() , vec1.end());

    for(auto element: list2){
        cout<<element<<" ";
    }
    cout<<endl;
    
    list<double> list3(vec1.begin(), vec1.end());

    for(auto element: list3){
        cout<<element<<" ";
    }
    cout<<endl;

    list<double> list4(++vec1.begin(), --vec1.end());

    for(auto element: list4){
        cout<<element<<" ";
    }
    cout<<endl;

    //(3) using assign and two iterators
    cout<<endl<<"(3) using assign and two iterators"<<endl;

    list<double> list5;

    list5.assign(vec1.begin() , vec1.end());

     for(auto element: list5){
        cout<<element<<" ";
    }
    cout<<endl;

    // (1) swap
    cout<<endl<<"(1) swap"<<endl;
    vector<string> vs1(10, "vs1");
    vector<string> vs2(20,"vs2");

    print(vs1, vs2);
    swap(vs1, vs2);
    cout<<"After swapping"<<endl;

    print(vs1, vs2);





}

