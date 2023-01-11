#include<iostream>
using namespace std;
double conv_fahrenheit(float degrees_celcius);
int main()
{
    double celcius, fah;

    cout<<"Enter the temperature in degrees celcius -> ";
    cin>>celcius;

    fah = conv_fahrenheit(celcius);

    cout<<"\nThe temperature in fahrenheit is "<<fah<<" Fahrenheits";
    cout<<"\n\n";
    return 0;
}
double conv_fahrenheit(float degrees_celcius)
{
    float fahrenheit;
    fahrenheit = (degrees_celcius * 9 /5 ) + 32;
    return fahrenheit;
}
