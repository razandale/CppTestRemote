#include <iostream>
using namespace std;

class shape://---------------------------------------------------------    
{
public:
    shape(int lenght, int width)
        {itsLenght = lenght; itsWidth = width;} //constructor

    shape(const shape &rhs)//copy constructor
        {}

    virtual shape * Clone ()//virtual "copy constructor"
        {return new shape(*this);}

    virtual ~shape();//destructor
    virtual draw() const {cout << "Drawing a shape";} //virtual method

protected:
    int itsLenght;
    int itsWidth;
};

shape::shape(const shape &rhs)
{
    itsLenght = rhs.itsLenght;
    itsWidth = rhs.itsWidth;
}
//---------------------------------------------------------------------
class rectangle: public shape
{
public:
    rectangle();
    rectangle(const rectangle &rhs);
    virtual rectangle * Clone ()
        {return new rectangle(*this);}
    virtual ~rectangle();
    virtual draw() const {cout << "Drawing a rectangle";}
};

rectangle::rectangle(const shape &rhs)
{
    itsLenght = rhs.itsLenght;
    itsWidth = rhs.itsWidth;
}
//---------------------------------------------------------------------
class square: public recangle
{
public:
    square();
    square(const square &rhs);
    virtual square * Clone ()
        {return new square(*this);}
    virtual ~square();
    virtual draw() const {cout << "Drawing a square";}
};

square::square(const shape &rhs)
{
    itsLenght = rhs.itsLenght;
    itsWidth = rhs.itsWidth;
}    
}
