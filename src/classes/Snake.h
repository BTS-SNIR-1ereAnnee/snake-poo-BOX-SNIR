#ifndef SNAKE_H
#define SNAKE_H
#include "Point.h"
class Snake
{
public:
    
    Snake(); //Constructeur par defaut
    
    virtual ~Snake(); //destructeur par defaut          
    
    
    
    void setPoint(int x, int y); //Definition des coordonnées du Snake
    
    void ajouterPoint(Point p); //declaration de la methode
    
    void afficher();  //declaration de la methode
    
    void moveDown();     //declaration de la methode pour aller vers le bas     
    void moveRight();     //declaration de la methode pour aller vers la droite 
    void moveUp();         //declaration de la methode pour aller vers le haut
    void moveLeft();      //declaration de la methode pour aller vers la gauche
   
protected:

private:

       Point m_serpent[20];  //declaration de l'attribut
       int m_indexSerpent;  //declaration de l'attribut
        
       
     
};

#endif // SNAKE_H
