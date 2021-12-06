#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int Minuscule(char * chaine) {
	int i = 0;
	int m = 0;
	
	while (chaine[i] != '\0') { 
		if (chaine[i] == 'a') {
			m++;
			chaine[i] = 'A';
		}

		if (chaine[i] == 'b') {
			m++;
			chaine[i] = 'B';
		}

		if (chaine[i] == 'c') {
			m++;
			chaine[i] = 'C';
		}

		if (chaine[i] == 'd') {
			m++;
			chaine[i] = 'D';
		}

		if (chaine[i] == 'e') {
			m++;
			chaine[i] = 'E';
		}

		if (chaine[i] == 'f') {
			m++;
			chaine[i] = 'F';
		}

		if (chaine[i] == 'g') {
			m++;
			chaine[i] = 'G';
		}

		if (chaine[i] == 'h') {
			m++;
			chaine[i] = 'H';
		}

		if (chaine[i] == 'i') {
			m++;
			chaine[i] = 'I';
		}

		if (chaine[i] == 'j') {
			m++;
			chaine[i] = 'J';
		}

		if (chaine[i] == 'k') {
			m++;
			chaine[i] = 'K';
		}

		if (chaine[i] == 'l') {
			m++;
			chaine[i] = 'L';
		}

		if (chaine[i] == 'm') {
			m++;
			chaine[i] = 'M';
		}

		if (chaine[i] == 'n') {
			m++;
			chaine[i] = 'N';
		}

		if (chaine[i] == 'o') {
			m++;
			chaine[i] = 'O';
		}

		if (chaine[i] == 'p') {
			m++;
			chaine[i] = 'P';
		}

		if (chaine[i] == 'q') {
			m++;
			chaine[i] = 'Q';
		}

		if (chaine[i] == 'r') {
			m++;
			chaine[i] = 'R';
		}

		if (chaine[i] == 's') {
			m++;
			chaine[i] = 'S';
		}

		if (chaine[i] == 't') {
			m++;
			chaine[i] = 'T';
		}

		if (chaine[i] == 'u') {
			m++;
			chaine[i] = 'U';
		}

		if (chaine[i] == 'v') {
			m++;
			chaine[i] = 'V';
		}

		if (chaine[i] == 'w') {
			m++;
			chaine[i] = 'W';
		}

		if (chaine[i] == 'y') {
			m++;
			chaine[i] = 'Y';
		}

		if (chaine[i] == 'z') {
			m++;
			chaine[i] = 'Z';
		}
		i++;


	}
	return i;
}

int main()
{
	char chaine[100];
	printf("Saisir une chaine de caractere : ");
	gets_s(chaine);
	int minuscule = Minuscule(chaine);
	printf("MAJ : %s le nombre de lettre modifier et : %d ", chaine, minuscule);

}
/* Ecrire une fonction transforme qui permet de transformer les caractères minuscules en
majuscule dans une chaine passée en argument.
La chaine modifiée sera affichée dans le programme principal, ainsi que le nombre de lettres
qui ont subies une modification. */
