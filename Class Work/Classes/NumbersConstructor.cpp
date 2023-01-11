#include<iostream>
using namespace std;
class Numbers
{
private:
	double num1, num2, results;
public:
	Numbers (double x, double y)//parameterized constructor
	{
		num1 = x;
		num2 = y;
	}
	Numbers()
	{
		//Default constructor
	}
	void input()
	{
		cout<<"Enter two numbers: ";
		cin>>num1>>num2;
	}
	void calculate()
	{
		results = num1 + num2;
	}

	void output()
	{
		cout<<num1<<" + "<<num2<<" = "<<results;
	}
};

int main()
{
	Numbers set1(25,6), set2;

	cout<<"Data entry for set 2:\n"
		<<"--------------------------\n";
	set2.input();
	set2.calculate();

	set1.calculate();

	cout<<"\nOutput for set 1: \n"
		<<"--------------------------\n";
	set1.output();

	cout<<"\n\nOutput for set 2: \n"
		<<"--------------------------\n";
	set2.output();

	cout<<"\n\n";
	return 0;
}
