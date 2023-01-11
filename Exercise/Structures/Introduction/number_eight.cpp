#include<iostream>
using namespace std;
  struct Measurement
{
    float kilometers, meters;
};
int main()
{
    Measurement Meas1;

    cout<<"Enter the distance n kilometers -> ";
    cin>>Meas1.kilometers;

    Meas1.meters = Meas1.kilometers * 1000;

    cout<<"\n"<<Meas1.kilometers<<" kilometers = "<<Meas1.meters<<" meters";

    cout<<"\n\n";
    return 0;
}
