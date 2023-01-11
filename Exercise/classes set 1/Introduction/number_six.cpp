#include<iostream>
using namespace std;
  class Temperature
{
private:
    float celcius, fah;
public:
    void get_input();
    void get_computations();
    void get_output();
};
int main()
{
    Temperature Temp1;

    Temp1.get_input();
    Temp1.get_computations();
    Temp1.get_output();

    cout<<"\n\n";
    return 0;
}
void Temperature::get_input()
{
    cout<<"Enter the temperature in degrees celcius -> ";
    cin>>celcius;
}
void Temperature::get_computations()
{
    fah = (celcius * 9/5) + 32;
}
void Temperature::get_output()
{
    cout<<"\nThe temperature in Fahrenheits is "<<fah<<" Fahrenheits";
}
