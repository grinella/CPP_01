#include "Zombie.hpp"

Zombie::Zombie() {
    std::cout << "Costruttore Zombie Default ✓" << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Distruttore Zombie ✓" << std::endl;
}

void Zombie::announce() {
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name; 
}