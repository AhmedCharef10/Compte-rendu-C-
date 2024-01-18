#include <iostream>
#include <vector>


int produitScalaire(const std::vector<int>& U, const std::vector<int>& V) {
    if (U.size() != V.size()) {
        std::cerr << "Les vecteurs doivent avoir la même dimension." << std::endl;
        return 0;
    }

    int resultat = 0;
    for (size_t i = 0; i < U.size(); ++i) {
        resultat += U[i] * V[i];
    }

    return resultat;
}

int main() {

    std::vector<int> U = {1, 2, 3};
    std::vector<int> V = {4, 5, 6};

    int resultatProduitScalaire = produitScalaire(U, V);
    std::cout << "Le produit scalaire de U et V est : " << resultatProduitScalaire << std::endl;

    return 0;
}
