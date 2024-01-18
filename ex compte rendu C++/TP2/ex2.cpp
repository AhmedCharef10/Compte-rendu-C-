#include <iostream>
bool estEgalParValeur(int a, int b) {
    return (a == b);
}

// Passage par adresse
bool estEgalParAdresse(const int* a, const int* b) {
    return (*a == *b);
}
// Passage par r�f�rence
bool estEgalParReference(const int& a, const int& b) {
    return (a == b);
}
int main() {
    int x = 10, y = 20;

    // Test d'�galit� par valeur
    bool egalParValeur = estEgalParValeur(x, y);
    std::cout << "�galit� par valeur : " << std::boolalpha << egalParValeur << std::endl;

    // Test d'�galit� par adresse
    bool egalParAdresse = estEgalParAdresse(&x, &y);
    std::cout << "�galit� par adresse : " << std::boolalpha << egalParAdresse << std::endl;

    // Test d'�galit� par r�f�rence
    bool egalParReference = estEgalParReference(x, y);
    std::cout << "�galit� par r�f�rence : " << std::boolalpha << egalParReference << std::endl;

    return 0;
}
