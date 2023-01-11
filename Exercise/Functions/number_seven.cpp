#include<iostream>
using namespace std;
float rect_area(float length, float width);
float circ_area(float radius);
float tri_area(float base, float height);
int main()
{
    float choice, leng, wid, rad, bas, hei, ar;

    cout<<"**Figures**"<<endl;
    cout<<"1.     Rectangle"<<endl;
    cout<<"2.     Circle"<<endl;
    cout<<"3.     Triangle"<<endl;

    cout<<"Enter your option -> ";
    cin>>choice;

    if(choice == 1)
    {
        cout<<"Enter the length and width -> ";
        cin>>leng>>wid;
        ar = rect_area(leng, wid);
        cout<<"\nThe area of the rectangle is "<<ar;
    }
    else if(choice == 2)
    {
        cout<<"Enter the radius -> ";
        cin>>rad;
        ar = circ_area(rad);
        cout<<"\nThe area of the circle is "<<ar;
    }
    else if(choice == 3)
    {
        cout<<"Enter the base and height of the triangle -> ";
        cin>>bas>>hei;
        ar = tri_area(bas, hei);
        cout<<"\nThe area of the triangle is "<<ar;
    }
    else
        cout<<"\nInvalid choice.";
    cout<<"\n";
}
float rect_area(float length, float width)
{
    float area;
    area = length * width;
    return area;
}
float circ_area(float radius)
{
    float area;
    area = 3.142 * radius * radius;
    return area;
}
float tri_area(float base, float height)
{
    float area;
    area = 0.5 * (base * height);
    return area;
}
