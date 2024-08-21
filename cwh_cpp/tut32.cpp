#include<iostream>
using namespace std;

//Dynamic initialization of objects 

class BankDeposit
{
    int principle;
    int years;
    float interestRate;
    float returnValue;
    public:
        BankDeposit(){} // This is important to intialize objects while creating them
        BankDeposit(int p, int y, float r) // for interest_rate like 0.04 
        {
            principle = p;
            years = y;
            interestRate = r;
            returnValue = principle;
            for(int i = 0; i<years; i++)
            {
                returnValue = returnValue*(1+interestRate);
            }
        }
        BankDeposit(int p, int y, int r) // for interest_rate like 4
        {
            principle = p;
            years = y;
            interestRate = float(r)/100;
            returnValue = principle;
            for(int i=0; i<years; i++)
            {
                returnValue = returnValue*(1+interestRate);
            }
        }

        void show(void)
        {
            cout<<"for the amount "<<principle<<" you got "<<returnValue<<endl;
        }

};

int main()
{    
    BankDeposit ob1, ob2, ob3;
    int p, y, R;
    float r;
    // cout<<"enter the details p, y, r";
    cin>>p>>y>>r;
    ob1 = BankDeposit(p, y, r);
    ob1.show();
    // cout<<"enter the details p, y, r";
    cin>>p>>y>>R;

    ob2 = BankDeposit(p, y, R);
    ob2.show();
    return 0;
}