//2-WAP with the a function rotate(ar[], d, n) that rotates arr of size n by d elements. 
//If the array elements are 1, 2, 3, 4, 5 and rotating by 1 position would make the array as 
//2, 3, 4, 5, 1.
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
    cout<<"\nEnter rotaions:";
    int d;
    cin>>d;
    int arr[n];
    rotate(ar,d,n);
    cout<<"\nRotated array:";
    for(int i=0;i<n;++i)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}