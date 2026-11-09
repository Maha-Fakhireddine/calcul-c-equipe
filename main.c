#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}

// Nouvelle fonction moyenne ajoutée par A
float moyenne(int a, int b) {
    return (float)(a + b) / 2.0;
}

int main() {
    printf("Projet collaboratif\n");
    
    int res_prod = produit(3, 4);
    printf("Le produit vaut : %d\n", res_prod);
    
    float res_moy = moyenne(5, 8);
    printf("La moyenne vaut : %.2f\n", res_moy);
    
    return 0;
}