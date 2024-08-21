#include<iostream>
using namespace std;

// this Pointer in C++

class U
{
    int k;
    public:
        U (int k)
        {
            this->k = k;
        }
        void display()
        {
            cout<<"k = "<<k<<endl;
        }
};
int main()
{
    U *ptr = new U(4);
    ptr->display();
    return 0;
}