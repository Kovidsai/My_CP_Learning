#include<iostream>
#include<math.h>
using namespace std;

class Point
{
    int x, y;
    friend int distance(Point, Point);
    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }
};
int distance(Point k, Point t)
{
    int d;
    d = sqrt(  ((k.x-t.x)*(k.x-t.x)) + ((k.y-t.y)*(k.y-t.y)) );
    return d;
}
int main()
{
    Point kovid(1,1);
    Point abhilasha(1,1);
    int ans = distance(kovid, abhilasha);
    cout<<"Distance b/w kovid and abhilasha is: "<<ans;
    return 0;
}