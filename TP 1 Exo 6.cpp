#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void inverse(char *ch) {

	int rev[100], t, i, j = 0;
	t = strlen(ch);
	for (i = t - 1; i >= 0; i--)
	{
		rev[j++] = ch[i];
	}
	rev[t] = '\0';
	for (i = 0; i < t; i++)
		printf(" %c", rev[i]);
}

int main()
{
	char ch[100], rev[100];
	int t, j;

	printf("Entrez une chaine de caractere :  ");
	gets_s(ch);
	
	inverse(ch);

}

/* Ecrire une fonction de prototype « void inverse(char *ch) » qui permette de convertir un texte,
c’est à dire qui inverse le contenu d’une chaine de caractères. la mettre en œuvre dans main().
Ex :
il fait beau va donner uaeb tiaf li */