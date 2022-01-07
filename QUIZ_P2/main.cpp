//
//  main.cpp
//  convertisseur
//
//  Created by Ranga Gonnage on 14/12/2021.
//

#include <iostream>

using namespace std;

int main() {
    double euroUtilisateur(0);
    double const ratioDollar(1.20);
    
    cout << "Convertisseur euro -> dollar" << endl;
    
    cout << "Entrez un montant à convertir en dollar : ";
    cin >> euroUtilisateur;
    
    double resultat = euroUtilisateur * ratioDollar;
    
    if (euroUtilisateur < 0)
    {
        cout << "La saisie est incorrecte ! " << endl;
    }
    else
    {
        cout << euroUtilisateur << "€ équivaut à " << resultat << "$" << endl;
    }

    return 0;
}

// Solution avec la boucle pour la question 8

/*
int main() {
    double euroUtilisateur(0);
    double const ratioDollar(1.20);
    
    cout << "Convertisseur euro -> dollar" << endl;
    
    do
    {
        cout << "Entrez un montant à convertir en dollar : ";
        cin >> euroUtilisateur;
        
        double resultat = euroUtilisateur * ratioDollar;
        
        if (euroUtilisateur < 0)
        {
            cout << "La saisie est incorrecte ! " << endl;
        }
        else
        {
            cout << euroUtilisateur << "€ équivaut à " << resultat << "$" << endl;
        }
    } while (euroUtilisateur < 0);
    
    return 0;
}
*/

