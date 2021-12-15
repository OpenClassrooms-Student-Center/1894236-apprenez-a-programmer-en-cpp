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
    
    cout << euroUtilisateur << "€ équivaut à " << resultat << "$" << endl;
    return 0;
}
