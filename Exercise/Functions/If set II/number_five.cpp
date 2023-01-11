#include<iostream>
using namespace std;
int get_merit(int mark_1, int mark_2, int mark_3, int mark_4, int mark_5);
int main()
{
   int mar_1, mar_2, mar_3, mar_4, mar_5, avg;

   cout<<"Enter the marks for five subjects -> ";
   cin>>mar_1>>mar_2>>mar_3>>mar_4>>mar_5;

   avg = get_merit(mar_1, mar_2, mar_3, mar_4, mar_5);

   if(avg >= 75 && avg<= 100)
        cout<<"\nDistinction";

   else if(avg >= 65 && avg< 75)
        cout<<"\nCredit";

   else if(avg >= 50 && avg< 65)
        cout<<"\nPass";

    else if(avg >= 0 && avg< 50)
        cout<<"\nFail";

    else
        cout<<"\nInvalid.";

   cout<<"\n\n";
   return 0;
}
int get_merit(int mark_1, int mark_2, int mark_3, int mark_4, int mark_5)
{
    int average;
    average = (mark_1 + mark_2 + mark_3 + mark_4 + mark_5) / 5;
    return average;
}
