#include<iostream>
#include<rect_function.h>
using namespace std;
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
