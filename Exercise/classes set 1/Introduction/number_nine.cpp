#include<iostream>
using namespace std;
  class Weight
{
private:
    float grams, kilograms, packages;
public:
    void get_input();
    void get_computation();
    void get_output();
};
int main()
{
    Weight Weig1;

    Weig1.get_input();
    Weig1.get_computation();
    Weig1.get_output();

    cout<<"\n\n";
    return 0;
}
void Weight::get_input()
{
    cout<<"Enter the weight of the package in grams -> ";
    cin>>grams;
}
void Weight::get_computation()
{
    kilograms = grams / 1000;
    packages = (1000 / grams * 1);
}
void Weight::get_output()
{
    cout<<"\nThe weight of the package is "<<kilograms<<" kilograms.\n";
    cout<<"\nIt takes "<<packages<<" such packages to form one kilogram.";
}
