// Lecture avec >>, getline, et get.
// Utilisation de ignore et clear.
#include <iostream>
#include <string>
#include <limits>
using namespace std;

//? Fonction ajoutée pour la lisibilité du code.
void ignorerJusquaFinLigne()
{
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
	//TODO: Demander et lire un entier.
	cout << "Entrer un entier: ";
	int entier;
	cin >> entier;
	ignorerJusquaFinLigne();  // Sinon la lecture avec «getline» ci-dessous lira la fin de ligne laissée après l'entier.  Voir la définition de la fonction plus haut.
	
	//TODO: Demander et lire une phrase (texte qui peut contenir des espaces).
	cout << "Entrer une phrase: ";
	string phrase;
	getline(cin, phrase);

	//TODO: Demander et lire un réel.
	cout << "Entrer un reel: ";
	double reel;
	cin >> reel;
	ignorerJusquaFinLigne();  // Sinon la lecture avec «get» ci-dessous lira la fin de ligne laissée après le réel.

	//TODO: Demander et lire un caractère qui pourrait être un espace; lors de l'exécution, testez que ça fonctionne avec espace autant qu'avec d'autre lettres.
	cout << "Entrer un caractere: ";
	char caractere = cin.get();

	//TODO: Demander un entier mais faire exprès d'entrer des lettres au clavier lors de l'exécution.
	cout << "Entrer un entier: ";
	int entier2;
	cin >> entier2;

	//TODO: Demander un autre entier (en s'assurant que ça fonctionne malgré la possible erreur ci-dessus).
	cin.clear();  // Enlève l'état d'erreur.
	ignorerJusquaFinLigne();  // Enlève la mauvaise entrée faite pour l'entier précédent.
	cout << "Entrer un autre entier: ";
	int entier3;
	cin >> entier3;

	//TODO: Afficher tout ce qui a été lu ci-dessus.
	cout << entier << "," << phrase << "," << reel << "," << caractere << "," << entier2 << "," << entier3 << endl;
}