#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void iprog(string infile, string outfile_odd, string outfile_even){

    ifstream in(infile); //create same type as e.g. cin which refers to opened file name infile to read
    istream_iterator<int> in_iter(in), eof; // creates two istream iterators 
    // vector<int> ivec;

    // copy(in_iter, eof, back_inserter(ivec)); // copy range of iters(in_iter to eof) to destination iterator(back_inserter(ivec) , where back_inserter is an inserter iterator)

    ofstream ofs_odd(outfile_odd); // create same type as e.g. cout which refers to odd_numbers filename to write to ...see fio2.cpp in folder 8 
    ofstream ofs_even(outfile_even);

    ostream_iterator<int> out_iter_odd(ofs_odd, " "); // create ostream iterator which points to ofs_odd
    ostream_iterator<int> out_iter_even(ofs_even, "\n");

    for_each(in_iter, eof, [&out_iter_odd, &out_iter_even](int number){ *((number %2) ? out_iter_odd : out_iter_even)++ = number;}); 
    //it seems each loop of for_each provided with *in_iter as int number 
}


int main()
{
    iprog("file2.txt", "file_odd_b", "file_even_b");
}

