#include <iostream>
#include <cmath>

class Complexe {
private:
    double Re;
    double Img;

public:

    Complexe(double re = 0.0, double img = 0.0) : Re(re), Img(img) {}


    void affiche() const {
        std::cout << "(" << Re << " + " << Img << "i)\n";
    }


    double module() const {
        return std::sqrt(Re * Re + Img * Img);
    }


    Complexe conjugue() const {
        return Complexe(Re, -Img);
    }

    Complexe operator+(const Complexe& autre) const {
        return Complexe(Re + autre.Re, Img + autre.Img);
    }


    Complexe operator+(double reel) const {
        return Complexe(Re + reel, Img);
    }

    friend Complexe operator+(double reel, const Complexe& complexe);


    Complexe operator-(const Complexe& autre) const {
        return Complexe(Re - autre.Re, Img - autre.Img);
    }


    Complexe operator-(double reel) const {
        return Complexe(Re - reel, Img);
    }


    friend Complexe operator-(double reel, const Complexe& complexe);


    Complexe operator*(const Complexe& autre) const {
        return Complexe(Re * autre.Re - Img * autre.Img, Re * autre.Img + Img * autre.Re);
    }


    Complexe operator*(double reel) const {
        return Complexe(Re * reel, Img * reel);
    }


    friend Complexe operator*(double reel, const Complexe& complexe);
};


Complexe operator+(double reel, const Complexe& complexe) {
    return Complexe(reel + complexe.Re, complexe.Img);
}

Complexe operator-(double reel, const Complexe& complexe) {
    return Complexe(reel - complexe.Re, -complexe.Img);
}


Complexe operator*(double reel, const Complexe& complexe) {
    return Complexe(reel * complexe.Re, reel * complexe.Img);
}

int main() {

    Complexe z1(1.0, 2.0);
    Complexe z2(3.0, 4.0);

    std::cout << "z1 : ";
    z1.affiche();

    std::cout << "z2 : ";
    z2.affiche();


    Complexe somme1 = z1 + z2;
    std::cout << "Somme : ";
    somme1.affiche();

    Complexe somme2 = z1 + 5.0;
    std::cout << "Somme (z1 + 5.0) : ";
    somme2.affiche();

    Complexe somme3 = 10.0 + z2;
    std::cout << "Somme (10.0 + z2) : ";
    somme3.affiche();

    Complexe difference = z1 - z2;
    std::cout << "Différence : ";
    difference.affiche();

    Complexe produit1 = z1 * z2;
    std::cout << "Produit : ";
    produit1.affiche();

    Complexe produit2 = z1 * 2.0;
    std::cout << "Produit (z1 * 2.0) : ";
    produit2.affiche();

    Complexe produit3 = 3.0 * z2;
    std::cout << "Produit (3.0 * z2) : ";
    produit3.affiche();

    return 0;
}
