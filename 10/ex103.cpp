//explore on accumulate() from numeric header

#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int main()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9,10};

    int sum;

    sum = accumulate(ivec.begin(), ivec.end(), 0);

    cout<<sum<<endl;
}