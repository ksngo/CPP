#include <vector>
#include <list>
#include <iostream>

using namespace std;

int main()
{
    int ia[] = {0,1,1,2,3,5,8,13,21,55,89};

    vector<int> ivec(begin(ia), end(ia));

    list<int> ilist(ivec.begin(), ivec.end());


    for(list<int>::iterator iter=ilist.begin(); iter!=ilist.end(); ){
        if((*iter)%2){
            iter = ilist.erase(iter); //need reassign iter or else will run unlimited loop
        } else {
            ++iter;
        }
    }

    for(auto element: ilist){
        cout<<element<<" ";
    }
    cout<<endl;

    for(vector<int>::iterator iter=ivec.begin(); iter!=ivec.end(); ){
        if((*iter)%2 == 0){
            iter = ivec.erase(iter);
        } else {
            ++iter;
        }
    }

    for(auto element: ivec){
        cout<<element<<" ";
    }
    cout<<endl;

    

    
}