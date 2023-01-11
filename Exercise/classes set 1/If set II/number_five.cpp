#include<iostream>
using namespace std;
    class Grade
{
private:
    int mark_1, mark_2, mark_3, mark_4, mark_5, average;
public:
    void get_input();
    void get_computation();
    void get_output();
};
int main()
{
    struct Grade student_1;

    student_1.get_input();
    student_1.get_computation();
    student_1.get_output();

    cout<<"\n\n";
    return 0;
}
void Grade::get_input()
{
    cout<<"Enter the marks for five subjects -> ";
    cin>>mark_1>>mark_2>>mark_3>>mark_4>>mark_5;
}
void Grade::get_computation()
{
    average = (mark_1 + mark_2 + mark_3 + mark_4 + mark_5) / 5;
}
void Grade::get_output()
{
    if(average >= 75 && average <= 100)
        cout<<"\nDistinction";

    else if(average >= 65 && average < 75)
        cout<<"\nCredit";

    else if(average >= 50 && average < 65)
        cout<<"\nPass";

    else if(average >= 0 && average < 50)
        cout<<"\nFail";
    else
        cout<<"Invalid.";
}




