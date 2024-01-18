#include <iostream>

// �change par valeur
void echangeParValeur(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// �change par pointeur
void echangeParPointeur(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// �change par r�f�rence
void echangeParReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    echangeParValeur(x, y);
    std::cout << "�change par valeur - x : " << x << ", y : " << y << std::endl;
    x = 10, y = 20;
    echangeParPointeur(&x, &y);
    std::cout << "�change par pointeur - x : " << x << ", y : " << y << std::endl;
    x = 10, y = 20;
    echangeParReference(x, y);
    std::cout << "�change par r�f�rence - x : " << x << ", y : " << y << std::endl;

    return 0;
}
