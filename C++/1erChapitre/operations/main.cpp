#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    cout << "Quel est votre nom ?" << endl;
    string nomComplet("Sans Nom");
    getline(cin, nomComplet);


    cout << "Quel age avez-vous ?" << endl;
    int ageUtilisateur(0); //Ou int ageUtilisateur
    cin >> ageUtilisateur;


    cout << "En quelle annee somme nous ? ?" << endl;
    int anneeActuelle;
    cin >> anneeActuelle;
    int anneeNaissance(anneeActuelle - ageUtilisateur);

    cout << nomComplet << ", vous avez " << ageUtilisateur << " ans et vous etes nes en " << anneeNaissance << endl;


    return 0;
}
  // Mettre un cin avant un getline() ne fonctionne pas
  // Sauf ainsi :
    //  cin.ignore();
    //  getline(cin, maVariable);
