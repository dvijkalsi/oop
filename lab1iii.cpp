/* iii. WAP to enter id, name, age and basic salary of n number of employees. Calculatethegross salary of all the employees and display it along with all other details in a tabularform, using pointer to structure. 
[ Gross salary= Basic salary + DA + HRA, 
DA = 80% of Basic salary 
HRA=10% of Basic salary ]*/

#include<iostream>
using namespace std;
struct employee
{
    int id;
    char name[10];
    int age;
    int bs;
    double gs;
};
int main()
{
    cout<<"Enter number of employees:";
    int n;
    cin>>n;
    employee e[n];
    employee* ptr=e;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter info of an employee";
        cout<<"\nEnter id:";
        cin>>(*(ptr+i)).id;
        cout<<"\nEnter name:";
        cin>>(*(ptr+i)).name;
        cout<<"\nEnter age:";
        cin>>(*(ptr+i)).age;
        cout<<"\nEnter basic salary:";
        cin>>(*(ptr+i)).bs;
        (*(ptr+i)).gs=((*(ptr+i)).bs)+(0.8*((*(ptr+i)).bs))+(0.1*((*(ptr+i)).bs));
    }
    for(int i=0;i<n;i++)
    {
        cout<<"\nID:"<<(*(ptr+i)).id<<"\nName:"<<(*(ptr+i)).name<<"\nAge:"<<(*(ptr+i)).age;
        cout<<"\nBasic salary:"<<(*(ptr+i)).bs<<"\nGross salary:"<<(*(ptr+i)).gs<<endl;
    }
    return 0;
}
