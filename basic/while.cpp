#include <iostream>

int main()
{
    /*int i =0;
    while(i<10){
        if(i==9){
            std::cout<<i<<std::endl;
        } else {
            std::cout<<i<<", " ;
        }
        i++;
    }
    return 0;*/

    int i =50, sum=0;

    while(i<=100){
        sum+=i;
        i++;
    }

    std::cout<<"The sum from 50-100 is "<<sum<<std::endl;

    int j=10;
    while(j>=1){
        std::cout<<j<<", ";
        j--;
    }
    std::cout<<"0"<<std::endl;

    
    int input1, input2;

    std::cout<<"Please enter two integers:"<<std::endl;
    std::cin>>input1>>input2;

    

    if(input1>input2){
        int z = input2;
        while(z<=input1){
            std::cout<<z<<", ";
            z++;
        }
    } else {
        int z = input1;
        while(z<=input2){
            std::cout<<z<<", ";
            z++;
        }
    }
    
    std::cout<<std::endl;

    int count;
    for(count=0; count<=100; count+=2){
        std::cout<<count<<" ";
    }
    std::cout<<std::endl;

    sum=0;
    int value;
    std::cout<<"Start entering number and they will be summed."<<std::endl;

    while(std::cin>>value){
        
        sum+=value;
        std::cout<<"The sum is now "<<sum<<std::endl;
    }
    
    return 0;

    

}