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

    switch(choice)
    {
    case 1:cout<<bottles<<" bottles of Tusker will cost you " <<bottles * 100 << "Kshs";
        break;
    case 2:cout<<bottles<<" bottles of Pilsner will cost you " <<bottles * 120 << "Kshs";
        break;
    case 3:cout<<bottles<<" bottles of Smirnoff Ice will cost you " <<bottles * 140 << "Kshs";
        break;
    case 4:cout<<bottles<<" bottles of White Cap will cost you " <<bottles * 90 << "Kshs";
        break;
    default:cout<<"Invalid choice";
    }
    cout<<"\n\n";
    return 0;
}
