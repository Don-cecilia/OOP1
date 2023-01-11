#include<iostream>
using namespace std;
int main()
{
    int x, y;

    cout<<"Enter the number ->";
    cin>>x;

    if(x > 5)
    {
        y = (4 * x * x * x ) + (2 * x) -6;
        cout<<"The value of y is "<<y;
    }
    else if(x < 5)
    {
        y = (3 * x * x) - (4 * x) + 12;
        cout<<"The value of y is "<<y;
    }
    else
    {
        y = (6 * x) - 5;
        cout<<"The value of y is "<<y;
    }
    cout<<"\n\n";
    return 0;
}
