#include<iostream>
using namespace std;

//example2
class C2;
class C1
{
    int k;
    friend void exchange(C1 &, C2 &);
    public:
        void setK(int a)
        {
            k = a;
        }
        void display(void)
        {
            cout<<k<<endl;
        }
};
class C2
{
    int t;
    friend void exchange(C1 &, C2 &);
    public:
        void setT(int b)
        {
            t = b;
        }
        void display(void)
        {
            cout<<t<<endl;
        }
};

void exchange(C1 &a1, C2 &b1)
{
    int temp = a1.k;
    a1.k = b1.t;
    b1.t = temp;

}

int main()
{
    C1 x;
    C2 y;
    x.setK(4);
    x.display();
    y.setT(5);
    y.display();
    exchange(x,y);
    x.display();
    y.display();

    return 0;
}