#include<iostream>
using namespace std;
int main()
{
    char h;

    cout<<"Enter the letter -> ";
    cin>>h;

    if(h >=  65 && h <= 90)
        cout<<"\n"<<h<<" is in uppercase.";

    else if(h >= 97 && h <= 122)
        cout<<"\n"<<h<<" is in lowercase.";

    else
        cout<<"\n"<<h<<" is not a letter.";

    cout<<"\n\n";
    return 0;
}
