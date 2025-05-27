#include <stdio.h> //Pour la fonction printf et scanf

// la fonction principale 'main'
int main()
{
    // declaration de a et b (entiers)
    int a, b;
    printf("Entrer deux entier a et b : ");
    scanf("%d%d", &a, &b);              // lecture des valeurs de a et b
    printf("La somme est : %d", a + b); // affichage de la somme a+b

    // fin du programme
    return 0;
}
