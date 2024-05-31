#include "Zombie.hpp"

int main() {
    Zombie* zombies = zombieHorde(0, "Franco");
    delete [] zombies;
}