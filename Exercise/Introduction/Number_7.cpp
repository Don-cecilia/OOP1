#include<iostream>
using namespace std;
int main()
{
    double m, km, min, hrs, speed;

    cout<<"Enter the distance ->";
    cin>>m;

    cout<<"Enter the time taken ->";
    cin>>min;

    km = m/1000;
    hrs = min/60;
    speed = km/hrs;

    cout<<"\nThe speed is "<<speed<<" km/h\n\n";
    return 0;
}
