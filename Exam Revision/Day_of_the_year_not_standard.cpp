#include<iostream>
using namespace std;
    class DayOfTheYear
{
public:
    int month, day;
};
int main()
{
    DayOfTheYear today, birthday;

    cout<<"Today's date.\n";
    cout<<"Enter today's date ->";
    cin>>today.day;

    cout<<"\nEnter the month as a number -> ";
    cin>>today.month;

    cout<<"\nBirthday date.\n";
    cout<<"\nEnter the date of the birthday -> ";
    cin>>birthday.day;

    cout<<"\nEnter the month as a number -> ";
    cin>>birthday.month;

    if(today.day == birthday.day && today.month == birthday.month)
        cout<<"\n\nHappy Birthday:)";
    else
        cout<<"\n\nToday is not your birthday:(";

    cout<<"\n\n";
    return 0;
}
