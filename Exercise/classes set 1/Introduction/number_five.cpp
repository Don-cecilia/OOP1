#include<iostream>
using namespace std;
  class Conversion
{
private:
    float meters, centimeters;
public:
    void get_dimensions();
    void get_computation();
    void get_output();
};
int main()
{
    Conversion Measurement;

    Measurement.get_dimensions();
    Measurement.get_computation();
    Measurement.get_output();

    cout<<"\n\n";
    return 0;
}
void Conversion::get_dimensions()
{
    cout<<"Enter the measurements in centimeters -> ";
    cin>>centimeters;
}
void Conversion::get_computation()
{
    meters = centimeters / 100;
}
void Conversion::get_output()
{
    cout<<"\n"<<centimeters<<" cm = "<<meters<<" meters";
}
