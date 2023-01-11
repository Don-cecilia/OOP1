#include<iostream>
using namespace std;
  struct Kra
{
    float gross_pay, net_pay, tax;
};
int main()
{
    Kra Person1;

    cout<<"Enter the gross pay -> ";
    cin>>Person1.gross_pay;

    if(Person1.gross_pay >= 40000)
    {
        Person1.tax = 0.3 * Person1.gross_pay;
        cout<<"\nThe tax paid is Kshs."<<Person1.tax<<"\n";

        Person1.net_pay = Person1.gross_pay - Person1.tax;
        cout<<"\nThe net pay is Kshs."<<Person1.net_pay;
    }
    else if(Person1.gross_pay >= 30000 && Person1.gross_pay < 40000)
    {
        Person1.tax = 0.25 * Person1.gross_pay;
        cout<<"\nThe tax paid is Kshs."<<Person1.tax<<"\n";

        Person1.net_pay = Person1.gross_pay - Person1.tax;
        cout<<"\nThe net pay is Kshs."<<Person1.net_pay;
    }
    else if(Person1.gross_pay >= 20000 && Person1.gross_pay < 30000)
    {
        Person1.tax = 0.15 * Person1.gross_pay;
        cout<<"\nThe tax paid is Kshs."<<Person1.tax<<"\n";

        Person1.net_pay = Person1.gross_pay - Person1.tax;
        cout<<"\nThe net pay is Kshs."<<Person1.net_pay;
    }
    else if(Person1.gross_pay >= 10000 && Person1.gross_pay < 20000)
    {
        Person1.tax = 0.3 * Person1.gross_pay;
        cout<<"\nThe tax paid is Kshs."<<Person1.tax<<"\n";

        Person1.net_pay = Person1.gross_pay - Person1.tax;
        cout<<"\nThe net pay is Kshs."<<Person1.net_pay;
    }
    else
        cout<<"\nNo tax.";

    cout<<"\n\n";
    return 0;
}
