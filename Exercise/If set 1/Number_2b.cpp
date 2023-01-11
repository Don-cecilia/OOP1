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
    cout<<"5.       %"<<endl;

    cout<<"Enter your option -> ";
    cin>>Oprt;

    switch(Oprt)
    {
        case 1:cout<<"The sum is "<<x + y;
            break;
        case 2:cout<<"The Difference is "<<x - y;
            break;
        case 3:cout<<"The Product is "<<x * y;
            break;
        case 4:cout<<"The division is "<<x / y;
            break;
        case 5:cout<<"The percentage is "<<x / y * 100;
            break;
        default:cout<<"Invalid choice";
            break;
    }
    cout<<"\n\n";
}

