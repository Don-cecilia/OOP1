#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int num, sum = 0, sqr;

    num = 1;

    while(num <= 15)
    {
        sqr = num * num;
       sum = sum + sqr;
       num++;
    }
    cout<<"The sum of the squares of the first 15 integers is "<<sum;
    cout<<"\n\n";

    return 0;
}

