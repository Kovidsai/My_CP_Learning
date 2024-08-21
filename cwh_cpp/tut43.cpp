#include <iostream> 
using namespace std; 

/*
VIRTUAL BASE CLASS
This is needed if are deriving class from the two or more classes that are
having same base class because Ambiguity will be generated Since data members of 
those classes are same because they are having same base class. 
*/

class A { 
public: 
    void say() 
    { 
        cout << "Hello world"<<endl; 
    } 
}; 
class B : public virtual A { 
};   
class C : public virtual A { 
};   
class D : public B, public C { 
}; 

int main()
{
    return 0;
}