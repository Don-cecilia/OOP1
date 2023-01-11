#include<iostream>
using namespace std;
int factorial(int number);
int main()
{
    int num, fact;

    cout<<"Enter a number -> ";
    cin>>num;

    fact = factorial(num);

    cout<<"\nThe factorial of "<<num<<" is "<<fact;

    cout<<"\n\n";
    return 0;
}
int factorial(int number)
{
    int main(), result;
    if(number == 0)
        return 1;
    else
    {
        result = number * factorial (number - 1);
        return result;
    }
}
