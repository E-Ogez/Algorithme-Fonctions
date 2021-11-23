#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

float min(float* tab){

	float nbMin = tab[0];

	for (int i = 1; i < 8; i++) {
		if (tab[i] < nbMin) nbMin = tab[i];
	}
	
	return nbMin;
}

float max(float *tab){

	float nbMax = tab[0];

	for (int i = 1; i < 8; i++) {
		if (tab[i] > nbMax) nbMax = tab[i];
	}

	return nbMax;
}

int main()
{
	float liste[8] = { 1.6,-6.9,9.67,5.90,345,-23.6,78,34.6 };

	float o, l;

	o = min(liste);
	l = max(liste);

	printf("\nLa valeur minimale est : %f", o);
	printf("\nLa valeur maximale est : %f", l);
}

/* Un programme contient la déclaration suivante :
Float liste[8]={1.6,-6.9,9.67,5.90,345,-23.6,78,34.6} ;
Ecrire une fonction de prototype float min (float* tab) qui renvoie le minimum de la liste.
Ecrire une fonction de prototype float max (float *tab) qui renvoie le maximum de la liste.
Les mettre en œuvre dans main(). */
