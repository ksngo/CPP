#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector<string> ivec{"1234", "4567","7890", "6509.5"};

    int sum =0;
    float sumf = 0.0;
    for(auto e: ivec){
        sum += stoi(e);
        sumf += stof(e);
    }

    cout<<sum<<endl;
    cout<<1234+4567+7890+6509<<endl;
    cout<<sumf<<endl;
}
