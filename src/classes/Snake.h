#ifndef SNAKE_H
#define SNAKE_H
#include "Point.h"
class Snake
{
public:
    
    Snake(); //Constructeur par defaut
    
   
    
    virtual ~Snake(); //destructeur par defaut          
    
    void ajouterPoint(Point p); //declaration de la methode
    
    void afficher();  //declaration de la methode
    
protected:

private:

       Point m_serpent[20];  //declaration de l'attribut
       int m_indexSerpent;  //declaration de l'attribut
     
};

#endif // SNAKE_H
