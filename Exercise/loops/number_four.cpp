#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    double num, rec, X;

    cout<<"Enter the number ->";
    cin>>num;

    if(num == 0)
    {
        cout<<"Enter the value again.";
    }
    else
    {
        rec = (1 / num);

        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);

        cout<<"\nThe reciprocal of the number is "<<rec;
    }

    cout<<endl<<endl;



    cout<<"Press c to continue"<<endl<<endl;
    X = getchar();

    cout<<"Press x to exit"<<endl<<endl;
    X = getchar();

    cout<<"\n\n";

    return 0;
}
