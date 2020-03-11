#include "Point.h"
#include "Snake.h"
#include <iostream>
#include <ncurses.h>
using namespace std;

Snake::Snake() //contructeur
{
    
}

void Snake::ajouterPoint(Point p) //implemantation de la methode pour ajouter point
{
    this->m_serpent[m_indexSerpent] = p;
    
    m_indexSerpent ++;
}


void Snake::afficher()  //implemantation de la methode pour afficher 
{
        for(int i=0;i<20;i++)
         {
            m_serpent[i].drawPoint();  //Affiche le tableau de points 
         }
}

void Snake::efface()  //implemantation de la methode pour efface un Point p du tableau 
{
        for(int i=0;i<20;i++)
         {
            m_serpent[i-1].erasePoint();  //Efface Point p du tableau serpent   
         }
}
// Deplace le serpent vers le bas
void Snake::moveDown() 
{
     for(int i=0;i<20;i++)
         {
            m_serpent[i].moveDown();  //Affiche le tableau de points 
         }
}
// Deplace le serpent vers la droite
void Snake::moveRight()
{
    for(int i=0;i<20;i++)
         {
            m_serpent[i].moveRight();  //Affiche le tableau de points 
         }
}
// Deplace le serpent vers le haut
void Snake::moveUp()
{
   for(int i=0;i<20;i++)
         {
            m_serpent[i].moveUp();  //Affiche le tableau de points 
         }
}
// Deplace le serpent vers la gauche
void Snake::moveLeft()
{
    for(int i=0;i<20;i++)
         {
            m_serpent[i].moveLeft();  //Affiche le tableau de points 
         }
}

Snake::~Snake() //destructeur
{   

}
