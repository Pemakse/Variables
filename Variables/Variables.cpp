// Variables.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

/*const int NOMBRE_DE_VIES_INITIALES = 5;

int age = 0;  // On initialise la variable à 0

int scanAge()

{

    printf("Quel age avez-vous ? ");
    
    scanf("%d", &age); // On demande d'entrer l'âge avec scanf

    printf("Ah ! Vous avez donc %d ans !\n\n", age);

    return 0;

}

int main(int argc, char* argv[]) // Équivalent de int main()

{
    int nombreDeVies;

    nombreDeVies = 5;

    printf("Vous avez %d vies\n", nombreDeVies);

    printf("**** B A M ****\n"); // Là il se prend un grand coup sur la tête

    nombreDeVies = 4; // Il vient de perdre une vie !

    printf("Ah desole, il ne vous reste plus que %d vies maintenant !\n\n", nombreDeVies);

    return 0;
}


int main(int argc, char* argv[]) // Équivalent de int main()

{
    int resultat = 0, nombre1 = 0, nombre2 = 0;

    printf("Tapez un entier : "); // On demande d'entrer la valeur de nombre1 avec printf

    scanf_s("%d", &nombre1); // On stocke la valeur de nombre1 avec scanf

    printf("Tapez un nombre : ");

    scanf_s("%d", &nombre2);

    resultat = nombre1 + nombre2;

    printf("%d + %d = %d\n", nombre1, nombre2, resultat);

    return 0;
}


Petit pense bete

int nombre = 2;

nombre += 4; // nombre vaut 6...
nombre -= 3; // ... nombre vaut maintenant 3
nombre *= 5; // ... nombre vaut 15
nombre /= 3; // ... nombre vaut 5
nombre %= 3; // ... nombre vaut 2 (car 5 = 1 * 3 + 2)

int main()
{
    int valeur1 = 10, valeur2 = 5;

    int resultat;

    resultat = valeur1 + valeur2;

    printf("%d \n", resultat);

    return 0;
}
int main()
{
    int volume = 80;

    if (volume == 0)
    {
        printf("Le volume est nul ! \n");
    }

    else if (volume <= 70)
    {
        printf("Le volume est correct ! \n");
    }

    else
    {
        printf("Le volume est trop fort ! \n");

    }
    return 0;
}

*/

int main()
{
    int stockMenu = 0;

    printf("=== MENU ==== \n");
    printf("\n 1. Royal Cheese \n 2. Mac Deluxe \n 3. Royal Bacon \n 4. Big Mac \n Votre choix ? \n");
    scanf_s("%d", &stockMenu);

    switch (stockMenu)
    {
    case 1:
        printf("Tu as choisi le menu Royal Cheese !");
        break;
    case 2:
        printf("Tu as choisi le menu Mac Deluxe !");
        break;
    case 3:
        printf("Tu as choisi le menu Royal Bacon !");
        break;
    case 4:
        printf("Tu as choisi le menu Big Mac !");
        break;
    default:
        printf("Bah t'as pas faim ?");
        break;
    }

    return 0;
}




// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
