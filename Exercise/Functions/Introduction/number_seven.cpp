#include<iostream>
using namespace std;
float speed(float kilometers, float hours);
int main()
{
    float meters, minutes, hrs, km, spd;

    cout<<"Enter the distance in meters -> ";
    cin>>meters;

    cout<<"Enter the time taken in minutes -> ";
    cin>>minutes;

    km = meters / 1000;
    hrs = minutes / 60;

    spd = speed(km, hrs);

    cout<<"\nThe speed is "<<spd<<"km/h";

    cout<<"\n\n";
    return 0;
}
float speed(float kilometers, float hours)
{
    float speed;
    speed = kilometers / hours;
    return speed;
}
