#include "Zombie.hpp"

int main() {
    Zombie* zombies = zombieHorde(10, "Franco");
    delete [] zombies;
}