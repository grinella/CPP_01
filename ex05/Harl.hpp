#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

class Harl;
typedef void (Harl::*HarlPointer) (void);

class Harl {
    private: 
        std::string name;
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);

    public:
        Harl();
        ~Harl();

        void complain(std::string level);
};