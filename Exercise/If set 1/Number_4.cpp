#include<iostream>
using namespace std;
int main()
{
    double x, y, subtraction, division, sum;

    cout<<"Enter two numbers -> ";
    cin>>x>>y;

    if (x > y)
    {
        subtraction = x - y;
        cout<<"The difference is "<<subtraction<<endl;
    }
    else if(x < y)
    {
        division = x / y;
        cout<<"The quotient is "<<division<<endl;
    }
    else
    {
        sum= x + y;
        cout<<"The sum is "<<sum<<endl;
    }
    cout<<"\n";
}
