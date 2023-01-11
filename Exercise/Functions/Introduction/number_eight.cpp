#include<iostream>
using namespace std;
float conv_meter(float kilometers);
int main()
{
    float m, km;

    cout<<"Enter the measurements in km -> ";
    cin>>km;

    m = conv_meter(km);

    cout<<"\n"<<km<<" kilometers = "<<m<<" meters";

    cout<<"\n\n";
    return 0;
}
float conv_meter(float kilometers)
{
    float meter;
    meter = kilometers * 1000;
    return meter;
}
