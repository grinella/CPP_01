#include "Zombie.hpp"

int main() {
    randomChump("Zumba");
    Zombie* zumbie = newZombie("Zumbo");
    zumbie->announce();
    delete zumbie;
}