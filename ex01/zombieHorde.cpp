#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        std::cout << "La quantitá di zombie \"" << N << "\" non é possibile crearla" << std::endl;
        return (0);
    }
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        horde[i].setName(name);
        horde[i].announce();
    }
    return (horde);
}