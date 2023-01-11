#include<iostream>
using namespace std;
int main()
{
    int x, y,Oprt;

    cout<<"Enter two numbers -> ";
    cin>>x>>y;

    cout<<"****Operators****"<<endl;
    cout<<"1.       +"<<endl;
    cout<<"2.       -"<<endl;
    cout<<"3.       *"<<endl;
    cout<<"4.       /"<<endl;
    cout<<"5.       "<<endl;


    cout<<"Enter your option -> ";
    cin>>Oprt;

    if(Oprt == 1)
    {
        cout<<"The sum is "<<x + y;
    }
    else if(Oprt == 2)
    {
       cout<<"The Difference is "<<x - y;
    }
    else if(Oprt == 3)
    {
        cout<<"The Product is "<<x * y;
    }
    else if(Oprt == 4)
    {
       cout<<"The division is "<<x / y;
    }
    else if(Oprt == 5)
    {
      cout<<"The percentage is "<<x / y * 100;
    }
    else
        cout<<"Invalid choice";

    cout<<"\n\n";
}
