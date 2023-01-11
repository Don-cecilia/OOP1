#include<iostream>
using namespace std;
int main()
{
    double i, num, k1 = 0, k2 = 1, next_term = 0;

    cout<<"Enter the number of terms ->";
    cin>>num;

    cout<<"\nFibonacci Series."<<endl;

    for(i = 1; i <= num; i++)
    {
        if(i == 1)
        {
            cout<<k1<<"\n";
        }
    else if(i == 2)
        {
            cout<<k2<<"\n";
        }

    next_term = k1 + k2;
    k1 = k2;
    k2 = next_term;

    cout<<next_term<<"\n";
    }


    cout<<"\n\n";
    return 0;

}
