//using structures write a program to calculate the area of a two rectangles
#include<iostream>
using namespace std;
    struct Rectangle
{
    int length, width;
    float area, perimeter;
};
int main()
{
    Rectangle Rect1, Rect2;

    cout<<"Enter the length and width of the rectangle1 -> ";
    cin>>Rect1.length>>Rect1.width;

    cout<<"\nEnter the length and width of the rectangle2 -> ";
    cin>>Rect2.length>>Rect2.width;

    Rect1.area = Rect1.length * Rect1.width;
    Rect2.area = Rect2.length * Rect2.width;

    Rect1.perimeter = (Rect1.length + Rect1.width) * 2;
    Rect2.perimeter = (Rect2.length + Rect2.width) * 2;

    cout<<"\nThe area of the two rectangles is: Rectangle1 = "<<Rect1.area<<"\tRectangle2 = "<<Rect2.area;
    cout<<"\nThe perimeter of the two rectangles is: Rectangle1 = "<<Rect1.perimeter<<"\tRectangle2 = "<<Rect2.perimeter;

    cout<<"\n\n";
    return 0;
}
