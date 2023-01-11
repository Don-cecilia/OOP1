//using structures and arrays write a program to calculate the area of a many rectangles
#include<iostream>
using namespace std;
    struct Rectangle
{
    int length, width;
    float area, perimeter;
};
int main()
{
    Rectangle Rect[20];
    int i, number;

    cout<<"Enter the number of rectangles you want to work with -> ";
    cin>>number;

    for(i = 0; i < number; i++)
    {
        cout<<"----Input entry for"<<(i +1)<<"\n";
        cout<<"Enter the length and width of the rectangle -> ";
        cin>>Rect[i].length>>Rect[i].width;
    }
    for(i = 0; i < number; i++)
    {
        Rect[i].area = Rect[i].length * Rect[i].width;
        Rect[i].perimeter = (Rect[i].length + Rect[i].width) * 2;
    }

    for(i = 0; i < number; i++)
    {
        cout<<"\n----Rectangle "<<(i + 1)<<":";
        cout<<"\nThe area of the rectangle is: "<<Rect[i].area;
        cout<<"\nThe perimeter of the rectangle is: "<<Rect[i].perimeter;
    }

    cout<<"\n\n";
    return 0;
}
