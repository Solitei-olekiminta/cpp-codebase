#include<iostream>
using namespace std;

class Cuboid
{
    protected:
        double length;
        double height;

    public:
        double width;
        double getVolume(void);

        void setlength(double len);
        double getlength(void);
        void setheigth(double heig);
        double getheight(void);

};

void Cuboid::setlength(double len)
{
    length = len;
}

double Cuboid::getlength(void)
{
    return length;
}

void Cuboid::setheigth(double heig)
{
    height = heig;
}

double Cuboid::getheight(void)
{
    return height;
}

double Cuboid::getVolume(void)
{
    return length * width * height;
}

//Introduction of a derived class
class cuboid:Cuboid
{
    public:
        double length;
        double width;
        double heigth;

        double getVolume(void)
        {
            return length * width * height;
        }

};

int main()
{
    Cuboid Cub;
    cuboid cub;

    double Leng;
    double Heigh;

    cout<<"Input length: ";
    cin>>Leng;
    cout<<"Input height: ";
    cin>>Heigh;

    cout<<"Input width: ";
    cin>>Cub.width;

    double leng;
    double heigh;

    
}