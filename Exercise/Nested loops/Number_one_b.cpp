#include<iostream>
using namespace std;
int main()
{
    int i, j;

    i = 1;

    do
    {
        j = 1;
        do
        {
            cout<<"\t"<<j;
            j++;
        }while(j <= i);

        cout<<"\n";

        i++;
    }while(i <= 5);

    cout<<"\n\n";
    return 0;
}
