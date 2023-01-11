#include<iostream>
using namespace std;
float circ_area(float radius);
float circ_circumfrence(float radius);
int main()
{
    float rad, ar, circum;

    cout<<"Enter the radius of the circle -> ";
    cin>>rad;

    ar = circ_area(rad);
    circum = circ_circumfrence(rad);

    cout<<"\nThe area of the circle is: "<<ar<<"\n"
        <<"\nThe perimeter of the circle is: "<<circum;

    cout<<"\n\n";
    return 0;
}
float circ_area(float radius)
{
    float area;
    area = 22.0/7 * radius * radius;
    return area;
}
float circ_circumfrence(float radius)
{
    float circumfrence;
    circumfrence = 22.0/7 * 2 * radius;
    return circumfrence;
}
