// But : Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans iRandom
// Auteur : Xavier Lacroix-Raymond
// Date : 03-10-2020


#include <iostream>
#include <time.h>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, "");

	// D�claration des variables
	int iRandom;	// Permet de m�moriser le nombre choisi al�atoirement par l'ordinateur
	int compteur = 0;
	int devinette;
	int nbChances = 5;

	srand(time(0));	// pour activer l'al�atoire dans le programme
	iRandom = rand() % 101;	// l'ordinateur calcule un nombre entre 0 et 100 et le stocke dans iRandom

	cout << "J'ai un chiffre en t�te, essaye de le deviner. Il est entre 0 et 100. Tu as cinq chances" << endl;
	cout << "--> ";

	cin >> devinette;

	while (devinette <= 0 || devinette >= 100)
	{
		cout << "ERREUR: Tu dois entrer une valeur entre 0 et 100" << endl;

		system("pause");

		system("cls");

		cout << "J'ai un chiffre en t�te, essaye de le deviner. Il est entre 0 et 100. Tu as cinq chances" << endl;
		cout << "-->";

		cin >> devinette;
	}

	while (devinette != iRandom)
	{
		while (nbChances > 0)
		{
			cout << "Ce n'est pas �a. Il te reste " << nbChances << " chances" << endl;

			system("pause");

			system("cls");


			cout << "J'ai un chiffre en t�te, essaye de le deviner. Il est entre 0 et 100. Tu as cinq chances" << endl;
			cout << "-->";

			cin >> devinette;

			nbChances--;
		}
	}

	cout << "F�licitations! Tu as gagn�!";
		
	return 0;
}

/*
	D�sol�, mais je n'ai pas r�ussi � rendre mon programme 100% fonctionnel. J'ai essay� � plusieurs reprises, mais j'ai �chou�.
*/

/*----------PLAN DE TEST----------
devinette					iRandom					nbChances

0							70						4
56							70						3
78							70						2
90							70						1
70							70						Tu as gagn�!

-34						ERREUR: Tu dois entrer une valeur entre 0 et 100
101						ERREUR: Tu dois entrer une valeur entre 0 et 100
576						ERREUR: Tu dois entrer une valeur entre 0 et 100

65							65						Tu as gagn�!

*/