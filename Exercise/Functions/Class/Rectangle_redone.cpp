#include<iostream>
using namespace std;
double rect_area(double width, double length);
double rect_perimeter(double width, double length); /* Function prototype */
int main()
{
	double ar, wid, leng, per;

	cout<<"Enter the width and length of the rectangle: ";
	cin>>wid>>leng;

	ar = rect_area(wid,leng); /*Function call */
	cout<<"\nThe area of the rectangle is "<<ar<<"\n\n";

	per = rect_perimeter(wid, leng);
	cout<<"\nThe perimeter of the rectangle is "<<per<<"\n\n";

	return 0;
}
double rect_area(double width, double length) /*Function header / heading */
{
	double area;
	area = width * length;	// Function body & function definition
	return area;
}
double rect_perimeter(double width, double length)
{
    double perimeter;
    perimeter = 2 * (width + length);
    return perimeter;
}
