#include "KakuroSolver.hpp"
#include "Factory.hpp"
#include <iostream>
#include <memory>

int main() {
    std::cout << "Bienvenue dans le solveur de Kakuro !" << std::endl;

    // Création d'une instance via le Factory Pattern
    std::unique_ptr<GridParser> parser = Factory::createParser("resources/test_grid.txt");

    // Chargement de la grille
    KakuroSolver solver;
    if (parser) {
        auto grid = parser->parse();
        solver.loadGrid(grid);

        // Résolution de la grille
        if (solver.solve()) {
            solver.displaySolution();
        } else {
            std::cout << "Aucune solution trouvée." << std::endl;
        }
    }

    return 0;
}