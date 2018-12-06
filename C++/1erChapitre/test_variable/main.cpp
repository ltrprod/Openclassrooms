#include <iostream>
#include <string>
using namespace std;

int main()
{
//Initialiser et declarer
    double pi(3.14159);
    bool VarBool(true);
    char lettrePrenom('L');
    string nomUtilisateur("Cuvelier");

    int a(2),b(4),c(-1);
    string prenom("Albert"), nom("Machin");
s
//Declarer sans initialiser
    string nomEleves;
    int nombreEleves;
    bool elevesModeles;

//Reference//
    int ageEleves(21);
    int& maVariable(ageEleves); //la reference doit etre du meme type que la variable originelle


    cout << "Prenom: " << prenom << endl << "Nom: " << nom <<endl;

    return 0;
}
