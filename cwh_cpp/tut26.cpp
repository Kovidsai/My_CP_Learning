#include<iostream>
using namespace std;

class Complex;
class Calculator 
{
    public:
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};
class Complex
{
    int a, b;
    // Individually declaring functions as friends
     friend int Calculator ::sumRealComplex(Complex, Complex);
     friend int Calculator ::sumCompComplex(Complex, Complex);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};



int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main() 
{
    Complex o1, o2;

    o1.setNumber(4,5);
    o1.printNumber();
    o2.setNumber(6,9);
    o2.printNumber();

    Calculator f;
    cout<<f.sumRealComplex(o1,o2)<<endl;
    cout<<f.sumCompComplex(o1,o2);
    return 0;
}