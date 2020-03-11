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

 
   

         Snake serpent;             //Declaration variable serpent de type Snake
         serpent.afficher();        // Appelle la fonction pour afficher 


   //Attribue les touches pour deplacer le Snake
    keypad (stdscr, TRUE); 
    noecho(); //Empeche la redondance de la touche pressé
    cbreak(); //Empeche l'affichage de la toucher pressé
    
    while(c != 27)
    {   
        c = getch();  
              serpent.efface();
        if(c == 'z')
        {
            serpent.moveUp();   //Deplace le snake en haut
           
        }
        else if(c == 'q')
         {
                serpent.moveLeft(); //Deplace le snake vers la gauche
         }
          else  if(c == 's')
          {
                serpent.moveDown(); //Deplace le snake en bas 
          }
           else if(c == 'd')
           {
                serpent.moveRight(); //Deplace le snake vers la droite
           }
             
             serpent.afficher();  //affiche le serpent 
             
    }
    
    //cout << "press any key to quit" << endl;
    getchar();
    fenetre->kill();
    return 0;
}
