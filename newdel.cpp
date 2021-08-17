#include<conio.h>
#include <iostream>
using namespace std;
int main () 
{
int *arr;
int size;
cout<<"Enter the size of the integer array";
cin>>size;
cout<<"creating an array of size"<<size<<". .";
arr= new int[size];
cout<<"Enter elements:";
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
cout<<"Dynamic allocation for array is successful";
cout<<"\nPrinting elements\n";
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
delete arr;
getch();
return 0;
}