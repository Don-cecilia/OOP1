#include<iostream>
using namespace std;
    class TwoDshape
{
protected:
    int length, width, area, perimeter;
public:
    ~TwoDshape();
    TwoDshape(double leng,double wid);//parameterized constructor
    void get_dimensions();//member function
    int show_dimension1(), show_dimension2();//Accessor function
};
    class Rectangle:public TwoDshape
{
public:
    void get_input(), compute(), output();
};
int main()
{
    TwoDshape rect1, rect3(4,4);
    Rectangle rect2;

    cout<<"****Input for Rectangle 1****";
    rect1.get_dimensions();

    cout<<"\n****Input for Rectangle 2****";
    rect2.get_input();
    rect2.compute();

    cout<<"\n****Output for Rectangle 1****";
    cout<<"\nLength = "<<rect1.show_dimension1()<<"\tWidth = "<<rect1.show_dimension2();

    cout<<"\n\n****Output of rectangle 2****";
    rect2.output();

    cout<<"\n****Output for Rectangle 3****";
    cout<<"\nLength = "<<rect3.show_dimension1()<<"\tWidth = "<<rect3.show_dimension2();

    cout<<"\n\n";
    return 0;
}
TwoDshape::~TwoDshape()
{

}
TwoDshape::TwoDshape(double leng, double wid)
{
    length = leng;
    width = wid;
}
void TwoDshape::get_dimensions()
{
    cout<<"\nEnter the length and width of the rectangle -> ";
    cin>>length>>width;
}
int TwoDshape::show_dimension1()
{
   return length;
}
int TwoDshape::show_dimension2()
{
   return width;
}
void Rectangle::get_input()
{
    get_dimensions();
}
void Rectangle::compute()
{
    area = length * width;
    perimeter = 2 * (length + width);
}
void Rectangle::output()
{
    cout<<"\nThe area of the rectangle is: "<<area
        <<"\nThe perimeter of the rectangle is: "<<perimeter;
}
