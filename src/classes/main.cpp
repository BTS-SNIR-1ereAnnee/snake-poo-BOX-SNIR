/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include <ncurses.h>

using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p(10,4);
    p.drawPoint();
    Point p2(10,5);
    p2.drawPoint();
    p.moveUp();
    p.drawPoint();
    p.moveDown();
    p.drawPoint();
    cout << "La valeur est de: " << p.getX();
    p.setX(5);
    cout << "La valeur est de: " << p.getX();
    
    p.drawPoint();
//    p.moveLeft();
//    p.drawPoint();
//    p.moveRight();
//    p.drawPoint();
//    p.erasePoint();
//    p.debug();
    
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
