#ifndef GRID_PARSER_HPP
#define GRID_PARSER_HPP

#include <vector>
#include <string>

class GridParser {
public:
    virtual ~GridParser() = default;
    virtual std::vector<std::vector<std::string>> parse() const = 0;
};

#endif