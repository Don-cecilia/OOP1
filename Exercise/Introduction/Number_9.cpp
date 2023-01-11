#include<iostream>
using namespace std;
int main()
{
    double grams, kgs, packages;

    cout<<"Enter the weight->";
    cin>>grams;

    kgs = grams / 1000;
    packages = ((1000)/grams * 1);

    cout<<"\nThe weight is "<<kgs<<" kgs\n\n";
    cout<<"\nThe packages is "<<packages<<" packages\n\n";
}
