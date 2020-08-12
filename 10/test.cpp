
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

bool isShorter(const string &s1, const string &s2) {
    if (s1.size() < s2.size()) {
        return true;
    }
    else {
        return false;
    }
}

int main()
{   

    //(1) fill_n() from algorithm header
    /*
    vector<int> ivec(10);

    fill_n(ivec.begin(), ivec.size(),0);

    for(auto i: ivec){
        cout<<i<<" ";
    }
    */

   //(2) back_inserter() from iterator header, returns an iterator bound to the container
   //assign to iterator will call push_back to add element to container

    /*
   vector<int> vec;
    
    auto iter = back_inserter(vec);
    *iter = 23;

    iter = back_inserter(vec);
    *iter = 24;

    for(auto i: vec){
        cout<<i<<" "<<endl;
    }


    vector<int> vec2;
    fill_n(back_inserter(vec2), 10, 99);

    for(auto i: vec2){
        cout<<i<<" ";
    }

    */

   //(3) copy() , algorithm header
   // returns an iterator after the last copied element destination
    /*
   vector<int> vec3{1,2,3,4,5,6,7,8,9};

   vector<int> vec4(9); //need to indicate size
   int a2[9];

   //auto res = copy(vec3.begin(), vec3.end(), a2);
   copy(vec3.begin(), vec3.end(), vec4.begin()); //vec4 size must be provided in order for copy to work

   for(auto i: vec4){
       cout<<i<<" "; //1 2 3 4 5 6 7 8 9 
   } 
    */
   //cout<<res<<endl; //0x61fe5c
   

   //(4) replace() , algorithm header

    /*
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};

    replace(ivec.begin(), ivec.end(), 5, 99);

    for(auto i: ivec){
        cout<<i<<" ";
    }

    
    int a1[] = {0,1,2,3,4,5,6,7,8,9};
    cout<<sizeof(a1)<<endl; //sizeof returns the number of bytes //40
    cout<<sizeof(*a1)<<endl; //4
    */
    
    //(5) replace_copy(), algorithm header

    /*
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10,1,2,3,4,5,6,7,8,9,10};

    vector<int> ivec2;

    replace_copy(ivec.begin(), ivec.end(), back_inserter(ivec2), 2, 99);

    for(auto i: ivec2){
        cout<<i<<" ";
    }
    */

   //(6) algorithm header sort() , unique(), container member erase()

    /*
    vector<string> letters{"The","quick","brown","fox","jumps","over","The","lazy","dog"};

    sort(letters.begin(), letters.end());

    for(string i: letters) cout<<i<<" "; //The The brown dog fox jumps lazy over quick
    cout<<endl;

    auto last_iter = unique(letters.begin(), letters.end()); //unique returns iterator for the end of range.

    for(string i: letters) cout<<i<<" ";  //The brown dog fox jumps lazy over quick
    cout<<endl;
    cout<<letters.size()<<endl;

    letters.erase(last_iter, letters.end());
    for(string i: letters) cout<<i<<" ";  //The brown dog fox jumps lazy over quick
    cout<<endl;
    cout<<letters.size()<<endl;
    */

   //(7) passing a function to algorithm, e.g. 
   //sort(), algorithm
   //sort(b, e, predicate)

   
    // vector<string> ivec{"the","quick","brown","fox","jumps","over","the","lazy","dog"};

    // sort(ivec.begin(), ivec.end());
    // auto end_iter= unique(ivec.begin(), ivec.end()); //need to be sorted to alphabetically order for unique to apply to remove adjacent similar letters.
    // ivec.erase(end_iter, ivec.end());
    // for(auto i: ivec) cout<<i<<" "; //The quick brown fox jumps over The lazy dog
    // cout<<endl;


    // // sort(ivec.begin(), ivec.end(), isShorter);
    // // for(auto i: ivec) cout<<i<<" "; //dog fox the lazy over brown jumps quick
    // // cout<<endl;
    
    // stable_sort(ivec.begin(), ivec.end(), isShorter); //stable_sort maintains original order thus keeping alphabetical order of the same length
    // for(auto i: ivec) cout<<i<<" ";  //dog fox the lazy over brown jumps quick
    // cout<<endl;

   
    //(8) mutable lambda

    size_t a = 42;
    auto f = [a]() mutable {return ++a;};
    cout<<a<<endl; //42
    a = 0;
    auto j = f();
    cout<<j<<endl; //43
    cout<<a<<endl; //0
    
    size_t b = 42;
    auto g = [&b]() {return ++b;};
    cout<<b<<endl; //42
    b= 0;
    auto h = g();
    cout<<h<<endl; //1
    cout<<b<<endl; //1









}

