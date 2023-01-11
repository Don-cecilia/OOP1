#include<iostream>
using namespace std;
char get_grade(int average);
int main()
{
    int mark_1, mark_2, mark_3, average_mark;
    char grade;

    cout<<"Enter the marks -> ";
    cin>>mark_1>>mark_2>>mark_3;

    average_mark = (mark_1 + mark_2 + mark_3) / 3;
    grade = get_grade(average_mark);

    cout<<"\nThe student got grade: "<<grade;

    cout<<"\n\n";
    return 0;
}
char get_grade(int average)
{
    if(average >= 80 && average <= 100)
    {
        return 'A';
    }
    else if(average >= 70 && average < 80)
    {
        return 'B';
    }
    else if(average >= 60 && average < 70)
    {
        return 'C';
    }
    else if(average >=50 && average < 60)
    {
        return 'D';
    }
    else if(average >= 0 && average < 50)
    {
        return 'E';
    }
    else
        return 0;
}
