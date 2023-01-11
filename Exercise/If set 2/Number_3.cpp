#include<iostream>
using namespace std;
int main()
{
    int choice, salary, tax;

    cout<<"****Gender****"<<endl;
    cout<<"1.Male"<<endl;
    cout<<"2.Female"<<endl;

    cout<<"Enter the gender -> ";
    cin>>choice;

    if(choice == 1)
    {
        cout<<"Enter the salary -> ";
        cin>>salary;
        if(salary >= 14000)
        {
            tax = 0.15 * salary;
            cout<<"\nThe tax paid is"<<tax;
        }
        else
        {
            tax = 0.13 * salary;
            cout<<"\nThe tax paid is"<<tax;
        }
    }
    else if(choice == 2)
    {
        cout<<"Enter the salary -> ";
        cin>>salary;

        if(salary >=15000)
        {
            tax = 0.14 * salary;
            cout<<"The tax paid is "<<tax;
        }
        else
        {
          tax = 0.12 * salary;
          cout<<"The tax paid is "<<tax;
        }
    }
    cout<<"\n\n";
    return 0;
}
