#include <iostream>
using namespace std;
class Watch {
private:
    double N;
    double pph;//product_per_hour
    double whpd;//working_hour_per_day
public:
    void setProduct(int p, double w,int n);
    double getTime();
};
void Watch::setProduct(int p, double w,int n)
{
    N = n;
    pph = p;
    whpd = w;
}

double Watch::getTime()
{
    return (N / (pph * whpd));
}
string minimum(double a, double b)
{
    if (a < b)
    {
        return "Factory 1";
    }
    else { return "Factory 2"; }
}
int main()
{
    int N;
    cout << "Enter the quantity of watch : ";
    cin >> N;

    Watch w[2];
    w[0].setProduct(2, 8,N);
    w[1].setProduct(3, 6,N);
    cout << endl << "Number of days that takes factory 1 is " << w[0].getTime() << " Days" << endl;
    cout << endl << "Number of days that takes factory 2 is " << w[1].getTime() << " Days" << endl;
    cout << endl << "minimum time that take to produce your product is : " ;
    cout<< minimum(w[0].getTime(), w[1].getTime()) << endl;
    return 0;
}
