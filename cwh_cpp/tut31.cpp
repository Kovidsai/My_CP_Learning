#include<iostream>
using namespace std;

// default value in constructor

class Simple
{
    int data1;
    int data2;
    int data3;
    public:
        Simple(int a , int b = 18 , int c = 7 )
        {
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData(void);
};

void Simple::printData()
{
    cout<<"Data is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main()
{
    Simple k(17, 17, 17);
    k.printData();

    Simple a(17, 17);
    a.printData();

    Simple t(17);
    t.printData();

    return 0;
}