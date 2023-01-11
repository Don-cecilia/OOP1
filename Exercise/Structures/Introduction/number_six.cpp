#include<iostream>
using namespace std;
  struct Temperature
{
    float celcius, fah;
};
int main()
{
    Temperature Temp1;

    cout<<"Enter the temperature in degrees celcius -> ";
    cin>>Temp1.celcius;

    Temp1.fah = (Temp1.celcius * 9/5) + 32;

    cout<<"\nThe temperature in Fahrenheits is "<<Temp1.fah<<" Fahrenheits";

    cout<<"\n\n";
    return 0;
}
