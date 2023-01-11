#include<iostream>
using namespace std;
int main()
{
    char name[20], course;
    int i, number, mark1, mark2, mark3;

    cout<<"Enter the number of students you want to work with -> ";
    cin>>number;

    for(i = 0; i < number; i++)
    {
        cout<<"\n****Data Entry for Students****"<<(i + 1);
        cout<<"\nEnter the name of the student -> ";
        cin>>name;
        cout<<"\nEnter the course of the student -> ";
        cin>>course;
        cout<<"\nEnter the marks for three units -> ";
        cin>>mark1>>mark2>>mark3;
    }
    for(i = 0; i < number; i++)
    {
        cout<<"\n*****Analysis for Students****"<<(i +1);
        cout<<"\nName: "name[i]
            <<"\nCourse: "course[i]
            <<"\nUnit1 = "<<mark1[i]<<"\tUnit2 = "<<mark2[i]<<"\tUnit3 = "<<mark3[i];
    }
    cout<<"\n\n";
    return 0;
}
