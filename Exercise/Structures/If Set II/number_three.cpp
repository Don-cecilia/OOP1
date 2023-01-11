#include<iostream>
using namespace std;
  struct TAX
{
    float earnings, gender, choice, tax, salary;
};
int main()
{
    struct TAX payer1;

    cout<<"\nChoice                    Gender\n";
    cout<<"\n1.                         Female\n";
    cout<<"\n2.                         Male\n   ";

    cout<<"\nEnter your gender -> ";
    cin>>payer1.choice;

    cout<<"\nEnter your income -> ";
    cin>>payer1.earnings;

    if(payer1.choice == 1 && payer1.earnings >= 15000)
    {
        payer1.tax = (payer1.earnings * 0.14);
    }

    if(payer1.choice == 1 && payer1.earnings <15000)
    {
        payer1.tax = payer1.earnings * 0.12;

    }
     else if (payer1.choice == 2 && payer1.earnings >=14000)
    {
        payer1.tax = (payer1.earnings * 0.15);

    }
    else if (payer1.choice == 2 && payer1.earnings < 14000)
    {
       payer1.tax = payer1.earnings * 0.13;
    }
    cout<<"\nThe tax payable is "<<payer1.tax;
    cout<<"\n\n";

    return 0;
}
