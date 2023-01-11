#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n, r;

	n = 2;//Initialization
    r = 1;
	do
	{
		cout<<fixed<<setprecision(0)<<"\t "<<n;
		n = n * 3;//updation
		r++;
	}while(r <= 20); //Condition

	cout<<"\n\n";
	return 0;
}
