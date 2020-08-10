
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void elimDups(vector<string> &ivec){

    sort(ivec.begin(), ivec.end());

    vector<string>::iterator iter = unique(ivec.begin(), ivec.end());

    ivec.erase(iter, ivec.end());

}

int main()
{
    vector<string> my_vec{"the","quick","brown","fox","jumps","over","the","lazy","dog","the","quick","jumps","the","fox"};

    for(string i : my_vec) cout<<i<<" ";
    cout<<endl;

    elimDups(my_vec);

    for(string i : my_vec) cout<<i<<" ";
    cout<<endl;


}