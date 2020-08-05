#include <vector>
#include <iostream>
#include <list>
#include <forward_list>

using namespace std;

int main()
{   
    //(1) vector
    vector<int> vi = {0,1,2,3,4,5,6,7,8,9};
    auto iter = vi.begin();
    while(iter != vi.end()){
        if(*iter %2){
            iter = vi.insert(iter,*iter); 
            //insert will add value(*iter) to before pointer(iter)
            //insert returns the pointer to the added value *iter itself
            iter+=2;
            // now iter is pointing to the newly added value which is before the intial iter at the start of the if statement
            // to go to next iter needs to add 2.
        } else {
            iter = vi.erase(iter);
            //erase() returns the next iter after the value(*iter) that is erased
        }
    }

    for(auto e: vi){
        cout<<e<<" ";
    }

    cout<<endl;

    //(2) list 
    // I think list doest allows operator of iter2 += 2 , but ++iter2 is ok.
    // list can use advance(iter,2) to replace ++iter, ++ iter.

    list<int> li = {0,1,2,3,4,5,6,7,8,9};
    auto iter2 = li.begin();
    while(iter2 != li.end()){
        if(*iter2 %2){
            iter2 = li.insert(iter2,*iter2); 
            //insert will add value(*iter) to before pointer(iter)
            //insert returns the pointer to the added value *iter itself
            ++iter2;
            ++iter2;
            // now iter is pointing to the newly added value which is before the intial iter at the start of the if statement
            // to go to next iter needs to add 2.
        } else {
            iter2 = li.erase(iter2);
            //erase() returns the next iter after the value(*iter) that is erased
        }
    }

    for(auto e: li){
        cout<<e<<" ";
    }

    cout<<endl;

    //(3) forward_list
    // auto prev = fli.before_begin();
    // iter3 = fli.insert_after(prev,*iter3); 
    //  prev = ++iter3;
    // iter3 = fli.erase_after(prev);

    forward_list<int> fli = {0,1,2,3,4,5,6,7,8,9};

    auto prev = fli.before_begin();
    auto iter3 = fli.begin();
    while(iter3 != fli.end()){
        if(*iter3 %2){
            iter3 = fli.insert_after(prev,*iter3); 
            //insert_after will add value(*iter) to after pointer(prev) which will be before pointer(iter3)
            //insert returns the pointer to the added value *iter itself
            prev = ++iter3;
            ++iter3;
            
            // now iter3 is pointing to the newly added value 
            // next iter3 needs to move 2 times.
            // prev points to iter3 when it moves once
            //move iter3 one more time to complete the 2 times
            
        } else {
            iter3 = fli.erase_after(prev);
            
            //erase() returns the next iter after the value(*iter) that is erased
            //prev still pointing to exactly the same prev before iter3
        }
    }

    for(auto e: fli){
        cout<<e<<" ";
    }

    cout<<endl;
}