#include<iostream>
using namespace std;
int main()
{
    double degrees,fahrenheit;

    cout<<"Enter the temperature -> ";
    cin>>degrees;

    fahrenheit = (degrees * 9/5) + 32;

    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(3);

    cout<<"\nThe temperature is "<<fahrenheit<<" fahrenheits\n\n";
    return 0;
}

