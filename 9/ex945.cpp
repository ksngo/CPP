#include <iostream>
#include <string>

using namespace std;

string my_funct(string name, string prefix, string suffix){

    name.insert(0," ");
    name.insert(0,prefix);
    name.append(" ");
    name.append(suffix);
    return name;
}

string my_funct2(string name, string prefix, string suffix){
    name.insert(name.begin(), prefix.begin(), prefix.end());
    name.insert(name.end(), suffix.begin(), suffix.end());

    return name;
}


int main()
{   string name;

    name = my_funct("John", "Mr", "junior");
    cout<<name<<endl;
    
    name = my_funct2("Mary", "Mrs.", "III");
    cout<<name<<endl;
}