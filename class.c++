#include<iostream>
using namespace std;

class Rectangle
{
    protected:
        double length;

    public:
        double width;
        double getlength(void);
        void setlength (double len);
        double getArea(void);

};

double Rectangle::getlength(void)
{
    return length;
}

void Rectangle::setlength( double len)
{
    length = len;
}

double Rectangle::getArea(void)
{
    return length * width;
}

int main()
{
    double leng;

    Rectangle rect;
    cout<<"Input width: ";
    cin>>rect.width;

    cout<<"Input length: ";
    cin>>leng;

    rect.setlength(leng);

    cout<<"Length: "<<rect.getlength() <<endl;
    cout<<"Width: "<<rect.width <<endl;
    cout<<"Area of the Rectangle: "<<rect.getArea() <<endl;

    return 0;
}