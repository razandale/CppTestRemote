#include <iostream>
using namespace std;

class shape:    
{
public:
    shape(int lenght, int width)
        {itsLenght = lenght; itsWidth = width;} //constructor

    shape * shape(shape const &rhs)//copy constructor
        {}

    virtual shape * Clone ()//virtual "copy constructor"
        {returnt new shape(*this);}

    virtual ~shape();//destructor
    virtual draw() {cout << "Drawing a shape";} //virtual method

protected:
    int itsLenght;
    int itsWidth;
}
