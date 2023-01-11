#include<iostream>
using namespace std;
int my_function(int&x, int&y);
int main()
{
    int a = 5, b = 10;

    cout<<"Before the function";
    cout<<"\na = "<<a<<"\nb = "<<b;

    my_function(a, b);

    cout<<"\n\nAfter the function call";
    cout<<"\na = "<<a<<"\nb = "<<b;

    cout<<"\n\n";
    return 0;
}
int my_function(int&x, int&y)
{
    x = x * 10, y = y * 20;

    cout<<"\n\nInside the function";
    cout<<"\nx = "<<x<<"\ny = "<<y;
}
