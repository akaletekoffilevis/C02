#include <stdio.h> //Pour la fonction printf et scanf

// la fonction principale 'main'
int main()
{
    // declaration de a et b (entiers),et la somme ;
    int a, b,sum;
    printf("Entrer deux entier a et b : ");
    scanf("%d%d", &a, &b);
    sum = a + b;              // lecture des valeurs de a et b et calcule de leurs somme
    printf("La somme est : %d", sum); // affichage de la somme a+b

    // fin du programme
    return 0;
}
