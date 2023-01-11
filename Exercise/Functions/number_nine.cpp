#include<iostream>
using namespace std;
int calculate_total(int number);
int main()
{
    int num, sum = 0;

    for(num = 20; num <= 70; num++)
        sum = sum + num;

        cout<<"The sum of numbers between 20 and 70 is : "<<sum;
        cout<<"\n";
        return 0;
}
int calculate_total(int number)
{
    int total;
    total = total + number;
    return total;
}
