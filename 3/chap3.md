vector -access by range for, subscript or iterator(vector.begin(), vector.end())

for(decltype(vector.size()) i=0; i<vector.size();i++)

special create vector by pointing to address:

vector <int> my_vector(10,1) //create 10 elements of integer 1
vector <int> my_vector{1,1,1} //create 3 elements of integer 1
vector <int> my_vector(10) //create 10 elements of integer 0?

special case: vector <int> my_vector(begin(my_array), end(my_array))
//copy an array to vector
likewise: vector <int> my_vector(my_array , my_array+4)
//int my_array[3]; //size index 0 to 3
//my_array+4 is end(my_array) and is no value.

/*********************************************************/

array - access by range for, subscript.

c++, #include <cstddef>
c, #include <stddef.h>
constexpr size_t array_size =10;
for(size_t i=0;i<); i<array_size;i++)

c++, #include <iterator>
int *b = begin(array_name) //pointer to first elemnt in array
int *e =  end(array_name) //pointer to 1+last element in array


/***********************************************************/
Interfacing string and cstring

library => #include <string> 
        =>e.g. string my_string1("hello");
        =>e.g. string my_string2 ="hello";
        =>e.g. if(my_string1 ==mystring2)

c-string => #include <cstring>
        =>if,  char mystring1[50];
        =>if, char mystring2 = "hello";
        =>e.g. if(strcmp(mystring1, mystring2) ==0)
        =>e.g. strcpy(mystring1, mystring2)
        =>e.g. strcat(mystring1, mystring2)

string my_string("hello world");
char *pointer = my_string.c_str() //returns the pointer address
char *pointer = my_string //error because string library from C++
//use method from string class, c_str()

Normally in C,
char my_string[] = "hello world";
char *pointer = my_string //ok in C language