#include<iostream>
using namespace std;
  struct Area
{
    float length, width, base, height, radius,area, perimeter, choice;
};
int main()
{
    Area Fig1;

    cout<<"***Figures***";
    cout<<"\n1.Rectangle";
    cout<<"\n2.Circle";
    cout<<"\n3.Triangle";

    cout<<"\nEnter your choice -> ";
    cin>>Fig1.choice;

    if(Fig1.choice == 1)
    {
        cout<<"\nEnter the length and width of the rectangle -> ";
        cin>>Fig1.length>>Fig1.width;

        Fig1.area = Fig1.length * Fig1.width;
        Fig1.perimeter = 2 * (Fig1.length + Fig1.width);

        cout<<"\nThe area of the rectangle is: "<<Fig1.area<<"\n";
        cout<<"\nThe perimeter of the rectangle is: "<<Fig1.perimeter;
    }
    else if(Fig1.choice == 2)
    {
        cout<<"\nEnter the radius of the circle -> ";
        cin>>Fig1.radius;

        Fig1.area = 22.0 / 7 * Fig1.radius * Fig1.radius;
        Fig1.perimeter = 2 * 22.0 / 7 * Fig1.radius;

        cout<<"\nThe area of the circle is: "<<Fig1.area<<"\n";
        cout<<"\nThe circumfrence of the circle is: "<<Fig1.perimeter;
    }
    else if(Fig1.choice == 3)
    {
        cout<<"\nEnter the base and height of the triangle -> ";
        cin>>Fig1.base>>Fig1.height;

        Fig1.area = 0.5 * Fig1.base * Fig1.height;
        Fig1.perimeter = Fig1.base + Fig1.height;

        cout<<"\nThe area of the triangle is: "<<Fig1.area<<"\n";
        cout<<"\nThe perimeter of the triangle is: "<<Fig1.perimeter;
    }
    else
        cout<<"\nInvalid choice.";

    cout<<"\n\n";
    return 0;
}
