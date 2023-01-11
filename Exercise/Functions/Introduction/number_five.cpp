#include<iostream>
using namespace std;
double conv_meter(double centimeter);
int main()
{
    double cm, m;

    cout<<"Enter your measurements -> ";
    cin>>cm;

    m = conv_meter(cm);

    cout<<"\n"<<cm <<" centimeters = "<<m<<" meters";

    cout<<"\n\n";
    return 0;
}
double conv_meter(double centimeter)
{
    double meter;
    meter = centimeter / 100;
    return meter;
}
