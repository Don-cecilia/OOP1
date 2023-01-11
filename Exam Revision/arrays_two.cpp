#include<iostream>
using namespace std;
int main()
{
    int i, mark[10];

    for(i = 0; i < 10; i++)
    {
        cout<<"Enter the numbers "<< (i + 1)<<" -> ";
        cin>>mark[i];
    }

    cout<<"\nThe numbers entered are:";
    for(i = 0; i < 10; i++)
    {
        cout<<"\n"<<mark[i];
    }
    cout<<"\n\n";
    return 0;
}
