#include <iostream>
#include <string>

using namespace std;

int main()
{
    string word1, word2;

    while(cin>>word1){
        if(!isupper(word1[0])){
            word2 = word1;
            continue;
        }

        if(word2 == word1){
            cout<<word1;
            return 0;
        }
        word2 = word1;
    }

    cout<<"No word was repeated."<<endl;
    return 0;
}