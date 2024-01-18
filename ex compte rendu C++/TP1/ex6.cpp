#include <iostream>

// Échange par valeur
void echangeParValeur(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Échange par pointeur
void echangeParPointeur(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Échange par référence
void echangeParReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    echangeParValeur(x, y);
    std::cout << "Échange par valeur - x : " << x << ", y : " << y << std::endl;
    x = 10, y = 20;
    echangeParPointeur(&x, &y);
    std::cout << "Échange par pointeur - x : " << x << ", y : " << y << std::endl;
    x = 10, y = 20;
    echangeParReference(x, y);
    std::cout << "Échange par référence - x : " << x << ", y : " << y << std::endl;

    return 0;
}
