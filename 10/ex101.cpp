#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>


using namespace std;

int main()
{   
    
    cout<<"Insert a sequence of integers (enter 'e' to quit):"<<endl;
    vector<int> ivec;

    int number;

    while(cin>>number){
        ivec.push_back(number);
    }

    //discard all that is left in buffer
    cin.sync();

    int val =7;
    vector<int>::iterator result = find(ivec.begin(), ivec.end(), 7);
    int result2 = count(ivec.begin(), ivec.end(), 7);
    

    if(result == ivec.end()){
        cout<<"Number 7 not found"<<endl;
    } else {
        cout<<"Number 7 found "<<result2<<" times."<<endl;
    }

    






}