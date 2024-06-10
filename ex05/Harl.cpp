#include "Harl.hpp"

Harl::Harl() {
    std::cout << "Costruttore Harl ✓" << std::endl;
    // _command[0] = "DEBUG";
    // _command[1] = "INFO";
    // _command[2] = "WARNING";
    // _command[3] = "ERROR";

    // _input[0] = &Harl::_debug;
    // _input[1] = &Harl::_info;
    // _input[2] = &Harl::_warning;
    // _input[3] = &Harl::_error;
}

Harl::~Harl() {
    std::cout << "Distruttore Harl ✗" << std::endl;
}

void Harl::_debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    HarlPointer _input[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string _command[] = {"DEBUG", "INFO", "WARNING", "ERROR"};  
    for (int i = 0; i < 4; i++) {
        if (_command[i] == level) {
            (this->*_input[i])();
        }
    }
}