//WAP to exchange values between two classes
#include<iostream>
using namespace std;
class a1;
class a2
{
    private:
    int x;
    public:
    void setval(int n)
    {
        x=n;
    }
    void displax()
    {
        cout<<" x2="<< x;
    }
    friend void swappp(a1 *ob1,a2 *ob2);
};
class a1
{
private:
    int x;
public:
 void setval(int n)
 {
     x=n;
 }
 void displax()
 {
     cout<<" x1="<<x;
 }
    friend void swappp(a1 *ob1,a2 *ob2);
};
void swappp(a1 *ob1,a2 *ob2 )
{
    int t=ob1->x;
    ob1->x=ob2->x;
    ob2->x=t;

}
int main()
{
    a1 o1;a2 o2;
    o1.setval(5);
    o2.setval(10);
    cout<<"\nBefore swapping";
    o1.displax();
    o2.displax();
    swappp(&o1,&o2);
    cout<<"\nAfter swapping";
    o1.displax();
    o2.displax();
    return 0;
}