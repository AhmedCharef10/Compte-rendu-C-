#include <iostream>
bool estEgalParValeur(int a, int b) {
    return (a == b);
}

// Passage par adresse
bool estEgalParAdresse(const int* a, const int* b) {
    return (*a == *b);
}
// Passage par référence
bool estEgalParReference(const int& a, const int& b) {
    return (a == b);
}
int main() {
    int x = 10, y = 20;

    // Test d'égalité par valeur
    bool egalParValeur = estEgalParValeur(x, y);
    std::cout << "Égalité par valeur : " << std::boolalpha << egalParValeur << std::endl;

    // Test d'égalité par adresse
    bool egalParAdresse = estEgalParAdresse(&x, &y);
    std::cout << "Égalité par adresse : " << std::boolalpha << egalParAdresse << std::endl;

    // Test d'égalité par référence
    bool egalParReference = estEgalParReference(x, y);
    std::cout << "Égalité par référence : " << std::boolalpha << egalParReference << std::endl;

    return 0;
}
