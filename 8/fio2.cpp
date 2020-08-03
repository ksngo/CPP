#include <fstream>

using namespace std;

int main()
{
    // ofstream ofs("writetofile"); //ofstream::out | ofstream::trunc are implicit

    // ofs<<"Changed"<<" world"<<endl;
    // ofs<<"Line 3"<<endl;

    ofstream ofs_append("writetofile", ofstream::app); //ofstream::out is implicit

    ofs_append<<"appended changes"<< " World"<<endl;
    ofs_append<<"Line appended"<<endl;


}

//file mode
//in 
//out
//app --> write at end of the file
//ate
//trunc -->does not preserve content, 
//binary