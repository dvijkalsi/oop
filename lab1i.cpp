
//i. WAP to input name, roll number and marks in 5 subjects for a student, and display it
#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks[5];
};
int main()
{
    student s;
    cout<<"Enter info\n";
    cout<<"Enter name\n";
    cin>>s.name;
    cout<<"Enter roll number\n";
    cin>>s.roll;
    cout<<"Enter marks in 5 subjects";
    for(int i=0;i<5;i++)
    {
        cin>>s.marks[i];
    }
    cout<<"Displaying Information\nName:"<<s.name<<"\nroll:"<<s.roll<<"\nmarks in five subjects:-\n";
    for(int i=0;i<5;i++)
    {
        cout<<s.marks[i]<<" ";
    }
    return 0;
}
