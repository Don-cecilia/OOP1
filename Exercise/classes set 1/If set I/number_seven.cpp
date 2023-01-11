#include<iostream>
using namespace std;
  class Area
{
private:
    float length, width, base, height, radius,area, perimeter, choice;
public:
    void get_input();
    void get_output();
};
int main()
{
    Area Fig1;

    cout<<"***Figures***";
    cout<<"\n1.Rectangle";
    cout<<"\n2.Circle";
    cout<<"\n3.Triangle";

    Fig1.get_input();
    Fig1.get_output();

    cout<<"\n\n";
    return 0;
}
void Area::get_input()
{
    cout<<"\nEnter your choice -> ";
    cin>>choice;
}
void Area::get_output()
{
    if(choice == 1)
    {
        cout<<"\nEnter the length and width of the rectangle -> ";
        cin>>length>>width;

        area = length * width;
        perimeter = 2 * (length + width);

        cout<<"\nThe area of the rectangle is: "<<area<<"\n";
        cout<<"\nThe perimeter of the rectangle is: "<<perimeter;
    }
    else if(choice == 2)
    {
        cout<<"\nEnter the radius of the circle -> ";
        cin>>radius;

        area = 22.0 / 7 * radius * radius;
        perimeter = 2 * 22.0 / 7 * radius;

        cout<<"\nThe area of the circle is: "<<area<<"\n";
        cout<<"\nThe circumfrence of the circle is: "<<perimeter;
    }
    else if(choice == 3)
    {
        cout<<"\nEnter the base and height of the triangle -> ";
        cin>>base>>height;

        area = 0.5 * base * height;
        perimeter = base + height;

        cout<<"\nThe area of the triangle is: "<<area<<"\n";
        cout<<"\nThe perimeter of the triangle is: "<<perimeter;
    }
    else
        cout<<"\nInvalid choice.";
}
