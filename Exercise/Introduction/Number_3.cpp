#include<iostream>
using namespace std;
int main()
{
    int x, y, area, perimeter;

    cout<<"Enter the length and width -> ";
    cin>>x>>y;

    area = x * y;
    perimeter = 2 * (x + y);

    cout<<"\nThe area of the rectangle is "<<area<<"\n\n";
    cout<<"\nThe perimeter of the rectangle is "<<perimeter<<"\n\n";
    return 0;
}

