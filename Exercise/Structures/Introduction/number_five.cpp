#include<iostream>
using namespace std;
  struct Conversion
{
    float meters, centimeters;
};
int main()
{
    Conversion Measurement;

    cout<<"Enter the measurements in centimeters -> ";
    cin>>Measurement.centimeters;

    Measurement.meters = Measurement.centimeters / 100;

    cout<<"\n"<<Measurement.centimeters<<" cm = "<<Measurement.meters<<" meters";

    cout<<"\n\n";
    return 0;
}
