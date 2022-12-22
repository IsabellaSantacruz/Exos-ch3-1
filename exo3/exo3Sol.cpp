/*---------------------------------------------------------------
DESCRIPTION: Le programme doit lire les statistiques de 3 anciens joueurs du CH, d'un fichier Stats3.txt, et écrit dans le  fichier Pointeurs.txt le numéro du joueur et le nombre de buts.  Chaque ligne du fichier Stats3.txt contient les informations dans l'ordre: numéro, prénom, nom, buts, aides.  Les prénom et nom ne contiennent pas d'espaces.
---------------------------------------------------------------*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream fichierStatistiques("Stats3.txt");
	ofstream fichierSortie("Pointeurs.txt");

	//? Les boucles sont vues plus en détail au chapitre 4.
	for (int i = 0; i < 3; i++) {
		int numero; string prenom, nom; int buts, aides;
		fichierStatistiques >> numero >> prenom >> nom >> buts >> aides;
		fichierSortie << numero << " : " << buts << endl;
	}
}