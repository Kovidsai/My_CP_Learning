//Ambiguity Resolution in Inheritence
#include<iostream>
using namespace std;

class Base1
{
    public:
        void greetings()
        {
            cout<<"Namaste"<<endl;
        }
};

class Base2
{
    public:
        void greetings()
        {
            cout<<"Namaskaram"<<endl;
        }
};

class Derived : public Base1, public Base2
{
    public:
        void greetings()
        {
            Base1 :: greetings();
        } 

};

class M
{
    public:
        void study()
        {
            cout<<"I do ML"<<endl;
        }
};

class K : public M
{
    public:
        void study()
        {
            cout<<"I Also do ML"<<endl;
        }
};


int main()
{
    //when methods with same name exists in two base classes we have to specify in derived class
    Derived d;
    d.greetings();
    

    //when derived class has same method name as in Base Class, Compiler will go for method in derived class
    //This is called Method overriding

    K kovid;
    kovid.study();

    return 0;

}