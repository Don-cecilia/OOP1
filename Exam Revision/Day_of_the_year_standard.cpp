#include<iostream>
using namespace std;
    class DayOfTheYear
{
private:
    int month, day;
public:
    void input(), output();
    void get_day(), get_month();
};
int main()
{
    DayOfTheYear today, birthday;

    cout<<"Today's date\n";
    today.input();
    cout<<"Today's date is:\n";
    today.output();

    cout<<"\nBirthday date\n";
    birthday.input();
    cout<<"\nYour Birthday is:\n";
    birthday.output();

    if(today.get_day == birthday.get_day && today.get_month == birthday.get_month)
        cout<<"\nHappy Birthday:)";
    else
        cout<<"\nToday is not your birthday:(";

    cout<<"\n\n";
    return 0;
}
void DayOfTheYear::input()
{
    cout<<"Enter today's date -> ";
    cin>>day;

    cout<<"\nEnter the month as a number -> ";
    cin>>month;
}
void DayOfTheYear::output()
{
    cout<<"\nDay = "<<day<<"\tMonth = "<<month;
}
void DayOfTheYear::get_day()
{
    return day;
}
void DayOfTheYear::get_month()
{
    return month;
}
