#include<iostream>
#include<math.h>
using namespace std;
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and 
       performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function 
       and performs any four scientific operations of your choice and displays 
       the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Ans: Multiple Inheritence
    Q2. Which mode of Inheritance are you using?
    Ans: public mode
    Q3. Create an object of HybridCalculator and display results of the simple 
        and scientific calculator.
    Q4. How is code reusability implemented?
    Ans: By using Inheritence
*/

class SimpleCalculator
{
    int x;
    int y;
    // float result;
    public:
        void setValues(int a, int b)
        {
            x = a;
            y = b;
        }
        int add()
        {
            return (x+y);
        }
        int substract()
        {
            return x-y;
        }
        int multiply()
        {
            return x*y;
        }
        float divide()
        {
            float d = ((float)x)/(float(y));
            return d;
        }
        void display()
        {
            cout<<"Addition of given Numbers = "<<add()<<endl;
            cout<<"Substraction of given Numbers = "<<substract()<<endl;
            cout<<"Multipliction of given Numbers = "<<multiply()<<endl;
            cout<<"Division of given Numbers = "<<divide()<<endl;
        }
};

class ScientificCalculator
{
    int val1;
    int val2;
    public:
        void setValuesHere(int a, int b)
        {
            val1 = a;
            val2 = b;
        }
        int squareSum()
        {
            return ((val1*val1)+(val2*val2));
        }
        float squareRootSum()
        {
            float m = sqrt(val1*val1)+sqrt(val2*val2);
            return m;
        }
        int power()
        {
            int m=1;
            for(int i=0; i<val2; i++)
            {
                m = m*val1;
            }
            return m;
        }
        int modulo()
        {
            return val1%val2;
        }

        void displayRes()
        {
            cout<<"Square Sum of Given Numbers is : "<<squareSum()<<endl;
            cout<<"Square Root Sum of Given Numbers is : "<<squareRootSum()<<endl;
            cout<<"Power of Given Numbers is : "<<power()<<endl;
            cout<<"Modulo of Given Numbers is : "<<modulo()<<endl;
        }

};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{

};

int main(){
    HybridCalculator ob;
    ob.setValues(7,18);
    ob.display();
    ob.setValuesHere(9,17);
    ob.displayRes();
    return 0;
}