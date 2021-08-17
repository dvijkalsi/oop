//iv.  Create a class complex which stores real and imaginary part of a complex number. Input
//10 complex numbers and display them.
#include<iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int imaginary;
    public:
    void input();
    void display();
};
void complex::input()
{
    cout<<"\nEnter real part:";
    cin>>real;
    cout<<"\nEnter imaginary part:";
    cin>>imaginary;
}
void complex::display()
{
    cout<<"\n"<<real<<"+"<<imaginary<<"i";
}
int main()
{
    complex x[10];
    for(int i=0;i<10;++i)
    {
        cout<<"\nEnter a complex number:-";
        x[i].input();
    }
    cout<<"\nDisplaying all complex numbers:-\n";
    for(int i=0;i<10;++i)
    {
        x[i].display();
    }
    return 0;
}
