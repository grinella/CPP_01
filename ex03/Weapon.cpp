#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
    std::cout << "Costruttore Stringa Weapon ✓" << std::endl;
    this->type = name;
}

Weapon::Weapon() {
    std::cout << "Costruttore Standard Weapon ✓" << std::endl;
}

Weapon::~Weapon() {
    std::cout << "Distruttore Standard Weapon ✗" << std::endl;
}

const std::string& Weapon::getType() {
    return this->type;
}


void Weapon::setType(std::string n_type) {
    this->type = n_type;
}