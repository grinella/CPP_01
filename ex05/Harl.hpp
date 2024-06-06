#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

class Harl;
typedef void (Harl::*HarlPointer) (void);

class Harl {
    private: 
        std::string name;
        void _debug(void);
        void _info(void);
        void _warning(void);
        void _error(void);
        std::string _command[4];
        HarlPointer _input[4];

    public:
        Harl();
        ~Harl();

        void complain(std::string level);
};