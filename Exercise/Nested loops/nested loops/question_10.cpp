#include <iostream>
using namespace std;

int main(){

    int i,j;

    for( i = 0; i <= 50; i = i +10){
        if(i == 0){
            cout<<"+";
        }
        else{
            cout<<i;
        }
         for(j = 1; j <= 7; j++)
        {
            if(i * j == 0 )
            {
                cout<<"\t"<<j;
            }
            else if (i * j <= 350)
            {
                cout<<"\t"<<i * j;
            }

        }
       cout<<"\n";
    }
}