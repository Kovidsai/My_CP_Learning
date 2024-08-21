//Constructors in Derived Class Example
#include<iostream>
using namespace std;

/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/

class Base1
{
    int a;
    public:
        Base1(int m)
        {
            a = m;
            cout<<"Base1 Constructor is Called"<<endl;
        }
        void getDataa()
        {
            cout<<"Value of a = "<<a<<endl;
        }

};

class Base2
{
    int b;
    public:
        Base2(int m)
        {
            b = m;
            cout<<"Base2 Constructor is Called"<<endl;
        }
        void getDatab()
        {
            cout<<"Value of b = "<<b<<endl;
        }
};

class Derived : public Base2 , public Base1
{
    int d;
    int f;
    public:
        Derived(int h, int j, int k, int l) : Base1(h) , Base2(j)
        {
            d = k;
            f = l;
        }

};

int main()
{
    Derived tata(9, 17, 1, 17);
    tata.getDataa();
    tata.getDatab();
    return 0;
}