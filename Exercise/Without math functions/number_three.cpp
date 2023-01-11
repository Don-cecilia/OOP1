#include<iostream>
using namespace std;
int main()
{
    float num, t;

   cout<<"Enter the number -> ";
   cin>>num;

   for(t = 2; t <= num / 2; t = t + 0.0001)
   {
       if(t * t >= num)

        {
            cout<<"\nThe square root of "<<num<<" is "<<t;
            break;
        }
   }

   cout<<"\n\n";
   return 0;
}
