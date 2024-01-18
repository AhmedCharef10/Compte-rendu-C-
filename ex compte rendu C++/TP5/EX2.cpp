#include <iostream>
#include <cmath>

class Vecteur3D {
private:
    float x;
    float y;
    float z;

public:
    // Constructeur avec des valeurs par défaut (0)
    Vecteur3D(float _x = 0, float _y = 0, float _z = 0) : x(_x), y(_y), z(_z) {}

    // Fonction d'affichage des composantes du vecteur
    void afficher() const {
        std::cout << "(" << x << ", " << y << ", " << z << ")\n";
    }

    // Fonction pour obtenir la somme de deux vecteurs
    Vecteur3D somme(const Vecteur3D& autre) const {
        return Vecteur3D(x + autre.x, y + autre.y, z + autre.z);
    }

    // Fonction pour obtenir le produit scalaire de deux vecteurs
    float produitScalaire(const Vecteur3D& autre) const {
        return x * autre.x + y * autre.y + z * autre.z;
    }

    // Fonction pour savoir si deux vecteurs ont les mêmes composantes
    bool coincide(const Vecteur3D& autre) const {
        return x == autre.x && y == autre.y && z == autre.z;
    }

    // Fonction pour obtenir la norme du vecteur
    float norme() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme (renvoyé par valeur)
    Vecteur3D normax(const Vecteur3D& autre) const {
        return (norme() >= autre.norme()) ? *this : autre;
    }

    // Fonction pour obtenir le vecteur avec la plus grande norme (renvoyé par adresse)
    void normax(const Vecteur3D& autre, Vecteur3D& resultat) const {
        resultat = (norme() >= autre.norme()) ? *this : autre;
    }


};

int main() {
    // Exemple d'utilisation de la classe Vecteur3D
    Vecteur3D vecteur1(1, 2, 3);
    Vecteur3D vecteur2(4, 5, 6);

    std::cout << "Vecteur 1 : ";
    vecteur1.afficher();

    std::cout << "Vecteur 2 : ";
    vecteur2.afficher();

    // Somme de deux vecteurs
    Vecteur3D somme = vecteur1.somme(vecteur2);
    std::cout << "Somme des vecteurs : ";
    somme.afficher();

    // Produit scalaire
    float produit = vecteur1.produitScalaire(vecteur2);
    std::cout << "Produit scalaire : " << produit << std::endl;

    // Coïncide
    bool coincide = vecteur1.coincide(vecteur2);
    std::cout << "Les vecteurs coincident : " << (coincide ? "Oui" : "Non") << std::endl;

    // Norme
    float norme1 = vecteur1.norme();
    float norme2 = vecteur2.norme();
    std::cout << "Norme du vecteur 1 : " << norme1 << std::endl;
    std::cout << "Norme du vecteur 2 : " << norme2 << std::endl;

    // Normax
    Vecteur3D vecteurMax1 = vecteur1.normax(vecteur2);
    std::cout << "Vecteur avec la plus grande norme (renvoyé par valeur) : ";
    vecteurMax1.afficher();

    Vecteur3D vecteurMax2;
    vecteur1.normax(vecteur2, vecteurMax2);
    std::cout << "Vecteur avec la plus grande norme (renvoyé par adresse) : ";
    vecteurMax2.afficher();}
