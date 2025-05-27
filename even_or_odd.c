#include <stdio.h> //Pour la fonction printf et scanf

// la fonction principale 'main'
int main()
{
    // declaration de l'entier n
    int n;
    printf("Entrer un entier : ");
    scanf("%d", &n);                 // lecture de la valeure de n au clavier
    if (n % 2 != 0)                  // verifier si le reste de la division par 2 est different de 0
        printf("%d est impair.", n); // si oui , on affiche est impaire
    else                             // sinon
        printf("%d est pair.", n);   // sinon , on affiche est pair

    // fin du programme
    return 0;
}
