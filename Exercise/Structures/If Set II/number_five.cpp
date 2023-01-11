#include<iostream>
using namespace std;
    struct Grade
{
    int mark_1, mark_2, mark_3, mark_4, mark_5, average;
};
int main()
{
    struct Grade student_1;

    cout<<"Enter the marks for five subjects -> ";
    cin>>student_1.mark_1>>student_1.mark_2>>student_1.mark_3>>student_1.mark_4>>student_1.mark_5;

    student_1.average = (student_1.mark_1 + student_1.mark_2 + student_1.mark_3 + student_1.mark_4 + student_1.mark_5) / 5;

    if(student_1.average >= 75 && student_1.average <= 100)
        cout<<"\nDistinction";

    else if(student_1.average >= 65 && student_1.average < 75)
        cout<<"\nCredit";

    else if(student_1.average >= 50 && student_1.average < 65)
        cout<<"\nPass";

    else if(student_1.average >= 0 && student_1.average < 50)
        cout<<"\nFail";
    else
        cout<<"Invalid.";

    cout<<"\n\n";
    return 0;
}




