#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double n, r,h;

	cout<<"How many terms do you want ->";
	cin>>h;

	n = 2;//Initialization
    r = 1;
	do
	{
		cout<<fixed<<setprecision(0)<<"\t "<<n;
		n = n * 3;//updation
		r++;
	}while(r <= h); //Condition

	cout<<"\n\n";
	return 0;
}
