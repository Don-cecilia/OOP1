#include<iostream>
using namespace std;
  struct Speed
{
    float meters, minutes, km, hrs, speed;
};
int main()
{
   Speed spd;

   cout<<"Enter the Distance in meters and time taken in minutes-> ";
   cin>>spd.meters>>spd.minutes;

   spd.km = spd.meters / 1000;
   spd.hrs = spd.minutes / 60;
   spd.speed = spd.km / spd.hrs;

   cout<<"\nThe speed is: "<<spd.speed<<" km/h";

   cout<<"\n\n";
   return 0;

}
