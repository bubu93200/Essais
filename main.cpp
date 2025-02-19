// Essai de code C++ avec VS code
// Il faut installer code runner pour activer les commandes directement
// Il faut, dans paramètres de code runner, activer "lancer le terminal" sinon l'interaction avec le clavier ne fonctionne pas.
//
//Pour la compilation on utilise cmake
//Pour générer le fichier de configuration CMakeLists.txt, on utilise la commande suivante :
//cmake -G "MinGW Makefiles" -DCMAKE_BUILD_TYPE=Debug -S . -B build

// Fichier main
//#include <stdio.h>
#include <cstdio>
//#include <stdlib.h>
#include <iostream>
using namespace std;

main()
{
    int a,b;
    printf("Entrez un nombre : ");
    fflush(stdout); // Force l'affichage du message
    //scanf("%d",&a);
    cin >> a;
    printf("Entrez un autre nombre : ");
    fflush(stdout); // Force l'affichage du message
    scanf("%d",&b);
    printf("La somme de %d et %d est %d\n",a,b,a+b);
    printf("La difference de %d et %d est %d\n",a,b,a-b);
    printf("Le produit de %d et %d est %d\n",a,b,a*b);
    printf("Le quotient de %d et %d est %d\n",a,b,a/b);
    printf("Le reste de la division de %d par %d est %d\n",a,b,a%b);
    //system("pause");
    return 0;
}