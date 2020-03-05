#include "Point.h"
#include "Snake.h"
#include <iostream>

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
//        for(int i=0;i<20;i++)
//        {
//           
//        }
}




Snake::~Snake() //destructeur
{

}
