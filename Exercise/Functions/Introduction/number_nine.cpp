#include<iostream>
using namespace std;
float conv_kilograms(float grams);
float package(float grams);
int main()
{
    float g, kg, pack;

    cout<<"Enter the weight in grams -> ";
    cin>>g;

    kg = conv_kilograms(g);
    pack = package(g);

    cout<<"\nThe weight of the package is "<<kg<<" kilograms.\n"
        <<"\nIt takes "<<pack<<" such packages to form one kilograms.";

    cout<<"\n\n";
    return 0;
}
float conv_kilograms(float grams)
{
    float kilograms;
    kilograms = grams / 1000;
    return kilograms;
}
float package(float grams)
{
    float package;
    package = (1000 / grams * 1);
    return package;
}
