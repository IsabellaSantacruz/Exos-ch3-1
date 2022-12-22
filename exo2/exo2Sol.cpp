/*---------------------------------------------------------------
(Si l'énoncé dépasse de vetre écran vers la droite, aller dans le menu 
Outils > Options > Éditeur de texte > C/C++, et cocher «Enveloppement de mots». )

DESCRIPTION: Le programme doit lire le fichier horaire.txt (regardez son contenu dans un éditeur texte pour voir son format) et afficher dans une phrase l'heure de départ, d'arrivée et le nombre de passagers d'un autobus.  Le nombre doit être lu comme un nombre, les heures peuvent être lues comme des textes.
---------------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//? Fonction ajoutée pour la lisibilité du code.  On voit comment passer un paramètre avec & seulement au chapitre 5, donc votre réponse peut utiliser plusieurs fois le «ignore» dans le «main» ou utiliser «getline» sans utiliser le résultat.
void ignorerLigneFichier(istream& fichier)
{
	fichier.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main()
{
	// Ouverture et lecture du fichier.
	ifstream fichierHoraire("horaire.txt");

	string heureDepart, heureArrivee; int nPassagers;
	ignorerLigneFichier(fichierHoraire);
	getline(fichierHoraire, heureDepart); //? Possible d'utiliser >> puisqu'il n'y a normalement pas d'espace dans des heures en format 24h tel que dans l'exemple.
	ignorerLigneFichier(fichierHoraire);
	getline(fichierHoraire, heureArrivee);
	ignorerLigneFichier(fichierHoraire);
	fichierHoraire >> nPassagers;

	// Affichage.
	cout << "L'autobus part a " << heureDepart << ", arrive a " << heureArrivee << " et aura " << nPassagers << " passagers." << endl;
}