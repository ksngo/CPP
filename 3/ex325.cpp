#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <int> grades = {42,65,95,100,39,67,95,76,88,76,83,92,76,93};
    vector <int> count(11,0);

    for(auto iter = grades.begin(); iter != grades.end(); iter++){
        count[(*iter)/10]++;
    }

    for(auto number: count){
        cout<<number<<" ";
    }

    cout<<endl;

    return 0;




}