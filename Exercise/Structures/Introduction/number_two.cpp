#include<iostream>
using namespace std;
 struct Circle
 {
     float radius, area, circumfrence;
 };
 int main()
 {
     Circle Circ1;

     cout<<"Enter the radius of the circle -> ";
     cin>>Circ1.radius;

     Circ1.area = 22.0 / 7 * Circ1.radius * Circ1.radius;
     Circ1.circumfrence = 22.0 /7 * 2 * Circ1.radius;

     cout<<"\nThe area of the circle is: "<<Circ1.area<<"\n";
     cout<<"\nThe perimeter of the circle is: "<<Circ1.circumfrence;

     cout<<"\n\n";
     return 0;
 }
