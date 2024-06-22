//
// Something.hpp -- CMakeTemplate
//

#include "Something.hpp"

#include <iostream>

#include <curses.h>

namespace Something {

    void do_something()
    {
        initscr();

#if defined(DO_SOMETHING_BIG)
        addstr("doing something BIG!");
#else
        addstr("doing something (small)!");
#endif
        getch();
        endwin();
    }

}  // namespace Something
