#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   double x, square, cube, squareroot, cuberoot;

   cout<<"Enter a number ->";
   cin>>x;

   square = x * x;
   cube = x * x * x;
   squareroot = sqrt(x);
   cuberoot = cbrt(x);

   cout<<"The square is "<<square<<"\n\n";
   cout<<"The cube is "<<cube<<"\n\n";
   cout<<"The squareroot is "<<squareroot<<"\n\n";
   cout<<"The cuberoot is "<<cuberoot <<"\n\n";

   return 0;
}

