#include "Zombie.hpp"

Zombie::Zombie(std::string zname) {
    std::cout << "Costruttore Zombie ✓" << std::endl;
    name = zname;
}

Zombie::~Zombie() {
    std::cout << "Distruttore Zombie ✓" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}