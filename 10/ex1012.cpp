#include "../8/sales.h"
#include <algorithm>
#include <vector>


using namespace std;

bool cmp_sales_obj(Sales_data &sd1, Sales_data &sd2){
    return sd1.isbn() < sd2.isbn();
}


int main()
{
    Sales_data d1("python"), d2("javascript"), d3("html"), d4("css"), d5("php");

    vector<Sales_data> ivec{d1,d2,d3,d4,d5};

    sort(ivec.begin(), ivec.end(), cmp_sales_obj);

    for(auto i : ivec) {
        cout<<i.isbn()<<endl;
    }
}