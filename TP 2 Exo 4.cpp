#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100
#define NUMS_TO_GENERATE 20


void lire(int * tab) {
	srand(time(NULL));

}

void afficher(int * tab) {
	int v = 0;
	for (int i = 0; i < NUMS_TO_GENERATE; i++) {
		printf("%d ", rand() % MAX);
	}

}

void indice_min(int * tab) {


}

void trier(int * tab) {

	int i, j;
	int tmp;

	for (i = 0; i < 20 - 1; i++)
	{
		for (j = 0; j < 20 - i - 1; j++)
		{
			if (tab[i] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
		}
	}

}

int main() {
	int tableau[20];
	lire(tableau);
	afficher(tableau);
	trier(tableau);
}

/* Il s'agit d'écrire quatre fonctions.
 La première, « lire » permet d’entrer les valeurs dans un tableau dont la taille ne doit pas
dépasser 20 éléments. 

La seconde, affiche, permet d’afficher le tableau trié.


La troisième, « indice_min », doit, étant donnés deux indices d'un tableau, indiquer celui en
lequel est rangée la plus petite donnée.


La quatrième, « trier », doit obligatoirement utiliser la fonction indice_min pour trier le
tableau. Pour cela, on utilisera un "tri à bulle".  */
