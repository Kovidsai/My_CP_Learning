#include<iostream>
using namespace std;

// Pointers to Objects and Arrow Operator in CPP

class Complex
{
    int real, imaginary;
    public:
        void setData(int a, int b)
        {
            real = a;
            imaginary = b;
        }
        void getData()
        {
            cout<<"The Real Part is "<<real<<endl;
            cout<<"The imaginary part is "<<imaginary<<endl;
        }
};

int main()
{
    Complex *objptr = new Complex;

    // (*objptr).setData(8,9);
    // (*objptr).getData();
    //same as 
    // objptr->setData(4,5);
    // objptr->getData();

    Complex *arr = new Complex[3];
    arr->setData(6,7);
    arr->getData();
    (arr+1)->setData(7,8);
    (arr+1)->getData();
    return 0;
}