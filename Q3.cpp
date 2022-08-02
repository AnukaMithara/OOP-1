#include <iostream>
#include <cmath>
using namespace std;
class Complex {
private :
    double IM;
    double RE;
public :
    void setComplex();
    void sumComplex(Complex c1,Complex c2);
    void difference(Complex c1,Complex c2);
    void product(Complex c1,Complex c2);
    void print()
    {
        cout<<RE<<" + "<<IM<<"i"<<endl<<endl;
    }
};
void Complex::setComplex()
{
    cout<<"Real part: ";
    cin>>RE;
    cout<<"Imaginary part: ";
    cin>>IM;
}
void Complex::sumComplex(Complex c1,Complex c2)
{
    cout<<"sum of complex numbers\n";
    IM = (c1.IM)+(c2.IM);
    RE = (c1.RE)+(c2.RE);
    print();
}
void Complex::difference(Complex c1,Complex c2)
{
    cout<<"difference of complex numbers\n";
    RE = c1.RE - c2.RE;
    IM = c1.IM - c2.IM;
    print();
}
void Complex::product(Complex c1,Complex c2)
{
    cout<<"product of complex numbers\n";
    RE = (c1.RE*c2.RE) +(c1.IM*c2.IM)*(-1);
    IM = (c1.RE*c2.IM) + (c1.IM*c2.RE);
    print();
}
int main()
{
    Complex c1;
    Complex c2;
    Complex c3;
    cout<<"first complex number \n";
    c1.setComplex();
    cout<<"Second complex number\n";
    c2.setComplex();
    c3.sumComplex(c1,c2);
    c3.difference(c1,c2);
    c3.product(c1,c2);
    return 0;

}
