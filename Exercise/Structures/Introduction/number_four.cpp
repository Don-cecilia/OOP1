#include<iostream>
using namespace std;
  struct Triangle
{
    float base, height, area;
};
int main()
{
    Triangle Tri1;

    cout<<"Enter the base and height -> ";
    cin>>Tri1.base>>Tri1.height;

    Tri1.area = 0.5 * Tri1.base * Tri1.height;

    cout<<"\nThe area of the triangle is: "<<Tri1.area;

    cout<<"\n\n";
    return 0;
}
