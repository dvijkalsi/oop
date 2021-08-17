//4-WAP to split the array at the given position and move the first part of the array to the end.
#include<iostream>
using namespace std;
void rotate(int ar[],int d,int n)
{
    int temp[n];int c=0;
    for(int i=d;i<n;i++)
    {
        temp[c++]=ar[i];
        
    }
    for(int i=0;i<d;i++)
    {
        temp[c++]=ar[i];
    }
    for(int i=0;i<n;++i)
    {
        ar[i]=temp[i];
    }
}
int main()
{
    cout<<"Enter size of array:";
    int n;
    cin>>n;
    int ar[n];
    cout<<"\nEnter elements:";
    for(int i=0;i<n;++i)
    {
        cin>>ar[i];
    }
    cout<<"\nEnter position";
    int d;
    cin>>d;
    
    rotate(ar,d,n);
    cout<<"\nNew array:";
    for(int i=0;i<n;++i)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}