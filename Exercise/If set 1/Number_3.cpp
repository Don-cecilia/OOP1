#include<iostream>
using namespace std;
int main()
{
    int gross_pay, tax, net_pay;

    cout<<"Enter the gross pay -> ";
    cin>>gross_pay;

    if(gross_pay >= 40000)
    {
        tax = 0.3 * gross_pay;
        cout<<"The tax amount is " <<tax<<endl;
        cout<<"The net_pay is "<<gross_pay - tax<<endl;
    }
    else if(gross_pay >= 30000 && gross_pay < 40000)
    {
        tax = 0.25 * gross_pay;
       cout<<"The tax amount is " <<tax<<endl;
       cout<<"The net_pay is "<<gross_pay - tax<<endl;
    }
    else if(gross_pay >=20000  && gross_pay < 30000)
    {
        tax = 0.15 * gross_pay;
       cout<<"The tax amount is " <<tax<<endl;
       cout<<"The net_pay is "<<gross_pay - tax<<endl;
    }
    else if(gross_pay >=10000  && gross_pay < 20000)
    {
        tax = 0.1 * gross_pay;
       cout<<"The tax amount is " <<tax<<endl;
       cout<<"The net_pay is "<<gross_pay - tax<<endl;
    }
    else
    {
       cout<<"No tax";
    }
    cout<<"\n";

    return 0;
}
