#include <forward_list>
#include <iostream>
#include <string>

using namespace std;

void my_funct(forward_list<string>& fl, string first, string second ){
    forward_list<string>::iterator prev = fl.before_begin();
    auto curr = fl.begin();
    bool added = false;

    while( curr != fl.end()){
        

        if( *curr ==  first){
            
            curr = fl.insert_after(curr, second);
            ++curr;
            ++prev;
            added = true;
        } else {
            ++curr;
            ++prev;
        }
    }

    if(added == false){
        fl.insert_after(prev, second);
    }
}


int main()
{
    forward_list<string> fl{"Hello", "World", "This", "is", "heaven"};

    my_funct(fl, "This" , "keesiang" );

    for(auto e : fl){
        cout<<e<<" ";
    }
    cout<<endl;



}

