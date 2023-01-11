#include<iostream>
using namespace std;
  class Triangle
{
private:
    float base, height, area;
public:
    void get_input();
    void get_computation();
    void get_output();
};
int main()
{
    Triangle Tri1;

    Tri1.get_input();
    Tri1.get_computation();
    Tri1.get_output();

    cout<<"\n\n";
    return 0;
}
void Triangle::get_input()
{
    cout<<"Enter the base and height -> ";
    cin>>base>>height;
}
void Triangle::get_computation()
{
    area = 0.5 * base * height;
}
void Triangle::get_output()
{
    cout<<"\nThe area of the triangle is: "<<area;
}
