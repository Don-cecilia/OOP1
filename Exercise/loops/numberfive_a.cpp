#include<iostream>
using namespace std;
int main()
{
    int num;

    num = 1;
    cout<<"The numbers divisible by 8  between 1 and 200 are -:";

    do
    {
        if(num % 8 == 0)
            cout<<"\n"<<num;

        num++;
    }while(num <= 200);

    cout<<"\n\n";
    return 0;
}
