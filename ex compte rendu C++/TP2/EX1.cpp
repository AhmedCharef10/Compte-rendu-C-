#include <iostream>

int main() {
    // Allocation statique pour un entier
    int x = 42;
    int *p = &x;

    std::cout << "Entier statique : " << x << std::endl;
    std::cout << "Adresse de l'entier statique : " << p << std::endl;

    // Allocation dynamique pour un entier
    int *y = new int;
    *y = 123;

    std::cout << "\nEntier dynamique : " << *y << std::endl;
    std::cout << "Adresse de l'entier dynamique : " << y << std::endl;
    delete y;

    return 0;
}
