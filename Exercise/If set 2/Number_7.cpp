#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter the number -> ";
    cin>>num;

    if(num > 0)
    {
        cout<<"POSITIVE";
    }
    else if(num < 0)
    {
        cout<<"NEGATIVE";
    }
    else
    {
       cout<<"ZERO";
    }
    cout<<"\n\n";
    return 0;
}
