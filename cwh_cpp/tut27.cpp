#include<iostream>
using namespace std;

// example1
class Y;
class X
{
    int val1;
    public:
        void setVal1(int a)
        {
            val1 = a;
        }
    friend void add(X, Y);
};
class Y
{
    int val2;
    public:
        void setVal2(int b)
        {
            val2 = b;
        }
    friend void add(X,Y);
};

// void Y :: setVal2(int b)
// {
//     val2 = b;
// }

void add(X o1,Y o2)
{
    cout<<(o1.val1)+(o2.val2);
}




int main()
{
    X o1;
    Y o2;
    o1.setVal1(4);
    o2.setVal2(5);
    add(o1, o2);
    return 0;
}