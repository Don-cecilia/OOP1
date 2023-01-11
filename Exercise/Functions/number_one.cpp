#include<iostream>
using namespace std;
double circle_area(double radius);
double circle_perimeter(double radius);
int main()
{
    double ar, per, rad;

    cout<<"Enter the radius of the circle -> ";
    cin>>rad;

    ar = circle_area(rad);
    per = circle_perimeter(rad);

    cout<<"\nThe area of the circle is "<<ar<<endl<<"The perimeter of the circle is "<<per<<endl;
    cout<<"\n";
}
double circle_area(double radius)
{
    double area;
    area = 3.142 * radius * radius;
    return area;
}
double circle_perimeter(double radius)
{
    double perimeter;
    perimeter = 2 * 3.142 * radius;
    return perimeter;
}
