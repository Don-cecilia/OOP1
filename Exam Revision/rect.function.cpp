#include<iostream>
using namespace std;
float rect_area(float length, float width);//function prototype-> formal parameters(function called)
float rect_perimeter(float length, float width);
int main()
{
    float leng, wid, ar, per;

    cout<<"Enter the length and width of the rectangle -> ";
    cin>>leng>>wid;

    ar = rect_area(leng, wid);//function call-> actual parameters(function call)
    per = rect_perimeter(leng, wid);

    cout<<"\nThe area of the rectangle is: "<<ar
        <<"\nThe perimeter of the rectangle is: "<<per;

    cout<<"\n\n";
    return 0;
}
float rect_area(float length, float width)
{
    float area;
    area = length * width;
    return area;
}
float rect_perimeter(float length, float width)
{
    float perimeter;
    perimeter = 2 * (length + width);
    return perimeter;
}
