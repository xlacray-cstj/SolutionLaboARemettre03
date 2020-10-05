// But : Complétez ce programme pour qu’il donne la possibilité à l’utilisateur de deviner le nombre contenu dans iRandom
// Auteur : Xavier Lacroix-Raymond
// Date : 03-10-2020


#include <iostream>
#include <time.h>

using namespace std;			// Pour éviter d'écrire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// Déclaration des variables
	int iRandom;	// Permet de mémoriser le nombre choisi aléatoirement par l'ordinateur
	int compteur = 0;
	int devinette;
	int nbChances = 5;

	srand(time(0));	// pour activer l'aléatoire dans le programme
	iRandom = rand() % 101;	// l'ordinateur calcule un nombre entre 0 et 100 et le stocke dans iRandom

	cout << "J'ai un chiffre en tête, essaye de le deviner. Il est entre 0 et 100. Tu as cinq chances" << endl;
	cout << "--> ";

	cin >> devinette;

	while (devinette <= 0 || devinette >= 100)
	{
		cout << "ERREUR: Tu dois entrer une valeur entre 0 et 100" << endl;

		system("pause");

		system("cls");

		cout << "J'ai un chiffre en tête, essaye de le deviner. Il est entre 0 et 100. Tu as cinq chances" << endl;
		cout << "-->";

		cin >> devinette;
	}

	while (devinette != iRandom)
	{
		while (nbChances > 0)
		{
			cout << "Ce n'est pas ça. Il te reste " << nbChances << " chances" << endl;

			system("pause");

			system("cls");


			cout << "J'ai un chiffre en tête, essaye de le deviner. Il est entre 0 et 100. Tu as cinq chances" << endl;
			cout << "-->";

			cin >> devinette;

			nbChances--;
		}
	}

	cout << "Félicitations! Tu as gagné!";
		
	return 0;
}

/*
	Désolé, mais je n'ai pas réussi à rendre mon programme 100% fonctionnel. J'ai essayé à plusieurs reprises, mais j'ai échoué.
*/

/*----------PLAN DE TEST----------
devinette					iRandom					nbChances

0							70						4
56							70						3
78							70						2
90							70						1
70							70						Tu as gagné!

-34						ERREUR: Tu dois entrer une valeur entre 0 et 100
101						ERREUR: Tu dois entrer une valeur entre 0 et 100
576						ERREUR: Tu dois entrer une valeur entre 0 et 100

65							65						Tu as gagné!

*/