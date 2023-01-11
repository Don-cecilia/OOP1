#include<iostream>
using namespace std;
int main()
{
    char letter;

    cout<<"Enter the category -> ";
    cin>>letter;

    switch(letter)
    {
        case 'G':cout<<"\nGold Member.";
            break;
        case 'S':cout<<"\nSilver Member.";
            break;
        case 'B':cout<<"\nBronze Member.";
            break;
        case 'X':cout<<"\nOrdinary Member.";
            break;
        default:cout<<"\nInvalid choice.";
    }
    cout<<"\n\n";
    return 0;
}
