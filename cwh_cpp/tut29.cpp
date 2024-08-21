#include <iostream>
using namespace std;

class Complex
{
    int x, y;

public:

    Complex(int , int); // Parameterized Constructor declaration

    void printNumber()
    {
        cout << "Your number is " << x << " + " << y << "i" << endl;
    }
};

Complex ::Complex(int a, int b) // ----> This is a Parameterized constructor as it takes 2 parameters
{
    x = a;
    y = b;
    // cout<<"Hello world";
}

int main()
{
    // implicit Call
    Complex o1(4,5);
    o1.printNumber();
    //explicit call
    Complex o2 = Complex(17,18);
    o2.printNumber();
    return 0;
}