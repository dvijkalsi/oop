//3-WAP by designing a recursive function to calculate the sum of all even digits of any given integer.
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    else
    {
        if((n%10)%2==0)
        {
            return (n%10)+sum(n/10);
        }
        else
        {
            return sum(n/10);
        }
    }
}
int main()
{
    cout<<"Enter a number:";
    int n;
    cin>>n;
    int summ=sum(n);
    cout<<"\nSum of even digits is:"<<summ;
    return 0;
}