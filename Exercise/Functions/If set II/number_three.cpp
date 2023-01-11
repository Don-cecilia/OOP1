#include<iostream>
using namespace std;
double tax_amount(double gross_pay);
int main()
{
    double choice, gross, tax, pay;

    cout<<"1.     Female\n";
    cout<<"2.     Male\n";

    cout<<"Enter the gender -> ";
    cin>>choice;

    cout<<"Enter the salary -> ";
    cin>>gross;

    tax = tax_amount(gross);
    pay = gross - tax;

    cout<<"\nThe tax paid is "<<tax;
    cout<<"\nThe net pay is "<<pay;

    cout<<"\n\n";
    return 0;
}
double tax_amount(double gross_pay)
{
    double tax_amount, choice;
        if(gross_pay >= 15000 && choice == 1)
        {
           tax_amount = 0.14 * gross_pay;
           return tax_amount;
        }
        else if(gross_pay < 15000 && choice == 1)
        {
            tax_amount = 0.12 * gross_pay;
            return tax_amount;
        }

        else if(gross_pay >= 14000 && choice == 2)
        {
            tax_amount = 0.15 * gross_pay;
            return tax_amount;
        }
        else if(gross_pay < 14000 && choice == 2)
        {
            tax_amount = 0.13 * gross_pay;
            return tax_amount;
        }
        else
            return 0;
}
