#ifndef SNAKE_H
#define SNAKE_H
#include "Point.h"
class Snake
{
public:
    
    Snake();
    
    virtual ~Snake();
    
    void ajouterPoint(Point p);
    
    void afficher();
    
protected:

private:

       Point m_serpent[4];
       int m_indexSerpent;
     
};

#endif // POINT_H
