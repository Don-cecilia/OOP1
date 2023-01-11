#include<iostream>
using namespace std;
  class Measurement
{
private:
    float kilometers, meters;
public:
    void get_input();
    void get_computations();
    void get_output();
};
int main()
{
    Measurement Meas1;

    Meas1.get_input();
    Meas1.get_computations();
    Meas1.get_output();

    cout<<"\n\n";
    return 0;
}
void Measurement::get_input()
{
    cout<<"Enter the distance n kilometers -> ";
    cin>>kilometers;
}
void Measurement::get_computations()
{
    meters = kilometers * 1000;
}
void Measurement::get_output()
{
    cout<<"\n"<<kilometers<<" kilometers = "<<meters<<" meters";
}
