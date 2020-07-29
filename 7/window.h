#include "screen.h"
#include <vector>

using namespace std;

class Window_mgr
{
    private:
        vector<Screen> screens{Screen(24, 80, ' ')}; 
        //when create a Window_mgr class, vector with class Screen type will be initialised by supplying
        //arguments to a constructor Screen( )
};