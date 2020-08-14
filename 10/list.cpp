#include <list>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string lhs, string rhs){
    if (lhs.size()<rhs.size()){
       return true;
        
    } 

    return false;

}

int main()
{

    list<string> ilist{"hello","world","good","morning","good","night","halleluh","whimper"};
    list<string> ilist2{"php","html","javascript","python","c++"};

    ilist.sort();
    for(auto i : ilist) cout<<i<<" "; // result: good good halleluh hello morning night whimper world
    cout<<endl;

    // ilist.sort([](string lhs, string rhs){return lhs.size()<rhs.size();}); //result : good good hello world night morning whimper halleluh
    // for(auto i : ilist) cout<<i<<" "; 

    // ilist.sort(cmp);
    // for(auto i : ilist) cout<<i<<" "; // result: good good hello world night morning whimper halleluh

    // sort(ilist.begin(), ilist.end()); // Error: generic sort cannot compile
    
    ilist2.sort();
    for(auto i : ilist2) cout<<i<<" "; // result: html javascript php python
    cout<<endl;

    ilist.merge(ilist2); //*note : ilist and ilist2 should be sort first for results to be sorted as well

    for(auto i : ilist2) cout<<i<<" "; //result : empty ; ilist2 become empty after merge
    cout<<endl;

    
    for_each(ilist.begin(), ilist.end(), [](string i){cout<<i<<" ";}); //result: c++ good good halleluh hello html javascript morning night php python whimper world
    cout<<endl;

    ilist.remove("hello");
    for(auto i: ilist) cout<<i<<" "; // result:  c++ good good halleluh html javascript morning night php python whimper world
    cout<<endl;

    ilist.remove_if([](string i){return i.size()<=3;}); 
    for(auto i: ilist) cout<<i<<" "; // result:  good good halleluh html javascript morning night python whimper world
    cout<<endl;

    ilist.reverse();
    for(auto i: ilist) cout<<i<<" "; // result:  world whimper python night morning javascript html halleluh good good
    cout<<endl;

    ilist.unique();
    for(auto i: ilist) cout<<i<<" "; // result:  world whimper python night morning javascript html halleluh good
    cout<<endl;    


    list<string> ilist3{"splice added 1","splice added 2", "splice added 3"};

    ilist.splice(ilist.end(), ilist3);
    for(auto i: ilist) cout<<i<<" "; // result:  world whimper python night morning javascript html halleluh good splice added 1 splice added 2 splice added 3
    cout<<endl;   

}