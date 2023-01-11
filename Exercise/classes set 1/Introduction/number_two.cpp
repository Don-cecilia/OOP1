#include<iostream>
using namespace std;
class Circle
{
private:
    int radius;
    float area, perimeter;
public:
    void get_dimensions();
    void get_computation();
    void get_output();
};
int main()
{
    Circle Circ1;

    Circ1.get_dimensions();
    Circ1.get_computation();
    Circ1.get_output();

    cout<<"\n\n";
    return 0;
}
void Circle::get_dimensions()
{
   cout<<"Enter the radius -> ";
   cin>>radius;
}
void Circle::get_computation()
{
    area = 22.0 / 7 * (radius * radius);
    perimeter = 2 * (22.0 / 7 * radius);
}
void Circle::get_output()
{
    cout<<"\nThe area is "<<area;
    cout<<"\n\nThe perimeter is "<<perimeter;
}
