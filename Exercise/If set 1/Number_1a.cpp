#include<iostream>
using namespace std;
int main()
{
    int choice, bottles, cost;

    cout<<"****Jamal and Daughters Pub****"<<endl;
    cout<<"Beer Brand        Price"<<endl;
    cout<<"1.Tusker          100/="<<endl;
    cout<<"2.Pilsner         120/="<<endl;
    cout<<"3.Smirnoff Ice    140/="<<endl;
    cout<<"4.White Cap       90/="<<endl;

    cout<<"Enter your option -> ";
    cin>>choice;

    cout<<"How many bottles do you want ?";
    cin>>bottles;

    if(choice == 1)
    {
        cout<<bottles<<" bottles of Tusker will cost you " <<bottles * 100 << "Kshs";
    }
    else if (choice == 2)
    {
       cout<<bottles<<" bottles of Pilsner will cost you " <<bottles * 120 << "Kshs";
    }
    else if(choice == 3)
    {
        cout<<bottles<<" bottles of Smirnoff Ice will cost you " <<bottles * 140 << "Kshs";
    }
    else if (choice == 4)
    {
        cout<<bottles<<" bottles of White Cap will cost you " <<bottles * 90 << "Kshs";
    }
    else
        cout<<"Error message";

    cout<<"\n\n";

    return 0;
}
