#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle
{
private:
    int length,width;
    float area,perimeter;
public:
    void get_dimensions();
    void get_computation();
    void get_output();
};
int main()
{
    Rectangle  Rect1;

    Rect1.get_dimensions();
    Rect1.get_computation();
    Rect1.get_output();

    cout<<"\n\n";
    return 0;
}
void Rectangle::get_dimensions()
{
    cout<<"Enter the length and width -> ";
    cin>>length>>width;
}
void Rectangle::get_computation()
{
    area = length * width;
    perimeter = 2 * ( length + width);
}
void Rectangle::get_output()
{
   cout<<"\nThe area is "<<area;
   cout<<"\nThe perimeter is "<<perimeter;
}


