#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2, repeat;

    do{ 
        cout<<"Enter two strings: ";
        cin>>str1>>str2;
        if(str1<str2){
            cout<<"str1 < str2"<<endl;
        } else if(str1>str2){
            cout<<"str2 < str1"<<endl;
        } else {
            cout<<"str1 equals str2"<<endl;
        }

        cout<<"Again? Yes or No?"<<endl;
        cin>>repeat;
        
        
    } while(!repeat.empty() && (repeat[0] == 'y' || repeat[0] == 'Y'));
}