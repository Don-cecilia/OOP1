//using classes write a program to calculate the area of a two rectangles
#include<iostream>
using namespace std;
    class Rectangle
{
private:
    int length, width;
    float area, perimeter;
public:
    void input(), compute(), output();
};
int main()
{
    Rectangle Rect1;

    Rect1.input();
    Rect1.compute();
    Rect1.output();

    cout<<"\n\n";
    return 0;
}
void Rectangle::input()
{
    cout<<"Enter the length and width of the rectangle -> ";
    cin>>length>>width;
}
void Rectangle::compute()
{
   area = length * width;
   perimeter = 2 * (length + width);
}
void Rectangle::output()
{
    cout<<"\nThe area of the rectangle is: "<<area;
    cout<<"\nThe perimeter of the rectangle is: "<<perimeter;
}
