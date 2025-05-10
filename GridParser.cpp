#include "GridParser.hpp"
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

class TextGridParser : public GridParser {
public:
    explicit TextGridParser(const std::string& filePath) : filePath(filePath) {}
    std::vector<std::vector<std::string>> parse() const override;

private:
    std::string filePath;
};

std::vector<std::vector<std::string>> TextGridParser::parse() const {
    std::ifstream file(filePath);
    std::vector<std::vector<std::string>> grid;
    std::string line;

    if (!file.is_open()) {
        throw std::runtime_error("Impossible d'ouvrir le fichier : " + filePath);
    }

    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::vector<std::string> row;
        std::string cell;

        while (iss >> cell) {
            row.push_back(cell);
        }

        grid.push_back(row);
    }

    return grid;
}