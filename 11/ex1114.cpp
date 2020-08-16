#include <map>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

void print(map<string, vector<pair<string,string>>> imap){
    for(auto i : imap){
        cout<<i.first<<" : ";
        for(auto j: i.second){
            cout<<j.first<<" "<<j.second<<" ";
            
        }
        cout<<endl;
    }
}

void add(map<string, vector<pair<string,string>>> &imap){
    cout<<"Add family name:";
    string fam;
    if(fam!="@q"){
        cin>>fam;
    }
    

    cout<<"Add the children names:"<<endl;
    string child;
    string birthday;
    while(cin>>child>>birthday && child!="@q"){

        //various ways to return a pair
        
        imap[fam].push_back({child, birthday});
        //imap[fam].push_back(pair<string,string>(child,birthday));
        //imap[fam].push_back(make_pair(child,birthday));
        //imap[fam].emplace_back(child,birthday);

    }
}


int main()
{
    

    map<string, vector<pair<string, string>>> imap;

    add(imap);

    print(imap);

    

    cin.sync();

    add(imap);

    print(imap);

}