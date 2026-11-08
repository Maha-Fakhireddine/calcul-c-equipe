#include <stdio.h>
int produit(int a, int b){
    return a*b ;
} 
int main() {
    int x,y;
    printf("projet collaboratif corrige");
    printf("donner le premier nombre:");
    scanf("%d",&x);
    printf("donner le deuxieme nombre:");
    scanf("%d",&y);
    int res = produit(x,y);
    printf("le produit vaut : %d\n", res);
    return 0;
}