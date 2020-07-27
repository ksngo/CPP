#include <iostream>
using std::cout; 
using std::cin;
using std::endl;

int main()
{

    unsigned u=10, u2=42, u3=0, u4=-1, u5=-2;
    int i =10;
    cout<<u-u2<<endl;
    cout<<u3<<endl;
    cout<<u4<<endl; //unsigned int 4 bytes/32bits has max 4294957295;
    cout<<u5<<endl;
    cout<<i-u<<endl;
    cout<<u-i<<endl;


    /*
    int i, pow;
    unsigned int sum1=1, sum2=0;

    for(i=0;i<32;i++){
        for(pow=0; pow<=i;pow++ ){
            if(pow==0){
                sum1 =1;
            }else{
                sum1*=2;
            }
        }
        std::cout<<"2^"<<i<<" is equal to "<<sum1<<std::endl;
        sum2+=sum1;
        std::cout<<"The accumulative is "<<sum2<<std::endl;
    }
    */

    return 0;

}