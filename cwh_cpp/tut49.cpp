#include<iostream>
using namespace std;

// Pointers in C++ 
// new and delete keywords

int main()
{
    // int t = 0;
    // int *ptr = &t;
    // cout<<(*ptr)<<endl;

    // int *a = new int(9);
    // cout<<(*a)<<endl;

    // float *n = new float(17.17);
    // cout<<(*n)<<endl;

    int *u = new int[4];
    u[0] = 9;
    u[1] = 17;
    u[2] = 7;
    u[3] = 18;

    cout<<u[0]<<endl;
    cout<<u[1]<<endl;
    cout<<u[2]<<endl;
    cout<<u[3]<<endl;
    delete[] u;
    cout<<u[0]<<endl;
    cout<<u[1]<<endl;
    cout<<u[2]<<endl;
    cout<<u[3]<<endl;

    return 0;
}