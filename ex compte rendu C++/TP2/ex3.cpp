#include <stdio.h>

// Fonction pour incr�menter la valeur d'une variable par adresse
void incrementerParAdresse(int* var) {
    (*var)++;
}

// Fonction pour permuter les contenus de deux variables par adresse
void permuterParAdresse(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour incr�menter la valeur d'une variable par r�f�rence
void incrementerParReference(int* variable) {
    (*variable)++;
}

// Fonction pour permuter les contenus de deux variables par r�f�rence
void permuterParReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int variable1 = 5;
    int variable2 = 10;

    // Test de la fonction incrementerParAdresse
    printf("Avant incr�mentation : variable1 = %d\n", variable1);
    incrementerParAdresse(&variable1);
    printf("Apr�s incr�mentation : variable1 = %d\n", variable1);

    // Test de la fonction permuterParAdresse
    printf("\nAvant permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);
    permuterParAdresse(&variable1, &variable2);
    printf("Apr�s permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);

    // R�initialisation des variables
    variable1 = 5;
    variable2 = 10;

    // Test de la fonction incrementerParReference
    printf("\nAvant incr�mentation : variable1 = %d\n", variable1);
    incrementerParReference(&variable1);
    printf("Apr�s incr�mentation : variable1 = %d\n", variable1);

    // Test de la fonction permuterParReference
    printf("\nAvant permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);
    permuterParReference(&variable1, &variable2);
    printf("Apr�s permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);

    return 0;
}
