#include<iostream>
using namespace std;

// Array of Objects Using Pointers in C++

class ShopItem
{
    int Id;
    float price;
    public:
        void setData(int a, float b)
        {
            Id = a;
            price = b; 
            
        }
        void getData()
        {
            cout<<"Id = "<<Id<<endl;
            cout<<"Price = "<<price<<endl;
        }
};

int main()
{
    ShopItem *ptr = new ShopItem[4];
    ShopItem *temp = ptr;
    int a;
    float b;    

    for(int i = 0; i<4; i++)
    {

        // cout<<" enter "<<endl;
        cin>>a>>b;
        ptr->setData(a,b);
        ptr++;
    }

    for(int i = 0; i<4; i++)
    {
        temp->getData();
        temp++;
    }

    return 0;
}