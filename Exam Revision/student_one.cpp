#include<iostream>
using namespace std;
    struct Student
{
    int age;
    char name[20], adm_no[20];
    float height;
}stud[2];
int main()
{
    int i;
    for(i = 0; i < 2; i++)
    {
        cout<<"----Input for Student "<<(i + 1)<<"\n";
        cout<<"\nEnter the name, admission number, age and height of the student -> ";
        cin>>stud[2].name>>stud[2].adm_no>>stud[2].age>>stud[2].height;
    }

    for(i = 0; i < 2; i++)
    {
        cout<<"\n----Output for Student "<<(i + 1)
            <<"\nStudent Name: "<<stud[2].name
            <<"\nStudent Admission Number: "<<stud[2].adm_no
            <<"\nStudent age: "<<stud[2].age
            <<"\nStudent Height: "<<stud[2].height;
    }
    cout<<"\n\n";
    return 0;
}
