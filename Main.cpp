class shape:
    shape(lenght,width)    
{
public:
    shape(int lenght, int width){itsLenght = lenght; itsWidth = width;} //constructor
    shape * shape(shape const &rhs);//copy constructor
    virtual shape * Clone () {returnt new shape(*this);}//virtual "copy constructor"
    virtual ~shape();
    virtual draw(); //virtual method

protected:
    int itsLenght;
    int itsWidth;
}
