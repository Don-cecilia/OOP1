#include<iostream>
using namespace std;
  struct Kra
{
private:
    float gross_pay, net_pay, tax;
public:
    void get_input();
    void get_output();
};
int main()
{
    Kra Person1;

    Person1.get_input();
    Person1.get_output();
    cout<<"\n\n";
    return 0;
}
void Kra::get_input()
{
    cout<<"Enter the gross pay -> ";
    cin>>gross_pay;
}
void Kra::get_output()
{
    if(gross_pay >= 40000)
    {
        tax = 0.3 * gross_pay;
        cout<<"\nThe tax paid is Kshs."<<tax<<"\n";

        net_pay = gross_pay - tax;
        cout<<"\nThe net pay is Kshs."<<net_pay;
    }
    else if(gross_pay >= 30000 && gross_pay < 40000)
    {
        tax = 0.25 * gross_pay;
        cout<<"\nThe tax paid is Kshs."<<tax<<"\n";

        net_pay = gross_pay - tax;
        cout<<"\nThe net pay is Kshs."<<net_pay;
    }
    else if(gross_pay >= 20000 && gross_pay < 30000)
    {
        tax = 0.15 * gross_pay;
        cout<<"\nThe tax paid is Kshs."<<tax<<"\n";

        net_pay = gross_pay - tax;
        cout<<"\nThe net pay is Kshs."<<net_pay;
    }
    else if(gross_pay >= 10000 && gross_pay < 20000)
    {
        tax = 0.3 * gross_pay;
        cout<<"\nThe tax paid is Kshs."<<tax<<"\n";

        net_pay = gross_pay - tax;
        cout<<"\nThe net pay is Kshs."<<net_pay;
    }
    else
        cout<<"\nNo tax.";
}
