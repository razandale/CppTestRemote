class shape:
    shape(lenght,width)    
{
    shape(int lenght, int width) //constructor
    shape * shape(shape const &rhs)//copy constructor
    virtual shape * Clone () {returnt new shape(*this);}//virtual "copy constructor"
}