#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int puissance(int x, int y){
	
	int p = 1;
	int i;

	for (i = 0; i < y; i++) {
		p = p * x;
	}

	return p;
}

int main()
{
	int x;
	int y;
	int p;

	printf("Entrez votre valeur : ");
	scanf("%d", &x);
	printf("Entrez votre valeur : ");
	scanf("%d", &y);

	p = puissance(x, y);

	printf("La puissance de %d et %d = %d", x, y, p);
}

/* Ecrire une fonction de prototype int puissance(int a, int b) qui calcule, a puissance b, a et b
étant des entiers et qui renvoie le résultat au programme appelant.
Dans main(), demandez à l’utilisateur d’entrer 2 valeurs x et y, puis grâce à la fonction
puissance vous calculerez x puis y et vous afficherez le résultat obtenu . */
