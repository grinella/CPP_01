#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon) {
    std::cout << "Costruttore Stringa HumanA ✓" << std::endl;
    this->name = name;
    this->weapon = weapon;
}

HumanA::~HumanA() {
    std::cout << "Distruttore HumanA ✗" << std::endl;
}


void    HumanA::attack() {
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}
