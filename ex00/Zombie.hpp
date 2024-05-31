#pragma once

#include <iostream>
#include <string>
#include <ctype.h>
#include <stdlib.h>

class Zombie {
    private: 
        std::string name;

    public:
        Zombie(std::string zname);
        ~Zombie();
        void announce(void);
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);