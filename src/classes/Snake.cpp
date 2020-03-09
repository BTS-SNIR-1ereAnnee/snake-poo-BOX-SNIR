#include "Point.h"
#include "Snake.h"
#include <iostream>
#include <ncurses.h>
using namespace std;

Snake::Snake() //contructeur
{
    
}

void Snake::ajouterPoint(Point p) //implemantation de la methode
{
    this->m_serpent[m_indexSerpent] = p;
}


void Snake::afficher()  //implemantation de la methode
{
        for(int i=0;i<20;i++)
         {
            m_serpent[i].drawPoint();  //Affiche le tableau de points 
         }
}

void Snake::moveDown()
{
     for(int i=0;i<20;i++)
         {
            m_serpent[i].moveDown();  //Affiche le tableau de points 
         }
}

void Snake::moveRight()
{
    for(int i=0;i<20;i++)
         {
            m_serpent[i].moveRight();  //Affiche le tableau de points 
         }
}


Snake::~Snake() //destructeur
{

}
