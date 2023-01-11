#include<iostream>
using namespace std;
int main()
{
    char k;

    cout<<"Enter the character -> ";
    cin>>k;

    if(k >= 'a' && k <= 'z' || k >= 'A' && k <= 'Z')
        cout<<"\nThe character "<<k<<" is a letter";

    else if(k >= '0'&& k <= '9')
        cout<<"\nThe character "<<k<<" is a digit";
    else
        cout<<"\nThe character "<<k<<" is a special character";

    cout<<"\n\n";
    return 0;
}
