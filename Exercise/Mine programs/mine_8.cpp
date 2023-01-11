#include<iostream>
using namespace std;
int main()
{
	int num_1, sum, sum_even, sum_odd;

	cout<<"Enter the integer -> ";
	cin>>num_1;

	sum = 0;
	sum_even = 0;
	sum_odd = 0;
	do{
        sum = sum + num_1 % 10;

        if(num_1 %2 == 0)
            sum_even = sum_even + num_1 % 10;

        else
            sum_odd = sum_odd + num_1 % 10;

        num_1 = num_1 / 10;
	}while (num_1 != 0);
	cout<<"\nThe sum of the even digits in the number is "<<sum_even<<endl
	<<"The sum of the odd digits in the number is "<<sum_odd<<endl
	<<"The sum of all digits in the number is "<<sum<<endl;

	cout<<"\n\n";
	return 0;
}
