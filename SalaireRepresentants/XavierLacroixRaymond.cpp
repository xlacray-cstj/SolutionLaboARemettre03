// But : D�velopper un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et affiche son salaire.
// Auteur : Xavier Lacroix-Raymond
// Date : 3-10-2020


#include <iostream>

using namespace std;			// Pour �viter d'�crire std:: dans les instructions comme cout, cin, endl, ...			

int main()
{
	setlocale(LC_ALL, ""); // Pour les accents

	// D�claration des variables
	float valeurVenteHebdo;
	float salaire = 0;

	// D�claration des constantes
	const int SALAIRE_MINIMUM = 250;
	const float BONUS_COMMISSION = 7.5 / 100;

	// On donne une valeur � valeurVenteHebdo
	cout << "Veuillez entrer la valeur totale de vos ventes cette semaine (ou -1 pour quitter): ";
	cin >> valeurVenteHebdo;

	// On valide que l'utilisateur ne rentre pas de valeur de vente n�gative
	while (valeurVenteHebdo <= -2 || valeurVenteHebdo == 0)
	{
		cout << "ERREUR: La donn�e entr�e n'est pas valide. Veuillez r�essayer" << endl;
	
		system("pause"); // Permet � l'utilisateur de lire le message d'erreur avant que l'�cran ne s'efface

		system("cls"); // Efface l'�cran pour garder l'affichage clair

		cout << "Veuillez entrer la valeur totale de vos ventes cette semaine (ou -1 pour quitter): ";

		cin >> valeurVenteHebdo;
	}

	while (valeurVenteHebdo != -1) // Si l'utilisateur entre -1, le programme s'arr�te
	{
		// On calcule et affiche le salaire de l'employ� de la semaine
		salaire = SALAIRE_MINIMUM + (BONUS_COMMISSION * valeurVenteHebdo);

		cout << "Votre salaire est de: " << salaire << " $ cette semaine" << endl;

		// On donne une valeur � valeurVenteHebdo
		cout << "Veuillez entrer la valeur totale de vos ventes cette semaine (ou -1 pour quitter): ";
		cin >> valeurVenteHebdo;

		// On valide que l'utilisateur ne rentre pas de valeur de vente n�gative
		while (valeurVenteHebdo <= -2 || valeurVenteHebdo == 0)
		{
			cout << "ERREUR: La donn�e entr�e n'est pas valide. Veuillez r�essayer" << endl;

			system("pause");

			system("cls");

			cout << "Veuillez entrer la valeur totale de vos ventes cette semaine (ou -1 pour quitter): ";

			cin >> valeurVenteHebdo;
		}
	}
	return 0;
}

/*----------PLAN DE TEST----------
valeurVenteHebdo					salaire

5000								625
0									ERREUR: La donn�e entr�e n'est pas valide. Veuillez r�essayer
-1									*fais quitter le programme*
-2									ERREUR: La donn�e entr�e n'est pas valide. Veuillez r�essayer
-567								ERREUR: La donn�e entr�e n'est pas valide. Veuillez r�essayer
1000000								75250
*/