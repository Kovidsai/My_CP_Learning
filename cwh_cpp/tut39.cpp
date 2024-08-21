#include<iostream>
using namespace std;

class Student
{
    int roll_number;
    public:
        void set_Roll_Number(int);
        void get_Roll_Number(void);
};

void Student :: set_Roll_Number(int r)
{
    roll_number = r;
}

void Student :: get_Roll_Number()
{
    cout<<"Students Roll Number is: "<<roll_number<<endl;
}

class Exam : public Student
{
    protected:
        int maths;
        int physics;
    public:
        void set_marks(int, int);
        void get_marks(void);
};

void Exam :: set_marks(int a, int b)
{
    maths = a;
    physics = b;
}

void Exam :: get_marks()
{
    cout<<"Maths Marks = "<<maths<<endl;
    cout<<"Physics Marks = "<<physics<<endl;
}

class Result : public Exam
{
    int res;
    public:
        void displayResult()
        {
            res = (maths+physics)/2;
            cout<<"Your Reslut = "<<res<<endl;
        }
};

int main()
{   
    Result kovid;
    kovid.set_Roll_Number(18);
    kovid.set_marks(7,17);
    kovid.get_Roll_Number();
    kovid.get_marks();
    kovid.displayResult();
    return 0;
}