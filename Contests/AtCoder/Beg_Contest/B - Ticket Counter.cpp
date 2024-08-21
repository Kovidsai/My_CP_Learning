#include<iostream>
using namespace std;
int main()
{
    int n, A;
    cin>>n>>A;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int fr[n];
    fr[0] = arr[0]+A;
    
    for(int i=1; i<n; i++)
    {
        if(fr[i-1] > arr[i])
        {
            fr[i] = fr[i-1] + A;
        }
        else
        {
            fr[i] = arr[i] + A;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<fr[i]<<'\n';
    }

    return 0;
}
