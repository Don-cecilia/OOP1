#include<iostream>
using namespace std;
int main()
{
    char letter;

    cout<<"Enter the character -> ";
    cin>>letter;

    if(islower(letter))
    {
        letter = toupper(letter);
        cout<<"\nThe uppercase of the alphabet is: "<<letter;
    }
    else if(isupper(letter))
    {
        letter = tolower(letter);
        cout<<"\nThe lowercase of the alphabet is: "<<letter;
    }
    else
        cout<<"\nInvalid input.";

    cout<<"\n\n";
    return 0;
}
