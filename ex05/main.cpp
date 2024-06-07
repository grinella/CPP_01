#include "Harl.hpp"

int main() {
    system("clear");
    Harl Obj;

    std::cout << std::endl;
    Obj.complain("DEBUG");
    std::cout << std::endl;
    Obj.complain("INFO");
    std::cout << std::endl;
    Obj.complain("WARNING");
    std::cout << std::endl;
    Obj.complain("ERROR");
    std::cout << std::endl;

    return 0;
}