#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
    int my_array[10];
    int *pointer = my_array;
    
    for(int i = 0; i<10;i++){
        *pointer = 0;
        pointer++;
        
    }

    for(auto element:my_array){
        cout<<element<<" ";
    }
    cout<<endl;

    //another way

    int my_array2[10];
    for(int *pt = my_array2; pt != (my_array2+10);pt++  ){
        *pt = 0;
    }

     for(auto element:my_array2){
        cout<<element<<" ";
    }
    cout<<endl;

    //recommended way

    int my_array3[10];
    int *b = begin(my_array3);
    int *e = end(my_array3);

    for(int *pt = b; pt != e; pt++){
        *pt =0 ;
    }

    for(auto number: my_array3){
        cout<<number<<" ";
    }
    cout<<endl;
    

    
}