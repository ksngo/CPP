#include <iostream>
#include <string>

using namespace std;

class Screen
{
    public:
        typedef string::size_type pos;
        //alternatively
        //using pos = string::size_type;

        Screen() = default;
        Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht*wd,' '){}
        Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {} //cursor is implicitly initialised by cursor = 0

        /* how these work???? char c and contents(ht*wd,c) and string contents */
        

        char get() const { return contents[cursor];}

        inline char get(pos r, pos c) const; //function is declared but not defined. as get function is not defined in class, we can do that by using 'inline'
        Screen &move(pos r, pos c); //function declaration

        void some_member() const; //const member function

        Screen &set(char);
        Screen &set(pos, pos, char);

        Screen &display(ostream &os) {  //for non const object
            do_display(os);
            return *this;    
        }

        const Screen &display(ostream &os) const{ //overloaded function for constant object
            do_display(os);
            return *this;
        }

    //private:
        pos cursor = 0;
        pos height = 0, width =0;
        string contents;
        mutable size_t access_ctr; //mutable allows change even in const object

        void do_display(ostream &os) const{
            os<<contents;
        }
};

//alternatively specify inline on function definition outside class body
inline Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    cursor = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row = r* width;
    return contents[row + c];
}

void Screen::some_member() const{
    ++access_ctr;
}

inline Screen &Screen::set(char c){
    contents[cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos r, pos col, char ch){
    contents[r*width + col] = ch;
    return *this;
}