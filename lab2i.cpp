//1-WAP to calculate GCD/HCF of two numbers by using recursive function
#include<iostream>
using namespace std;
int gcd(int a,  int b)
{
    if(a%b==0)
    {
        return b;

    }
    else{
        return gcd(b,a%b);
    }
}
int main()
{
    cout<<"Enter two numbers:";
    int n1,n2;
    cin>>n1>>n2;
    int hcf=gcd(n1,n2);
    cout<<"\nHcf:"<<hcf;
    return 0;
}