#include "Zombie.hpp"

int main() {
    Zombie* zombies = zombieHorde(-98, "Franco");
    delete [] zombies;
}