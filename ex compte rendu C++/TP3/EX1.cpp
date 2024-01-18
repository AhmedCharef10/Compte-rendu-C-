#include <iostream>

void remplirTableau(int tableau[], int taille) {
    std::cout << "Entrez les valeurs du tableau :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "Valeur " << i + 1 << " : ";
        std::cin >> tableau[i];
    }
}

void afficherTableau(const int tableau[], int taille) {
    std::cout << "Contenu du tableau : ";
    for (int i = 0; i < taille; ++i) {
        std::cout << tableau[i] << " ";
    }
    std::cout << std::endl;
}

int compterPositifs(const int tableau[], int taille) {
    int comptePositifs = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] > 0) {
            ++comptePositifs;
        }
    }
    return comptePositifs;
}

int main() {
    int taille;
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    // Allouer dynamiquement le tableau
    int* tableau = new int[taille];

    // Remplir et afficher le tableau
    remplirTableau(tableau, taille);
    afficherTableau(tableau, taille);

    // Compter et afficher le nombre de valeurs positives
    int positifs = compterPositifs(tableau, taille);
    std::cout << "Nombre de valeurs positives : " << positifs << std::endl;

    delete[] tableau;

    return 0;
}
