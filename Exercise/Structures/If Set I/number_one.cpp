#include<iostream>
#include<conio.h>
using namespace std;
struct Menu
{
    int option, bottles, cost;
};
int main()
{
 struct Menu customer_1;

     cout<<"*****Jamal wine and spirits*****";
     cout<<"\nType               Price/n";
     cout<<"\n1.Tusker             100\n";
     cout<<"\n2.Pilsner            120\n";
     cout<<"\n3.Smirnoff ice       140\n";
     cout<<"\n4.White cap          90\n";

     cout<<"\nEnter your choice -> ";
     cin>>customer_1.option;

     if(customer_1.option == 1)
     {
         cout<<"\nHow many bottles of Tusker do you want -> ";
         cin>>customer_1.bottles;
         customer_1.cost = customer_1.bottles * 100;
         cout<<"\nThe cost of "<<customer_1.bottles<<" bottles of Tusker is Ksh. "<<customer_1.cost;
     }
     else if(customer_1.option == 2)
     {
        cout<<"\nHow many bottles of Pilsner do you want? -> ";
        cin>>customer_1.bottles;
        customer_1.cost = customer_1.bottles * 120;
        cout<<"\nThe cost of "<<customer_1.bottles<<" bottles of Pilsner is Ksh. "<<customer_1.cost;
     }
     else if(customer_1.option == 3)
     {
        cout<<"\nHow many bottles of Smirnoff ice do you want -> ";
        cin>>customer_1.bottles;
        customer_1.cost = customer_1.bottles * 140;
        cout<<"\nThe cost of "<<customer_1.bottles<<" bottles of Smirnoff ice is Ksh."<<customer_1.cost;
     }
     else if(customer_1.option == 4)
     {
        cout<<"\nHow many bottles of white cap do you want -> ";
        cin>>customer_1.bottles;
        customer_1.cost =  customer_1.bottles * 90;
        cout<<"\nThe cost of "<<customer_1.bottles<<" bottles White cap is Ksh."<<customer_1.cost;
     }
     else
     {
         cout<<"\nInvalid choice.";
     }

     cout<<"\n\n";
     return 0;
}
