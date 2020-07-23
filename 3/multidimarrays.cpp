#include <iostream>

using namespace std;

int main()
{
    int mda[3][5];

    for(size_t row=0;row<3;row++){
        for(size_t col=0;col<5;col++){
            cout<<mda[row][col]<<" ";
        }
        cout<<endl;
    }

    for(size_t row=0;row<3;row++){
        for(size_t col=0;col<5;col++){
            mda[row][col] = 1 + col + row*5;
            cout<<mda[row][col]<<" ";
        }
        cout<<endl;
    }


    //by for range method

    for(auto &row : mda){ //must use reference & 
        for(auto col: row){ //if not, compiler will treat row here as pointer; it's okay to use col instead of &col here, same results.
            col = col*2; 
            cout<<col<<" ";
        }
        cout<<endl;
    }

    //by pointers
    cout<<"**************BY pointers***********"<<endl;

    for(auto pt = mda; pt != mda+3; pt++){
        for(auto qt = *pt; qt != *pt+5; qt++){
            *qt = (*qt)*3;
            cout<<*qt<<" ";
        }
        cout<<endl;
    }

    cout<<"*****************BY pointers with begin(array) and end(array)***********"<<endl;

    for(auto pt = begin(mda); pt!=end(mda); pt++){
        for(auto qt = begin(*pt); qt!=end(*pt);qt++){
            *qt=(*qt)*4;
            cout<<*qt<<" ";
        }
        cout<<endl;
    }

    cout<<"**************BY pointers, types directly without auto***********"<<endl;

    for(int (*pt)[5] = mda; pt !=mda+3; pt++){
        for(int *qt = *pt; qt != *pt+5;qt++ ){
            *qt = (*qt)+1;
            cout<<*qt<<" ";
        }
        cout<<endl;
    }
}