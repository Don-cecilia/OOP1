#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, sum = 0, sqr;

    for(num = 1; num <= 15; num++)
    {
       sqr = num * num;
       sum = sum + sqr;
    }
    cout<<"The sum of the squares of the first 15 integers is "<<sum;
    cout<<"\n\n";

    return 0;
}
