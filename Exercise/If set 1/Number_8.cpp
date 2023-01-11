#include<iostream>
using namespace std;
int main()
{
    int speed, speed_limit, excess_speed;

    cout<<"Enter the speed -> ";
    cin>>speed;

    cout<<"Enter the speed limit -> ";
    cin>>speed_limit;

    excess_speed = speed - speed_limit;

    cout<<"The speed exceeded is "<<excess_speed<<endl;

    if(excess_speed <= 30)
    {
        cout<<"The fine levied is Kshs 2500";
        cout<<"\nSpeed = "<<speed<<endl;
    }
    else
    {
        cout<<"The fine levied is Kshs 4000";
        cout<<"\nSpeed = "<<speed<<endl;
    }

    cout<<"\n";
}
