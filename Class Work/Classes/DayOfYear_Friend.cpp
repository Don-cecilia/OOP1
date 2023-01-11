#include<iostream>
using namespace std;
class DayOfYear
{
public:
	void input(), output();
	friend void check(DayOfYear date1, DayOfYear date2);//friend function
private:
	int day, month;
};

int main()
{
	DayOfYear today, b_day;
	cout<<"Enter today's date:\n"
		<<"--------------------------------------------------\n";
	today.input();

	cout<<"\nEnter your birthday:\n"
		<<"--------------------------------------------------\n";
	b_day.input();

	cout<<"\nToday is:"
		<<"\n--------------------------------------------------";
	today.output();

	cout<<"\n\nYour birthday is:"
		<<"\n--------------------------------------------------";
	b_day.output();

    //function call
	check(today, b_day);//You don't use a dot operator in a call to a friend function and check object initially in the class

	cout<<"\n\n";
	return 0;
}
void DayOfYear::input()
{
	cout<<"Enter the day and the month (as integers): ";
	cin>>day>>month;
}

void DayOfYear::output()
{
	cout<<"\nDay = "<<day<<",Months = "<<month;
}
//Today's date & Birthday's date
void check(DayOfYear date1, DayOfYear date2)//friend function
{
	if (date1.day == date2.day && date1.month==date2.month)
		cout<<"\n\nHappy Birthday!";
	else
		cout<<"\n\nHappy unbirthday!!!";
}
