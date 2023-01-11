#include<iostream>
using namespace std;
int main()
{
    int x, y, division;

    cout<<"Enter two numbers -> ";
    cin>>x>>y;

    if(x > y)
    {
        cout<<"Division = "<< x / y<<endl;
    }
    else if(x < y)
    {
        cout<<"Division = "<< y / x<<endl;
    }
    else if(x > y && y == 0)
    {
        cout<<"Not executable";
    }
    else if(x < y && x == 0)
    {
        cout<<"Not executable";
    }
    cout<<"\n\n";
    return 0;
}
