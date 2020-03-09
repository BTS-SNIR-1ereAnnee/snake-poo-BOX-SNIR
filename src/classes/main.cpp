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
char c = 0;

     //pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    //Point p(10,4);
    //p.drawPoint();
    //Point p2(10,5);
    //p2.drawPoint();
   
// 
 Snake serpent; //Declaration variable serpent de type Snake
   serpent.afficher(); // Appelle la fonction pour afficher 
//   
//    serpent.moveDown(); //Deplace le snake en bas 
//    serpent.afficher();// Appelle la fonction pour afficher 
//    
//    serpent.moveRight();//Deplace le snake vers la droite 
//    serpent.afficher();// Appelle la fonction pour afficher 
//    
//    serpent.moveUp();//Deplace le snake en bas 
//    serpent.afficher();// Appelle la fonction pour afficher 
//    
//    serpent.moveLeft();//Deplace le snake vers la gauche
//    serpent.afficher();// Appelle la fonction pour afficher 
    
   
    keypad (stdscr, TRUE);
    noecho();
    cbreak();
    
    while(c != 27)
    {   
        c = getch();
        
        
        
        
        if(c == 'z')
        {
            serpent.moveUp();//Deplace le snake en bas 
           
        }
        else if(c == 'q')
         {
                serpent.moveLeft();
         }
          else  if(c == 's')
          {
                serpent.moveDown();
          }
           else if(c == 'd')
           {
                serpent.moveRight();
           }
             
             serpent.afficher();
    }
    
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
