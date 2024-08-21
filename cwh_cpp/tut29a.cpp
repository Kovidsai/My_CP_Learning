#include<iostream>
using namespace std;

class Point
{
    int x,y;
    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }
        void displayPoint()
        {
            cout<<"The point is ("<<x<<","<<y<<")";
        }
};

int main()
{
    Point k(7,18);
    k.displayPoint();
    return 0;
}