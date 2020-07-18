#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    cout<<"Enter a set of integers:";
    
    vector <int> input;
    int single_input;

    while(cin>>single_input) input.push_back(single_input);

    int i;
    for(i=0;i<input.size();i+=2){
        cout<<input[i] + input[i+1]<<"sum of "<<input[i]<<" and "<<input[i+1]<<endl;
    }
}