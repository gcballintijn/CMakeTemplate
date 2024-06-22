//
// Something.hpp -- CMakeTemplate
//

#include "Something.hpp"

#include <iostream>


namespace Something {

    void do_something()
    {
#if defined(DO_SOMETHING_BIG)
        std::cout << "doing something BIG!" << std::endl;
#else
        std::cout << "doing something (small)!" << std::endl;
#endif
    }

}  // namespace Something
