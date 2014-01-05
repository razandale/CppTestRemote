#include <iostream>
using namespace std;

class shape://---------------------------------------------------------    
{
public:
    explicit shape(int lenght, int width): //constructor
        itsLenght(lenght), itsWidth(Width) //Initialisation by razandale
        {}

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
    explicit rectangle(int lenght, int width):
    shape(lenght, width) //Explicit call of basic constructor
    {}
    rectangle(const rectangle &rhs);
    virtual rectangle * Clone ()
        {return new rectangle(*this);}
    virtual ~rectangle();
    virtual draw() const {cout << "Drawing a rectangle";}
};

rectangle::rectangle(const rectangle &rhs)
{
    itsLenght = rhs.itsLenght;
    itsWidth = rhs.itsWidth;
}
//---------------------------------------------------------------------
class square: public recangle
{
public:
    explicit square():
    rectangle (lenght, width)
    {};
    square(const square &rhs);
    virtual square * Clone ()
        {return new square(*this);}
    virtual ~square();
    virtual draw() const {cout << "Drawing a square";}
};

square::square(const square &rhs)
{
    itsLenght = rhs.itsLenght;
    itsWidth = rhs.itsWidth;
}    

int main ()
{
    
}
