/*This program computes the sum
of all even numbers between 1 and 100*/
#include<iostream>
using namespace std;
int main()
{
	int k, sum_even = 0;

	k = 1;

	while(k <= 100)
	{
		if(k % 2 == 0)
			sum_even = sum_even + k;
		k = k + 1;
	}

	cout<<"The sum of all even numbers between 1 and 100 is "<<sum_even<<"\n\n";
	return 0;
}
