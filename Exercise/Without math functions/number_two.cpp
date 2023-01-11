#include<iostream>
using namespace std;
int main()
{
   int num, t;

   cout<<"Enter the number ->";
   cin>>num;

   for(t=1; t <= num / 2; t++)
      if(num == t * t)
      {
        cout<<"\nThe square root of "<<num<<" is "<<t;
        goto ending;
      }

        cout<<"\nThe square root of "<<num<<" is not a whole number";
        ending:

   cout<<"\n\n";
   return 0;
}
