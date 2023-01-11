#include<iostream>
using namespace std;
int main()
{
    int num;

    cout<<"Enter the number -> ";
    cin>>num;

    if(num % 9 == 0 && num % 2 == 0)
    {
        cout<<"Evenly divisible";
    }
    else
       cout<<"Not evenly divisible";

    cout<<"\n\n";
    return 0;
}
