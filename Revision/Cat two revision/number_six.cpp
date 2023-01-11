#include<iostream>
using namespace std;
  class Salary
{
private:
    float gross_pay, tax_amount, net_pay;
public:
    Salary(float gross, float tax, float pay);
    Salary();//Default constructor
    void compute();
    void output();
};
int main()
{
    Salary Person1(20000, 2000, 18000),Person2;

    /*Person1.input();
    Person1.compute();*/
    cout<<"\nOutput for person1: ";
    Person1.output();

    cout<<"\nOutput for person2: ";
    Person2.output();

    cout<<"\n\n";
    return 0;
}
Salary ::Salary()
{
    gross_pay = 0;
    tax_amount =0;
    net_pay = 0;
}
Salary ::Salary(float gross, float tax, float pay)
{
    gross_pay = gross;
    tax_amount = tax;
    net_pay = pay;
}
void Salary::output()
{
    cout<<"\nThe tax paid is: "<<tax_amount;
    cout<<"\nThe net pay is: "<<net_pay<<"\n";
}
/*void Salary::compute()
{
    if(gross_pay >= 30000)
    {
        tax_amount = 0.15 * gross_pay;
        net_pay = gross_pay - tax_amount;
    }
    else if(gross_pay >= 20000 && gross_pay < 30000)
    {
        tax_amount = 0.12 * gross_pay;
        net_pay = gross_pay - tax_amount;
    }
    else if(gross_pay >= 10000 && gross_pay < 20000)
    {
        tax_amount = 0.1 * gross_pay;
        net_pay = gross_pay - tax_amount;
    }
    else
    {
        tax_amount = 0;
        net_pay = gross_pay;
    }
}*/

