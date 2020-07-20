#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    char my_string1[] = "Hello world!";
    char my_string2[] = "Dooms day?";
    cout<<strlen(my_string1)<<endl;
    cout<<strlen(my_string2)<<endl;

    size_t size = strlen(my_string1) + strlen(my_string2) +1;

    /*char my_string3[50];*/

    //alternatively,
    char* my_string3 = new char[size];


    strcpy(my_string3,my_string1);
    strcat(my_string3,my_string2);

    cout<<my_string3<<endl;
}