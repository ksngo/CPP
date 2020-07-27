#include <iostream>
#include "Sales_item.h"

int main()
{   
    /*Sales_item item1, item2;

    std::cin>>item1>>item2;
    if(item1.isbn() == item2.isbn()){
        std::cout<<item1 +item2<<std::endl;
        return 0;
    } else {
        std::cerr<<"Different isbn."<<std::endl;
        return -1;
    }
    */
    
    

   Sales_item total;

   if(std::cin >>total){
       Sales_item item;
       int count=0;
       while(std::cin>>item){
           if(item.isbn() == total.isbn()){
               total += item;
               count++;
           } else {
               std::cout<<total.isbn()<<" have "<<count<<" inputs. "<<std::endl;
               std::cout<<total<<std::endl;
               total = item;
               count=1;
           }
       }
       std::cout<<total.isbn()<<" have "<<count<<" inputs. "<<std::endl;
       std::cout<<total<<std::endl;
   } else {
       std::cerr<<"Data error!"<<std::endl;
       return -1;
   }

   return 0;


    
}