#include<iostream>
using namespace std;
int main()
{
   double cm, m;

    cout<<"Enter the measurements ->";
    cin>>cm;

    m = cm / 100;

    cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);


    cout<<"\nThe measurements are "<<m<<"\n\n";
    return 0;
}
