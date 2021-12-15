//
//  main.cpp
//  Priority
//
//  Created by Ranga Gonnage on 15/12/2021.
//

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#include "main.hpp"

using namespace std;

void melangerLettres(string *mot)
{
    string melange;
    int position(0);
    std::cout << *mot << endl;

   //Tant qu'on n'a pas extrait toutes les lettres du mot
    while (mot->size() != 0)
    {
        //On choisit un numéro de lettre au hasard dans le mot
        position = rand() % mot->size();
        //On ajoute la lettre dans le mot mélangé
        melange += mot->at(position);
        //On retire cette lettre du mot mystère
        //Pour ne pas la prendre une deuxième fois
        mot->erase(position, 1);
    }
    //On assigne le mot mélangé au pointeur
    *mot = melange;
}

int main()
{
    string motMystere, motUtilisateur, *motMelange(nullptr);
    

    //Initialisation des nombres aléatoires
    srand(time(0));

    //1 : On demande de saisir un mot
    cout << "Saisissez un mot à l’abri des regards : ";
    cin >> motMystere;
    
    motMelange = new string(motMystere);

    //2 : On récupère le mot avec les lettres mélangées dans motMelange
    melangerLettres(motMelange);

    //3 : On demande à l'utilisateur quel est le mot mystère
    while (motUtilisateur != motMystere)
    {
        cout << endl << "Quel est ce mot ? " << *motMelange << endl;
        cin >> motUtilisateur;

        if (motUtilisateur == motMystere)
        {
            cout << "Bravo !" << endl;
        }
        else
        {
            cout << "Ce n'est pas le mot !" << endl;
        }
    }
    //On recommence tant qu'il n'a pas trouvé
    
    delete motMelange;

    return 0;
}
