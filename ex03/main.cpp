#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon weapon = Weapon("crude spiked club");

        HumanA bob("Bob", weapon);
        bob.attack();
        weapon.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
        return 0;
}