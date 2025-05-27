#include <stdio.h> //Pour la fonction printf et scanf

// la fonction principale 'main'
int main()
{
    // declaration de deux entiers
    int a, b;
    printf("Entrer deux entier a et b : ");
    scanf("%d%d", &a, &b);                         // recuperation des variables a et b
    printf("Après échange: a = %d, b = %d", b, a); // afficha des varables dans l'ordre inverser

    // fin du programme
    return 0;
}
