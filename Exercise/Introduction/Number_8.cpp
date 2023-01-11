#include<iostream>
using namespace std;
int main()
{
    double km, m;

    cout<<"Enter the distance ->";
    cin>>km;

    m = km * 1000;

    cout.setf(ios::scientific);
    cout.setf(ios::showpoint);
    cout.precision(3);

    cout<<"\nThe distance is "<<km<<" km\n\n";
    return 0;
}
