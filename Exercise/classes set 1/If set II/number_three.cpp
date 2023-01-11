#include<iostream>
using namespace std;
  class TAX
{
private:
    float earnings, gender, choice, tax, salary;
public:
    void get_input();
    void get_output();
};
int main()
{
    struct TAX payer1;

    cout<<"\nChoice                    Gender\n";
    cout<<"\n1.                         Female\n";
    cout<<"\n2.                         Male\n   ";

    payer1.get_input();
    payer1.get_output();

    cout<<"\n\n";
    return 0;
}
void TAX::get_input()
{
    cout<<"\nEnter your gender -> ";
    cin>>choice;

    cout<<"\nEnter your income -> ";
    cin>>earnings;
}
void TAX::get_output()
{
    if(choice == 1 && earnings >= 15000)
    {
        tax = (earnings * 0.14);
    }

    else if(choice == 1 && earnings <15000)
    {
        tax = earnings * 0.12;

    }
     else if (choice == 2 && earnings >=14000)
    {
        tax = (earnings * 0.15);

    }
    else if (choice == 2 && earnings < 14000)
    {
       tax = earnings * 0.13;
    }
    cout<<"\nThe tax payable is "<<tax;
}
