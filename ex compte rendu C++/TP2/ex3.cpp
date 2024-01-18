#include <stdio.h>

// Fonction pour incrémenter la valeur d'une variable par adresse
void incrementerParAdresse(int* var) {
    (*var)++;
}

// Fonction pour permuter les contenus de deux variables par adresse
void permuterParAdresse(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction pour incrémenter la valeur d'une variable par référence
void incrementerParReference(int* variable) {
    (*variable)++;
}

// Fonction pour permuter les contenus de deux variables par référence
void permuterParReference(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int variable1 = 5;
    int variable2 = 10;

    // Test de la fonction incrementerParAdresse
    printf("Avant incrémentation : variable1 = %d\n", variable1);
    incrementerParAdresse(&variable1);
    printf("Après incrémentation : variable1 = %d\n", variable1);

    // Test de la fonction permuterParAdresse
    printf("\nAvant permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);
    permuterParAdresse(&variable1, &variable2);
    printf("Après permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);

    // Réinitialisation des variables
    variable1 = 5;
    variable2 = 10;

    // Test de la fonction incrementerParReference
    printf("\nAvant incrémentation : variable1 = %d\n", variable1);
    incrementerParReference(&variable1);
    printf("Après incrémentation : variable1 = %d\n", variable1);

    // Test de la fonction permuterParReference
    printf("\nAvant permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);
    permuterParReference(&variable1, &variable2);
    printf("Après permutation : variable1 = %d, variable2 = %d\n", variable1, variable2);

    return 0;
}
