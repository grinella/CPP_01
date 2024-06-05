#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

int main(int argc, char **argv) {
    if (argc == 4) {
        std::string s1;
        std::string s2;
        std::ifstream file(argv[3]);
        if (!file.is_open())
            std::cerr << "Il file non si apre" << std::endl;
        
    }
    else {
        std::cerr << "Il numero di argomenti non é corretto!" << std::endl;
        std::cerr << "Uso corretto: " << argv[0] << " <nome_file> <cerca> <sostituisci>" << std::endl;
    }
}