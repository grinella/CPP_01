#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <stdlib.h>

std::string replaceSubstring(const std::string& line, const std::string& search, const std::string& replace) {
    if (search.empty()) {
        return line;
    }
    std::string risultato;
    size_t pos_iniziale = 0;
    size_t pos;

    while ((pos = line.find(search, pos_iniziale)) != std::string::npos) {
        risultato += line.substr(pos_iniziale, pos - pos_iniziale);
        risultato += replace;
        pos_iniziale = pos + search.length();
    }
    risultato += line.substr(pos_iniziale);
    return risultato;
}

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Il numero di argomenti non è corretto!" << std::endl;
        std::cout << "Uso corretto: " << argv[0] << " <nome_file> <cerca> <sostituisci>" << std::endl;
        return 1;
    }

    std::string filename = argv[1];
    std::string search = argv[2];
    std::string replace = argv[3];

    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open()) {
        std::cout << "Errore nell'apertura del file di input: " << filename << std::endl;
        return 1;
    }

    std::string outputFilename = filename + ".replace";
    std::ofstream outputFile(outputFilename.c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Errore nella creazione del file di output: " << outputFilename << std::endl;
        inputFile.close();
        return 1;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        line = replaceSubstring(line, search, replace);
        outputFile << line << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}
