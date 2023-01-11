#include<iostream>
using namespace std;
int main()
{
    int mark_1, mark_2, mark_3, mark_4, mark_5, average;

    cout<<"Enter the marks -> ";
    cin>>mark_1>>mark_2>>mark_3>>mark_4>>mark_5;

    average = ( mark_1 + mark_2 + mark_3 + mark_4 + mark_5 + average) / 5;

    if(average >= 75 && average <= 100)
    {
        cout<<"Distinction";
    }
    else if(average >= 65 && average < 75)
    {
       cout<<"Credit";
    }
    else if(average >= 50 && average < 65)
    {
        cout<<"Pass";
    }
    else if(average >= 0 && average < 50)
    {
        cout<<"Fail";
    }
    cout<<"\n\n";
}
