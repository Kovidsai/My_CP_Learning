#include<iostream>
using namespace std;

// constructor overloading
class Complex
{
    int a, b;
    public:
        Complex(int x, int y)
        {
            a = x;
            b = y;
        }
        Complex(int x)
        {
            a = x;
            b = 0;
        }
        Complex()
        {
            a = 0;
            b = 0;
        }
        void display(void)
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }

};

int main()
{
    Complex c1(17,17);
    c1.display();
    Complex c2(17);
    c2.display();
    Complex c3;
    c3.display();
    return 0;
}