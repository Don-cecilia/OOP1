#include<iostream>
using namespace std;
int main()
{
    int salary, tax, net_salary;

    cout<<"Enter the salary -> ";
    cin>>salary;


    if(salary >= 20000)
    {
        tax = 0.15 * salary;
        net_salary = salary - tax;

        cout<<"\nThe tax paid is "<<tax<<endl<<"The net salary is"<<net_salary;
    }
    else if(salary >= 10000 && salary  < 20000)
    {
        tax = 0.1 * salary;
        net_salary = salary - tax;

        cout<<"\nThe tax paid is "<<tax<<endl<<"The net salary is "<<net_salary;
    }
    else
        cout<<"Not taxed";

    cout<<"\n\n";
    return 0;
}
