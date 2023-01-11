#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int yr, rate, principal, bal, interest, n;

    cout<<"Enter the deposit ->";
    cin>>principal;

    cout<<"Enter the rate ->";
    cin>>rate;

    cout<<"Enter the number of times to be compounded ->";
    cin>>n;

    cout<<"\nYear"<<"\tInterest"<<"\tBalance"<<endl;


    for(yr = 1; yr <= 10; yr++)
    {
        bal = principal * (pow ((1 + ((rate / 100) / n)), (n * yr)));
        interest = bal - principal;

        cout<<yr<<"\t"interest<<"\t"bal<<endl;
    }

     bal = principal * (pow ((1 + ((rate / 100) / n)), (n * yr)));
     interest = bal - principal;

    cout<<"\n\nThe compounded interest for 10 years is Kshs."<<interest;
    cout<<"\n\nThe balance in the account after 10 years is Kshs."<<bal;

    cout<<"\n\n";
    return 0;
}
