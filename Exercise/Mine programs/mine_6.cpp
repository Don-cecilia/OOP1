#include<iostream>
using namespace std;
int main()
{
	int num_1, sum;

	cout<<"Enter the integer -> ";
	cin>>num_1;

	sum = 0;
	do{
        sum = sum + num_1 % 10;
        num_1 = num_1 / 10;
	}while (num_1 != 0);

	cout<<"\nThe sum of the digits in the number is "<<sum<<endl;

	cout<<"\n\n";
	return 0;
}
