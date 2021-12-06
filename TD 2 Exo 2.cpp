#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>

void mot_de_passe(char* mdp) {
	int z = 0;
	do {
		mdp[z] = _getch();
		printf("*");
		z++;
	} while (mdp[z - 1] != 13);
	mdp[z] = '\0';
}

int main()
{
	printf("Saisir MDP  : ");
	char mdp[100];
	mot_de_passe(mdp);
	printf("\n%s", mdp);
}

/* Ecrire une fonction mot_de_passe permettant de saisir dans une chaîne de caractères passée
en argument un mot de passe. Pour que ce mot de passe soit gardé secret, vous ferez en sorte
qu’à chaque appui sur une touche, on fasse apparaître une étoile.
Dans le programme principal, vous appellerez la fonction mot de passe puis vous afficherez le
mot de passe réel.
NB : Utiliser la fonction getch() permet de lire la valeur à stocker dans la chaîne.
Pour finir la saisie, appuyez sur la touche « ENTREE », qui possède le code ASCII 13 */