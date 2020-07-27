#include <iostream>

using namespace std;

//passing arguments by pointers

void swap(int *pt1, int *pt2){
    int temp;
    temp = *pt1;

    *pt1 = *pt2;
    *pt2 = temp;

}



int main()
{   
    int num1 = 7, num2 = 100;

    cout<<num1<<" num1"<<endl;
    cout<<num2<<" num2"<<endl;

    swap(&num1, &num2);
    cout<<"after swapping"<<endl;
    cout<<num1<<" num1"<<endl;
    cout<<num2<<" num2"<<endl;

}