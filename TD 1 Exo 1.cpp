#include <stdio.h>
#include <iostream>

void demo();
void main()
{
	int x = 1, y = 2;
	printf("\n Avant d appeler demo(), x = %d et y = %d", x, y);
	demo();
	printf("\n");
	printf("\n Apres avoir appele demo(), x = %d et y = %d", x, y);
	printf("\n");
}
void demo()
{
	int x = 88, y = 99;
	printf("\n");
	printf("\n Dans la fonction demo(), x = %d et y = %d", x, y);

}


/* Le résultat est :

	Avant d appeler demo(), x = 1 et y = 2

	Dans la fonction demo(), x = 88 et y = 99

	Apres avoir appele demo(), x = 1 et y = 2
*/
