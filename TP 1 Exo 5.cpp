#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int facto(int fac, int t) {
	if (t > 1) {
		fac = fac * t;
		t--;
		fac = facto(fac, t);
		return fac;
	}
	return fac;
}

int main() {
	int nombre;
	printf("Entrez votre valeur : ");
	scanf("%d", &nombre);
	int res = facto(nombre, nombre - 1);
	printf("Resultat : %d", res);
}

/* Ecrire une fonction qui calcule n ! c'est-à-dire : n != n*(n-1)*(n-2)*…3*2*1. avec n>=0 et
0 !=1
Avec n unsigned int passé en paramètre et initialisé dans le programme principal par
l’utilisateur */
