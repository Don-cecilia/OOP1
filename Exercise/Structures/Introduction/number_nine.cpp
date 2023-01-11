#include<iostream>
using namespace std;
  struct Weight
{
    float grams, kilograms, packages;
};
int main()
{
    Weight Weig1;

    cout<<"Enter the weight of the package in grams -> ";
    cin>>Weig1.grams;

    Weig1.kilograms = Weig1.grams / 1000;
    Weig1.packages = (1000 / Weig1.grams * 1);

    cout<<"\nThe weight of the package is "<<Weig1.kilograms<<" kilograms.\n";
    cout<<"\nIt takes "<<Weig1.packages<<" such packages to form one kilogram.";

    cout<<"\n\n";
    return 0;
}
