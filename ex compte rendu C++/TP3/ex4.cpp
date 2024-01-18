#include <iostream>
#include <vector>
#include <utility>


void remplirTableau(std::vector<int>& tableau) {
    std::cout << "Saisissez les entiers du tableau :\n";
    for (size_t i = 0; i < tableau.size(); ++i) {
        std::cout << "Valeur " << i + 1 << " : ";
        std::cin >> tableau[i];
    }
}
std::pair<int, int> mini_maxi(const std::vector<int>& A) {
    if (A.empty()) {
        std::cerr << "Le tableau est vide." << std::endl;
        return std::make_pair(0, 0);
    }

    int min_val = A[0];
    int max_val = A[0];

    for (size_t i = 1; i < A.size(); ++i) {
        if (A[i] < min_val) {
            min_val = A[i];
        }
        if (A[i] > max_val) {
            max_val = A[i];
        }
    }

    return std::make_pair(min_val, max_val);
}

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;
    std::vector<int> tableau(taille);
    remplirTableau(tableau);
    auto resultats = mini_maxi(tableau);
    std::cout << "La plus petite valeur dans le tableau est : " << resultats.first << std::endl;
    std::cout << "La plus grande valeur dans le tableau est : " << resultats.second << std::endl;

    return 0;
}
