#include<iostream>
using namespace std;
double temp(double degrees_celcius);
int main()
{
    double celcius,fahren;


    cout<<"Degrees_celcius"<<"\tFahrenheit"<<endl;

    for(celcius = 0; celcius <= 300; celcius = celcius + 20)
    {
        fahren = temp(celcius);
        cout<<"\n"<<celcius<<"\t\t"<<fahren;
    }
    cout<<"\n";
    return 0;
}
double temp(double degrees_celcius)
{
    double fahrenheit;
    fahrenheit =(degrees_celcius * 9/5) + 32;
    return fahrenheit;
}
