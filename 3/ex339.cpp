#include <iostream>
#include <string>
#include <cstring>

using namespace std;


bool cmp_string(string str1, string str2){

    if(str1 ==  str2) return true;

    return false;
}

bool cmp_cstring(char* str3, char* str4){ 
    if(strcmp(str3,str4)==0){
        return true;
    }

    return false;
}


int main()
{
    string str1;
    string str2;
    char str3[50]; 
    char str4[50];

    cout<<"Enter 4 strings:"<<endl;
    cin>>str1;
    cin>>str2;
    cin>>str3;
    cin>>str4;

    if(cmp_string(str1,str2)){
        cout<<"String 1 is same as string2."<<endl;
    }else {
        cout<<"String1 and string2 are different."<<endl;
    }

    if(cmp_cstring(str3,str4)){
        cout<<"String 3 is same as string 4."<<endl;
    } else {
        cout<<"String 3 and string 4 are different."<<endl;
    }


}
