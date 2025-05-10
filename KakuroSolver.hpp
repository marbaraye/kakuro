#ifndef KAKURO_SOLVER_HPP
#define KAKURO_SOLVER_HPP

#include <vector>
#include <string>

class KakuroSolver {
public:
    void loadGrid(const std::vector<std::vector<std::string>>& grid);
    bool solve();
    void displaySolution() const;

private:
    std::vector<std::vector<std::string>> grid;
    bool solveRecursive(int row, int col);
    bool isValid(int row, int col, int value) const;
};

#endif