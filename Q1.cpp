#include <iostream>
#include <cmath>
using namespace std;
const double pi = 3.14;

class Sphere {
private :
    double radius;
    double area;
    double volume;
    void setRadius(double r);
public :
    double getRadius(double r)
    {
        setRadius(r);
    }
    double getArea();
    double getVolume();

};
void Sphere::setRadius(double r)
{
    radius = r;
}
double Sphere::getArea()
{
    area = 4*pi*pow(radius,2);
    return area;
}
double Sphere::getVolume()
{
    volume = (4*pi*pow(radius,3))/3;
    return volume;
}


int main()
{
    Sphere s1;
    s1.getRadius(2);
    double area = s1.getArea();
    double volume = s1.getVolume();
    cout<<"Area of the Sphere = "<<area<<endl;
    cout<<"volume of the Sphere = "<<volume<<endl;

    return 0;

}

