#include <iostream>

using namespace std;

void swap(int* pt1, int* pt2){
    
    int temp;

    temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;

}



int main()
{   
    int num1, num2;

    cout<<"Enter two integers: "<<endl;
    cin>>num1>>num2;

    swap(&num1, &num2);

    cout<<"after swapping: "<<endl;
    cout<<"num1 is "<<num1<<endl;
    cout<<"num2 is "<<num2<<endl;

    return 0;
}