#define _CRT_SECURE_NO_WARNINGS
#include <cstdlib>
#include <iostream>
#include <stdio.h>

float moyenne(int x, int y);

int main()
{
	int x = 0;
	int y = 0;
	float m;

	printf("Premiere Valeur (x) : ", x);
	scanf("%d", &x);
	printf("Deuzieme Valeur (y) : ", y);
	scanf("%d", &y);

	m = moyenne(x, y);
	printf("La moyenne de %d et %d est : %f\n", x, y, m);
	return 0;

}
	float moyenne(int x, int y)
{
		float m;
		int s;

		s = x + y;
		m = s / 2.0;

		printf("a=%d, b=%d, m=%f, s=%d\n", x, y, m, s);
		return m;
}

/* Ecrire une fonction qui calcule x puis y. Cette fonction sera appelée dans un
programme qui affichera ensuite le résultat */