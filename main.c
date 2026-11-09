#include <stdio.h>

int produit(int a, int b) {
    return a * b;
}


float moyenne(int a, int b) {
    return (float)(a + b) / 2.0;
}

int main() {
    printf("Projet collaboratif\n");
    printf("donner le premier nombre:");
    scanf("%d",&x);
    printf("donner le deuxieme nombre:");
    scanf("%d",&y);

    int res_prod = produit(x, y);
    printf("Le produit vaut : %d\n", res_prod);
    
    float res_moy = moyenne(x, y);
    printf("La moyenne vaut : %.2f\n", res_moy);
    return 0;
}