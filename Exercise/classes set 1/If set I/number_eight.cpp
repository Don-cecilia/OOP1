#include<iostream>
using namespace std;
  class Vehicle
{
private:
    float speed, speed_limit, exceeded_speed;
public:
    void get_input();
    void get_computation();
    void get_output();
};
int main()
{
    Vehicle Veh1;

    Veh1.get_input();
    Veh1.get_computation();
    Veh1.get_output();


    cout<<"\n\n";
    return 0;
}
void Vehicle::get_input()
{
    cout<<"Enter the speed of the vehicle -> ";
    cin>>speed;

    cout<<"\nEnter the speed limit of the vehicle -> ";
    cin>>speed_limit;
}
void Vehicle::get_computation()
{
    exceeded_speed = speed - speed_limit;
}
void Vehicle::get_output()
{
    cout<<"\nVehicle speed"<<"\tSpeed limit"<<"\tExcess speed"<<"\tFine levied";
    if(exceeded_speed <= 30)
    {
        cout<<"\n"<<speed<<"\t\t"<<speed_limit<<"\t\t"<<exceeded_speed<<"\t\tKshs. 2500";
    }
    else
    {
        cout<<"\n"<<speed<<"\t\t"<<speed_limit<<"\t\t"<<exceeded_speed<<"\t\tKshs. 4000";
    }
}
