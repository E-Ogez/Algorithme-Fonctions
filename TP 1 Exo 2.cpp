#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void affiche(int *t)
{
	for (int i = 0; i < 10; i++) {
		printf("Nombre %d/10 : ", i + 1);
		printf("%d \n", t[i]);
	}
}
int main()
{
	int tab[10] = { 1,2,4,8,16,32,64,128,256,512 };

	affiche(tab);

}

/* Un programme contient la déclaration suivante :
Int tab[10]={1,2,4,8,16,32,64,128,256,512} ;
Ecrire une fonction de prototype void affiche (int *t) qui affiche les éléments du tableau, et
leur position ; la mettre en œuvre dans main(). */
