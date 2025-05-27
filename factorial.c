#include <stdio.h> //Pour la fonction printf et scanf

// la fonction principale 'main'
int main()
{
    // declaration des entiers n,fact et i
    int n, i, fact = 1;
    printf("Entrer un entier : ");
    scanf("%d", &n); // lecture au clavier de la valeure de n
    if (n == 0)      // verifier si n est egale a 0
    {
        // si oui  on affiche le message en dessous
        printf("Le factoriel de %d est : %d", n, fact);
    }
    else // sinon
    {
        // pour i allant de 1 a la valeur de n,
        // on donne a fact la valeur de fact*i
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        // puis on affiche ce message
        printf("Le factoriel de %d est : %d", n, fact);
    }

    // fin du programme
    return 0;
}
