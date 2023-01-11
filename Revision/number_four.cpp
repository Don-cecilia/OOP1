#include<iostream>
using namespace std;
int main()
{
    int choice;

    cout<<"Category     Name";
    cout<<"\n1.G        Gold Member";
    cout<<"\n2.S        Silver Member";
    cout<<"\n3.B        Bronze Member";
    cout<<"\n4.X        Ordinary Member";

    cout<<"\nEnter your choice -> ";
    cin>>choice;

    switch(choice)
    {
        case 1:cout<<"\nGold Member.";
            break;
        case 2:cout<<"\nSilver Member.";
            break;
        case 3:cout<<"\nBronze Member.";
            break;
        case 4:cout<<"\nOrdinary Member";
            break;
        default:cout<<"\nInvalid choice.";
    }
    cout<<"\n\n";
    return 0;
}
