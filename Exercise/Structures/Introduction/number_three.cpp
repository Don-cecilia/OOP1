#include<iostream>
using namespace std;
  struct Rectangle
{
    float width, length, area, perimeter;
};
int main()
{
    Rectangle Rect1;

    cout<<"Enter the length and the width of the rectangle -> ";
    cin>>Rect1.length>>Rect1.width;

    Rect1.area = Rect1.length * Rect1.width;
    Rect1.perimeter = 2 * (Rect1.length + Rect1.width);

    cout<<"\nThe area of the rectangle is: "<<Rect1.area<<"\n";
    cout<<"\nThe perimeter of the rectangle is: "<<Rect1.perimeter<<"\n";

    cout<<"\n\n";
    return 0;
}
