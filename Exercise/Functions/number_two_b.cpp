#include<iostream>
#include<stdlib.h>
using namespace std;
int grade(int mark_1, int mark_2, int mark_3 );
int main ()
{
    int mar_1, mar_2, mar_3, avg;
    cout<< "Enter the marks for three subjects -> ";
    cin>>mar_1 >>mar_2 >>mar_3;

    avg = grade(mar_1, mar_2, mar_3);
    cout<<"\nAverage mark = "<<avg;

    if(avg >= 80 && avg <= 100)
        cout<<"\nGrade = A";

    else if(avg >= 70 && avg < 80)
        cout<<"\nGrade = B";

    else if(avg >= 60 && avg < 70)
        cout<<"\nGrade = C";

    else if(avg >= 50 && avg < 60)
        cout<<"\nGrade = D";

    else if (avg >= 0 && avg < 50)
        cout<<"\nGrade = E";

    else
        cout<<"\nInvalid mark";

    cout<<"\n\n";
}
int grade(int mark_1, int mark_2, int mark_3 )
{
    int average;
    average = (mark_1 + mark_2 + mark_3) / 3;
    return average;
}

