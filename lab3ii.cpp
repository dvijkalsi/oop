//Create a class which stores name, roll number and total marks for a student. Input the data for a
 //student and display it.
#include<iostream>
using namespace std;
class student
{
    private:
    char name[10];
    int roll;
    int marks;
    public:
    void input()
    {
        cout<<"Enter name, roll number, total marks:";
        cin>>name>>roll>>marks;
    }
    void display()
    {
        cout<<"\nDisplaying info:-";
        cout<<"\nName:"<<name;
        cout<<"\nRoll number:"<<roll;
        cout<<"\nTotal marks:"<<marks;
    }
};
int main()
{
    cout<<"\nEnter number of students:";
    int n;
    cin>>n;
    student s1[n];
    for(int i=0;i<n;++i){
        s1[i].input();
    }
    for(int i=0;i<n;++i)
    {
        s1[i].display();
    }
    
    return 0;
}

