#include<iostream>
using namespace std;
int main()
{
    char g[50];
    int letter, digit, spc, space, i = 1;

    cout<<"Enter the character -> ";
    cin>>g;

    while(g[i] != 0)
    {
        if(g[i] >= 'a' && g[i] <=  'z' || g[i] >= 'A' && g[i] <= 'Z')
            letter++;

        else if(g[i] >= '0' && g[i] <= '9')
            digit++;

        else if(g[i] >= ' ')
            space++;

        else
            spc++;
        i++;
    }

}
