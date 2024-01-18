#include <iostream>

int calculerUN(int n) {
    if (n == 0) {
        return 3;
    } else {
        return 3 * calculerUN(n - 1) + 4;
    }
}

int main() {
    int N;
    std::cout << "Entrez un entier N : ";
    std::cin >> N;
    int resultat = calculerUN(N);
    std::cout << "La valeur de u(" << N << ") est : " << resultat << std::endl;

    return 0;
}



