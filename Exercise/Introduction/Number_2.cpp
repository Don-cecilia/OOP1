#include<iostream>
using namespace std;
int main()
{
    int x, area, circumference;

    cout<<"Enter the radius -> ";
    cin>>x;

    area = 3.142 * x * x;
    circumference = 2 * 3.142 * x;

    cout<<"\nThe area of the circle is "<<area<<"\n\n";
    cout<<"\nThe circumference of the circle is "<<circumference<<"\n\n";
    return 0;
}
