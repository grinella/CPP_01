#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    std::cout << "Costruttore Stringa HumanB ✓" << std::endl;
    this->name = name;
    this->weapon = NULL;
}

HumanB::~HumanB() {
    std::cout << "Distruttore HumanB ✗" << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}

void    HumanB::attack() {
    if (weapon == NULL) {
        std::cout << this->name << " non ha l'arma" << std::endl;
    }
    else
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}
