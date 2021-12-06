#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int multipledeux(int nombre) {
	int nb = 0;
	if (nombre % 2 == 0) nb = 1;
	return nb;
}

int multipletr(int nombre) {
	int nb = 0;
	if (nombre % 3 == 0) nb = 1;
	return nb;
}

int main()
{
	int nombre;
	printf("Saisir un nombre : ");
	scanf("%d", &nombre);
	int multiple2 = multipledeux(nombre);
	int multiple3 = multipletr(nombre);
	if (multiple2 == 1 && multiple3 == 1) {
		printf("%d est multiple de 2, de 3 et de 6", nombre);
	}
	else {
		if (multiple2 == 1) {
			printf("%d est multiple de 2 seulement", nombre);
		}
		else if (multiple3 == 1) {
			printf("%d est multiple de 3 seulement", nombre);
		}
		else {
			printf("%d n'est pas multiple de 2, ni de 3, ni de 6", nombre);
		}
	}
}

/* Ecrire deux fonctions qui retourne une valeur entière permettant de savoir si l’entier passé en
argument est multiple de deux et multiple de trois pour la seconde fonction.
Utiliser ces deux fonctions dans un petit programme qui lit un nombre entier et qui précise s’il
est pair, multiple de 3 et/ou multiple de 6. */
