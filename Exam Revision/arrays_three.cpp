#include<iostream>
using namespace std;
int main()
{
    int i;
    double num[10], big, small, sum = 0, average;

    for(i = 0; i < 10; i++)
    {
        cout<<"\nEnter number "<<(i +1)<<" -> ";
        cin>>num[i];
    }
    for(i = 0; i < 10; i++)
    {
        sum = sum + num[i];

        if(num[i] > big)
            big = num[i];
        else
            small = num[i];
    }
    average = sum / 10;
    cout<<"\nThe biggest number is: "<<big;
    cout<<"\nThe smallest number is: "<<small;
    cout<<"\nThe sum is "<<sum<<" and the average is "<<average;

    cout<<"\n\n";
    return 0;
}
