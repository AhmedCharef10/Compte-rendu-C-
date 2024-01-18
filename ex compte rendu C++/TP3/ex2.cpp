#include <iostream>
#include <vector>

void remplirVecteur(std::vector<int>& vecteur) {
    int taille;
    std::cout << "Entrez la taille du vecteur : ";
    std::cin >> taille;

    std::cout << "Saisissez les entiers du vecteur :\n";
    for (int i = 0; i < taille; ++i) {
        int valeur;
        std::cout << "Valeur " << i + 1 << " : ";
        std::cin >> valeur;
        vecteur.push_back(valeur);
    }
}

void recherche(const std::vector<int>& vecteur, int valeur) {
    for (int i = 0; i < vecteur.size(); ++i) {
        if (vecteur[i] == valeur) {
            std::cout << valeur << " se trouve dans le vecteur à la position " << i << std::endl;
            return;
        }
    }
    std::cout << valeur << " ne se trouve pas dans le vecteur" << std::endl;
}

int main() {
    std::vector<int> vecteur3;
    remplirVecteur(vecteur3);

    int valeurRecherchee;
    std::cout << "Entrez la valeur à rechercher : ";
    std::cin >> valeurRecherchee;
    recherche(vecteur3, valeurRecherchee);

    return 0;
}
