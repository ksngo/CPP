#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

void iprog(string infile, string outfile_odd, string outfile_even){

    ifstream in(infile); //create same type as e.g. cin which refers to opened file name infile to read
    istream_iterator<int> in_iter(in), eof; // creates two istream iterators 
    vector<int> ivec;

    copy(in_iter, eof, back_inserter(ivec)); // copy range of iters(in_iter to eof) to destination iterator(back_inserter(ivec) , where back_inserter is an inserter iterator)

    ofstream ofs_odd(outfile_odd); // create same type as e.g. cout which refers to odd_numbers filename to write to ...see fio2.cpp in folder 8 
    ofstream ofs_even(outfile_even);

    ostream_iterator<int> out_iter_odd(ofs_odd, " "); // create ostream iterator which points to ofs_odd
    ostream_iterator<int> out_iter_even(ofs_even, "\n");

    for(auto i : ivec){
        if(i%2){
            *out_iter_odd = i;
        } else {
            *out_iter_even = i;
        }
    }
}


int main()
{
    iprog("file2.txt", "file_odd", "file_even");
}

//alternative, without requiring using vector

// int main(int argc, char** argv)
// {
//     if (argc != 4) return -1;

//     std::ifstream ifs(argv[1]);
//     std::ofstream ofs_odd(argv[2]), ofs_even(argv[3]);

//     std::istream_iterator<int> in(ifs), in_eof;
//     std::ostream_iterator<int> out_odd(ofs_odd, " "), out_even(ofs_even, "\n");

//     std::for_each(in, in_eof, [&out_odd, &out_even](const int i) {
//         *(i & 0x1 ? out_odd : out_even)++ = i;
//     });

//     return 0;
// }