/* iii. WAP to enter id, name, age and basic salary of n number of employees. Calculatethegross salary of all the employees and display it along with all other details in a tabularform, using pointer to structure. 
[ Gross salary= Basic salary + DA + HRA, 
DA = 80% of Basic salary 
HRA=10% of Basic salary ]*/

#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    char name[10];
    int age;
    int bs;
    double gs;
    public:
    void input();
    void display();
};
void employee::input()
{
    
        cout<<"\nEnter info of an employee";
        cout<<"\nEnter id:";
        cin>>id;
        cout<<"\nEnter name:";
        cin>>name;
        cout<<"\nEnter age:";
        cin>>age;
        cout<<"\nEnter basic salary:";
        cin>>bs;
        gs=(bs)+(0.8*(bs))+(0.1*(bs));
    
}
void employee::display()
{
    
        cout<<"\nID:"<<id<<"\nName:"<<name<<"\nAge:"<<age;
        cout<<"\nBasic salary:"<<bs<<"\nGross salary:"<<gs<<endl;
    
}
int main()
{
    cout<<"Enter number of employees:";
    int n;
    cin>>n;
    employee e[n];
    employee* ptr=e;
    for(int i=0;i<n;i++)
    {
        ptr[i].input();
    }
    cout<<"\nDisplaying information===========";
    for(int i=0;i<n;i++)
    {
        ptr[i].display();
    }
    return 0;
}
