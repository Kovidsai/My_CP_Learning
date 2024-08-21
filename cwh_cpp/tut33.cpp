#include<iostream>
using namespace std;

//Copy Constructor

// A default copy constructor is given to every class. If we have not made one
class Number
{
    int k;
    public:
        Number()
        {
            k = 0;
        }
        Number(int x)
        {
            k = x;
        }
        //copy constructor
        Number(Number &obj)
        {
            k = obj.k;
        }

        void show()
        {
            cout<<k<<endl;
        }

};

int main()
{
    Number x, y, z;

    x = Number(1);
    x.show();
    
    y = x;
    y.show();

    z = Number(x);
    z.show();


    return 0;
}

/*

#include<iostream>
using namespace std;


class Number{
    int a;
    public:
        Number(){
            a = 0;
        }

        Number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        Number(Number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }

        void display(){
            cout<<"The number for this object is "<< a <<endl;
        }
};


int main(){
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    Number z1(z); // Copy constructor invoked
    z1.display();

    z2 = z; // Copy constructor not called
    z2.display();

    Number z3 = z; // Copy constructor invoked
    z3.display();

    // z1 should exactly resemble z  or x or y

    return 0;
}


*/