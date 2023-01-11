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
    void get_area();
    void get_perimeter();
    void rect_area();
    void rect_perimeter();
};
int main()
{
    Rectangle  Rect1;

    Rect1.get_dimensions();
    Rect1.get_area();
    Rect1.get_perimeter();
    Rect1.rect_area();
    Rect1.rect_perimeter();

    cout<<"\n\n";
    return 0;
}
void Rectangle::get_dimensions()
{
    cout<<"Enter the length and width -> ";
    cin>>length>>width;
}
void Rectangle::get_area()
{
    area = length * width;
}
void Rectangle::get_perimeter()
{
    perimeter = 2 * ( length + width);
}
void Rectangle::rect_area()
{
   cout<<"\nThe area is "<<area;
}
void Rectangle::rect_perimeter()
{
    cout<<"\nThe perimeter is "<<perimeter;
}


