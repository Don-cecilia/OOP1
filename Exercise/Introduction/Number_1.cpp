#include<iostream>
using namespace std;
int main()
{
	int a,b,c,sum, product, average;

	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;

	sum = a + b + c;
	product = a * b * c;
	average = (a + b + c)/3;

	cout<<"\nThe sum of "<<a<<" ,"<<b<<" and "<<c<<" is "<<sum<<"\n\n";
	cout<<"\nThe product of "<<a<<" ,"<<b<<" and "<<c<<" is "<<product<<"\n\n";
	cout<<"\nThe average of "<<a<<" ,"<<b<<" and "<<c<<" is "<<average<<"\n\n";

	return 0;
}
