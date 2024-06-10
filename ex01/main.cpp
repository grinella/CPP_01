#include "Zombie.hpp"

int main() {
    Zombie* zombies = zombieHorde(8, "Franco");
    delete [] zombies;
}