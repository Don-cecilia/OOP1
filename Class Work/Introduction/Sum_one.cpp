#include<iostream>
using namespace std;
int main()
{
	double num_one, num_two, total;

	cout<<"Enter the first number -> ";
	cin>>num_one;
	fflush(stdin);


	cout<<"Enter the second number -> ";
	cin>>num_two;

	total = num_one + num_two;

	cout<<"\n\nThe sum is "<<total<<"\n\n";

	return 0;
}
