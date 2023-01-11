#include<iostream>
using namespace std;
int main()
{
    int num, power, i, output = 1;

    cout<<"Enter the number ->";
    cin>>num;

    cout<<"Enter the power ->";
    cin>>power;

    for(i = 1; i <= power; i++)
    {
        output = output * num;
    }
    cout<<"\nThe answer is "<<output;

    cout<<"\n\n";

    return 0;
}
