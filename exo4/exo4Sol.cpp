// Les manipulateurs de <iomanip> pour l'affichage.
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int valeur = 123345;
	double moyenne = 45.89089;
	bool continuer = true;

	//TODO: Afficher «valeur» et «moyenne» sur deux lignes et pour qu'ils soient alignés à droite à la 12e colonne de caractères.
	cout << setw(12) << valeur << endl;
	cout << setw(12) << moyenne << endl;

	//TODO: Afficher «moyenne» en notation scientifique avec 2 chiffres de précision après le point.
	cout << scientific << setprecision(2) << moyenne << endl;

	//TODO: Afficher «moyenne» et valeir en notation fixe (non scientifique).  Combien de chiffres après le point sont affichés?  Pourquoi?
	cout << fixed << moyenne << endl;  // Affiche encore 2 chiffres après le point car setprecision reste actif jusqu'au prochain changement de précision demandé.
	cout << valeur << endl;  // Aucun chiffre après le point, setprecision n'affecte pas l'affichage des entiers.

	//TODO: Afficher «continuer» comme le texte «true» ou «false» sans utiliser de condition.
	cout << boolalpha << continuer << endl;

	//TODO: En une ligne, afficher est-ce que la moyenne est inférieure à 30 comme «true» ou «false» sans utiliser de structure conditionnelle (if, switch/case, ou ?: ).
	cout << (moyenne < 30) << endl;

	//TODO: Afficher «continuer» comme 0 ou 1 sans utiliser de condition.
	cout << noboolalpha << continuer <<  endl;

	//TODO: Afficher «valeur» en hexadécimal.
	cout << hex << valeur << endl;

	//TODO: Afficher «valeur» en décimal, aligné à droite à la colonne 10, avec des «*» devant pour faire l'alignement.
	cout << dec << setfill('*') << setw(10) << valeur << endl;
}