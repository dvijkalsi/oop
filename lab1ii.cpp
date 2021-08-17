/*. ii. WAP to input name, roll number and marks in 5 subjects for n number of students. Writefunctions to:- 
a. Find total marks and percentage of all n students. 
b. Display details of a student with a given roll number. 
c. Display the details for all the students having percentage in a given range. d. Sort the array in ascending order of marks. */

#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks[5];
    float total;
    float percent;
};
int main()
{
    cout<<"Enter number of students";
    int n;
    cin>>n;
    student s[n];
    for(int j=0;j<n;j++)
    {
        cout<<"Enter info\n";
        cout<<"Enter name\n";
        cin>>s[j].name;
        cout<<"Enter roll number\n";
        cin>>s[j].roll;
        cout<<"Enter marks in 5 subjects\n";
        s[j].total=0;
         for(int i=0;i<5;i++)
         {
            cin>>s[j].marks[i];
            s[j].total+=s[j].marks[i];
         }
        s[j].percent=s[j].total/5;
    }
    cout<<"\nEnter roll number to be searched:";
    int rolls;
    cin>>rolls;
    for(int j=0;j<n;j++)
    {
        if(rolls==s[j].roll)
        {
             cout<<"Displaying Information\nName:"<<s[j].name<<"\nroll:"<<s[j].roll<<"\nmarks in five subjects:-\n";
            for(int i=0;i<5;i++)
            {
                cout<<s[j].marks[i]<<" ";
            }
            cout<<"\nTotal marks:"<<s[j].total<<"\nPercentage:"<<s[j].percent<<"\n";
        }

    }
    cout<<"\nEnter starting of range:";
    int start;
    cin>>start;
    cout<<"\nEnter end of range:";
    int end;
    cin>>end;
    for(int j=0;j<n;j++)
    {
        if((s[j].percent>start)&&(s[j].percent<end))
        {
            cout<<"Displaying Information\nName:"<<s[j].name<<"\nroll:"<<s[j].roll<<"\nmarks in five subjects:-\n";
            for(int i=0;i<5;i++)
            {
                cout<<s[j].marks[i]<<" ";
            }
            cout<<"\nTotal marks:"<<s[j].total<<"\nPercentage:"<<s[j].percent<<"\n";
        }
    }
    student t;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].total>s[j].total)
            {
                t=s[i];
                s[i]=s[j];
                s[j]=t;
            }
        }
    }
    cout<<"Sorted array:-\n";
    for(int j=0;j<n;j++)
    {
            cout<<"Displaying Information\nName:"<<s[j].name<<"\nroll:"<<s[j].roll<<"\nmarks in five subjects:-\n";
            for(int i=0;i<5;i++)
            {
                cout<<s[j].marks[i]<<" ";
            }
            cout<<"\nTotal marks:"<<s[j].total<<"\nPercentage:"<<s[j].percent<<"\n";
    }
    return 0;
}