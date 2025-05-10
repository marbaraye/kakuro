#include "Factory.hpp"
#include "GridParser.hpp"
#include <memory>
#include <string>

std::unique_ptr<GridParser> Factory::createParser(const std::string& filePath) {
    if (filePath.ends_with(".txt")) {
        return std::make_unique<TextGridParser>(filePath);
    }

    // Ajoutez d'autres formats ici (JSON, YAML, etc.)
    return nullptr;
}