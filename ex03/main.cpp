#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    system("clear");
    {
        Weapon weapon = Weapon("crude spiked club");

        HumanA bob("Bob", weapon);
        bob.attack();
        weapon.setType("some other type of club");
        bob.attack();
    }
    {
        std::cout << std::endl;
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
        return 0;
}