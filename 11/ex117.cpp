#include <map>
#include <vector>
#include <iostream>
#include <string>

using namespace std;

void print(map<string, vector<string>> imap){
    for(auto i : imap){
        cout<<i.first<<" : ";
        for(auto j: i.second){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

void add(map<string, vector<string>> &imap){
    cout<<"Add family name:";
    string fam;
    if(fam!="@q"){
        cin>>fam;
    }
    

    cout<<"Add the children names:"<<endl;
    string child;
    while(cin>>child && child!="@q"){
        imap[fam].push_back(child);
    }
}


int main()
{
    //map<string, vector<string>> imap{{"goh", {"gohchild1","gohchild2"}}};

    map<string, vector<string>> imap;

    add(imap);

    print(imap);

    //imap["tan"] = {"tanchild1", "tanchild2", "tanchild3"};

    cin.sync();

    add(imap);

    print(imap);

}