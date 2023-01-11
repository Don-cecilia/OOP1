#include<iostream>
using namespace std;
int main()
{
    int age;

    cout<<"Enter the age ->";
    cin>>age;

    if(age >= 18)
    cout<<"\nYou can vote"<<"\n\n";

    else
    cout<<"\nYou are too young to vote"<<"\n\n";
}
