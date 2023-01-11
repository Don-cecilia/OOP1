#include<iostream>
#include<conio.h>
using namespace std;
  class Menu
{
private:
    int option, bottles, cost;
public:
    void get_choice();
    void get_computations();
};
int main()
{
 struct Menu customer_1;

     cout<<"***Jamal wine and spirits***";
     cout<<"\nType               Price/n";
     cout<<"\n1.Tusker             100\n";
     cout<<"\n2.Pilsner            120\n";
     cout<<"\n3.Smirnoff ice       140\n";
     cout<<"\n4.White cap          90\n";

     customer_1.get_choice();
     customer_1.get_computations();

     cout<<"\n\n";
     return 0;
}
void Menu::get_choice()
{
    cout<<"\nEnter your choice -> ";
    cin>>option;
}
void Menu::get_computations()
{
    if(option == 1)
     {
         cout<<"\nHow many bottles of Tusker do you want -> ";
         cin>>bottles;
         cost = bottles * 100;
         cout<<"\nThe cost of "<<bottles<<" bottles of Tusker is Ksh. "<<cost;
     }
     else if(option == 2)
     {
        cout<<"\nHow many bottles of Pilsner do you want? -> ";
        cin>>bottles;
        cost = bottles * 120;
        cout<<"\nThe cost of "<<bottles<<" bottles of Pilsner is Ksh. "<<cost;
     }
     else if(option == 3)
     {
        cout<<"\nHow many bottles of Smirnoff ice do you want -> ";
        cin>>bottles;
        cost = bottles * 140;
        cout<<"\nThe cost of "<<bottles<<" bottles of Smirnoff ice is Ksh."<<cost;
     }
     else if(option == 4)
     {
        cout<<"\nHow many bottles of white cap do you want -> ";
        cin>>bottles;
        cost =  bottles * 90;
        cout<<"\nThe cost of "<<bottles<<" bottles White cap is Ksh."<<cost;
     }
     else
        cout<<"\nInvalid choice.";
}


