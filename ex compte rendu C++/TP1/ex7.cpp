#include <iostream>
int calculerFactoriel(int N){
      if (N < 0) {
        std::cout << "Erreur : Le factoriel n'est pas défini pour les nombres négatifs." << std::endl;
        return 0;
      }
      int resultat = 1;
      for (int i = 1; i <= N; ++i) {
        resultat *= i;
      }

      return resultat;
}

int main() {
    int N;
    std::cout << "Entrez un nombre entier N : ";
    std::cin >> N;
    int resultat = calculerFactoriel(N);
    std::cout << "Le factoriel de " << N << " est : " << resultat << std::endl;

    return 0;
}

