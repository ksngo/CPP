#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    cout<<sizeof(int)<<" int type"<<endl;
    cout<<sizeof(long)<<" long type"<<endl;
    cout<<sizeof(short)<<" short type"<<endl;
    cout<<sizeof(float)<<" float type"<<endl;
    cout<<sizeof(double)<<" double type"<<endl;
    cout<<sizeof(long long)<<" long long type"<<endl;
    cout<<sizeof(unsigned long)<<" unsigned long type"<<endl;
    cout<<sizeof(signed long)<<" signed long type"<<endl;
    cout<<sizeof(long double)<<" long double type"<<endl;

    cout<<sizeof(string)<<" string "<<endl;
    //cout<<sizeof(vector)<<" vector "<<endl;

    return 0;
}