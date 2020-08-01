#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    ifstream in("myfile"); //create in of ifstream class and opens myfile associated with in object

    if(in){
        cout<<"opened myfile"<<endl;
    }

    in.close(); //close the file

    if(in){ //stream status of good() set to true because close file is success
        cout<<"hello"<<endl; 
        cout<<in.good()<<" in.good()"<<endl;
        cout<<in.fail()<<" in.fail() "<<endl;
    }

    in.open("myfile2"); //open another file

    if(in){
        cout<<"myfile2"<<endl;
    }

    cout<<"tried opening myfile2"<<endl;
    cout<<in.good()<<" in.good()"<<endl; //stream status of in object's good() is false because open file is unsuccessful
    cout<<in.fail()<<" in.fail() "<<endl;


}