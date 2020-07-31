#include "screen.h"
#include <vector>

using namespace std;

class Window_mgr
{   
    public:

        using ScreenIndex = vector<Screen>::size_type;
        void clear(ScreenIndex);
        ScreenIndex addScreen(const Screen&);

    private:
        vector<Screen> screens{Screen(24, 80, ' ')}; 
        //when create a Window_mgr class, vector with class Screen type will be initialised by supplying
        //arguments to a constructor Screen( )
};

void Window_mgr::clear(ScreenIndex i){
     Screen &s = screens[i]; 
     s.contents = string(s.height*s.width, ' ');  //have access to contents, height, width from Screen class members
     //because Window_mgr class is friend of Screen class

}

Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen& s){
    screens.push_back(s);
    return screens.size() -1;
}