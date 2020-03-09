/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include"Snake.h"
#include <ncurses.h>

using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    //Point p(10,4);
    //p.drawPoint();
    //Point p2(10,5);
    //p2.drawPoint();
   
 
   Snake serpent; //Declaration variable serpent de type Snake
   serpent.afficher(); // Appelle la fonction pour afficher 
   
    serpent.moveDown();
    serpent.afficher();
    
    serpent.moveRight();
    serpent.afficher();
    
    
    
    
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
