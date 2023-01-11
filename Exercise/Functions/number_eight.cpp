#include<iostream>
using namespace std;
float calc_tax(float gross_pay);
int main()
{
    float gross, tax, pay;

    cout<<"Enter the gross pay -> ";
    cin>>gross;

    tax = calc_tax(gross);
    pay = gross - tax;

    cout<<"\nThe tax is "<<tax;
    cout<<"\nThe net pay is "<<pay;

    cout<<"\n\n";
}
float calc_tax(float gross_pay)

{
    float tax_amount;

    if(gross_pay >= 50000)
    {
        tax_amount = 0.35 * gross_pay;
       return tax_amount;
    }
    else if(gross_pay >= 40000 && gross_pay < 50000)
    {
        tax_amount = 0.3 * gross_pay;
        return tax_amount;
    }
    else if(gross_pay >=20000 && gross_pay < 40000)
    {
        tax_amount = 0.25 * gross_pay;
        return tax_amount;
    }
    else if(gross_pay >= 12000 && gross_pay < 20000)
    {
        tax_amount = 0.15 * gross_pay;
        return tax_amount;
    }
}
