#include<iostream>
using namespace std;
int main()
{
    char letter;

    cout<<"Enter the letter ->";
    cin>>letter;

    if(letter >= 'A' && letter <= 'Z' )
    {
        letter = letter + 32;
        cout<<"\nThe Lowercase alphabet is: "<<letter;
    }
    else if(letter >= 'a' && letter <= 'z')
    {
       letter = letter - 32;
       cout<<"\nThe Uppercase alphabet is: "<<letter;
    }
    else
        cout<<"\nInvalid input.";
    cout<<"\n\n";
    return 0;
}
