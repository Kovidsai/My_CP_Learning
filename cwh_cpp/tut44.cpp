#include<iostream>
using namespace std;

class Student
{   
    protected:
        int roll_number;
    public:
        void set_number(int a)
        {
            roll_number = a;
        }
        void print_number()
        {
            cout<<"Your Roll Number is : "<<roll_number<<endl;
        }
};

class Test : virtual public Student
{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(int a, int b)
        {
            maths = a;
            physics = b; 
        }
        void print_marks()
        {
            cout<<"Your result is"<<endl;
            cout<<"Maths Marks = "<<maths<<endl;
            cout<<"Physics Marks = "<<physics<<endl;
        }
};

class Sports : virtual public Student
{
    protected:
        int score;
    public:
        void set_score(int a)
        {
            score = a;
        }
        void display_score()
        {
            cout<<"Score = "<<score<<endl;
        }
};

class Result : public Test, public Sports
{
    
};

int main()
{
    return 0;
}