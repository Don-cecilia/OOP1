#include<iostream>
using namespace std;
float tri_area(float base, float height);
int main()
{
    float bas, hei, ar;

    cout<<"Enter the base and height of the triangle -> ";
    cin>>bas>>hei;

    ar = tri_area(bas, hei);

    cout<<"\nThe area of the triangle is: "<<ar;

    cout<<"\n\n";
    return 0;
}
float tri_area(float base, float height)
{
    float area;
    area = 0.5 * base * height;
    return area;
}
