#include <iostream>

using namespace std;

//first function
void my_print(int *pt){
    if(pt) //can't iterate with 'while(pt)'
    {
        cout<<*pt<<" "<<pt<<endl;
    }
}


//second function (by array begin pointer and array end pointer)
void my_print(int *beg, int *end){
    for(auto iter = beg; iter != end; ++iter){
        cout<<*iter<<" "<<iter<<endl;
    }
}

//third function (by char with null for last pointer)

void my_print(char *ch){
    if(ch){ //check address is valid
        while(*ch){ //check value is valid and not '/0' or null
            cout<<*ch<<" "<<&ch<<" "<<ch<<endl;
            ch++;
            
        }

    }
}

//fourth function (by size)

/*void my_print(int* j, size_t size){
    for(size_t i =0; i != size; i++){
        cout<<*(j+i)<<endl;
    }
}*/

//fifth function (by size)

void my_print(int j[], size_t size){
    for(size_t i =0; i != size; i++){
        cout<< j[i] <<endl;
    }
}

// sixth function (by reference) //NOT WORKING!!!!

void my_print(int (&arr)[4]){ //must give array size
    for(auto i : arr){
        cout<<i<<endl;
    }
}

int main()
{
    int i =9;
    int j[4] = {1,2,3,4};
    char ch[5] ="easy";

    cout<<"trying 1st function"<<endl;
    my_print(&i);
    //my_print(j); //can't work

    cout<<"trying 2nd function"<<endl;
    my_print(begin(j), end(j));

    cout<<"Trying 3rd function"<<endl;
    my_print(ch);
    cout<<"exit function: "<< ch<<endl;
    cout<<"exit function: "<< *ch <<endl;
    cout<<"exit function: "<< *(ch+1) <<endl;
    cout<<"exit function: "<< ch[0] <<endl;
    cout<<"exit function: "<< ch[1] <<endl;

    cout<<"Trying 4th function"<<endl;
    my_print(j, end(j)-begin(j));

    cout<<"Trying 5th function"<<endl;
    my_print(j, end(j)-begin(j));

    // cout<<"Trying 6th function"<<endl; //NOT WORKING!!!!!
    // my_print(j);

    
}