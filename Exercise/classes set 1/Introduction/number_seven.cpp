#include<iostream>
using namespace std;
  class Speed
{
private:
    float meters, minutes, km, hrs, speed;
public:
    void get_input();
    void get_computations();
    void get_output();
};
int main()
{
   Speed spd;

   spd.get_input();
   spd.get_computations();
   spd.get_output();

   cout<<"\n\n";
   return 0;
}
void Speed::get_input()
{
    cout<<"Enter the Distance in meters and time taken in minutes-> ";
    cin>>meters>>minutes;
}
void Speed::get_computations()
{
    km = meters / 1000;
    hrs = minutes / 60;
    speed = km / hrs;
}
void Speed::get_output()
{
    cout<<"\nThe speed is: "<<speed<<" km/h";
}
