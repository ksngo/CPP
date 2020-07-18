#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector <int> grades = {42,65,95,100,39,67,95,76,88,76,83,92,76,93};

    vector <int> counts(11,0);

    // cout<<9/10<<endl;
    // cout<<11/10<<endl;
    // cout<<25/10<<endl;
    // cout<<95/10<<endl;
    // cout<<100/10<<endl;

    for(auto grade: grades){
        counts[grade/10]++;
    }

    int i;
    for(i=0;i<counts.size();i++){
        cout<<counts[i]<<" ";
    }

    vector <int> alt_grades;
    // must use alt_grades.push_back() to store grades into it.
    // as alt_grades above does not specify the subscripting/index size
    // cannot use alt_grades[i] = grade to store because alt_grades is an empty vector.
    
    for(auto grade: grades){
        alt_grades.push_back(grade);
    }

    cout<<endl;
    for(auto grade: alt_grades){
        cout<<grade<<" ";
    }

    cout<<endl;
    for(i=0;i<alt_grades.size();i++){
        cout<<alt_grades[i]<<" ";
    }

}