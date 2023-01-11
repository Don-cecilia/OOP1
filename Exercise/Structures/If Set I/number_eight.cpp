#include<iostream>
using namespace std;
  struct Vehicle
{
    float speed, speed_limit, exceeded_speed;
};
int main()
{
    Vehicle Veh1;

    cout<<"Enter the speed of the vehicle -> ";
    cin>>Veh1.speed;

    cout<<"\nEnter the speed limit of the vehicle -> ";
    cin>>Veh1.speed_limit;

    Veh1.exceeded_speed = Veh1.speed - Veh1.speed_limit;

    cout<<"\nVehicle speed"<<"\tSpeed limit"<<"\tExcess speed"<<"\tFine levied";
    if(Veh1.exceeded_speed <= 30 && Veh1.exceeded_speed > 0)
    {
        cout<<"\n"<<Veh1.speed<<"\t\t"<<Veh1.speed_limit<<"\t\t"<<Veh1.exceeded_speed<<"\t\tKshs. 2500";
    }
    else if(Veh1.exceeded_speed > 30)
    {
        cout<<"\n"<<Veh1.speed<<"\t\t"<<Veh1.speed_limit<<"\t\t"<<Veh1.exceeded_speed<<"\t\tKshs. 4000";
    }
    else
        cout<<"\n"<<Veh1.speed<<"\t\t"<<Veh1.speed_limit<<"\t\t"<<Veh1.exceeded_speed<<"\t\tNo fine levied.";

    cout<<"\n\n";
    return 0;

}
