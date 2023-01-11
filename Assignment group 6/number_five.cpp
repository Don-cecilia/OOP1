#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
    int items, i, code[50], qty[50], price[50], total_cost[50];
    int  discount[50], net[50], total_amount = 0;

    cout<<"Enter the number of items -> ";
    cin>>items;

    for(i = 1; i <= items; i++)
    {
        cout<<"Enter Item Code -> ";
        cin>>code[i];
        cout<<"Enter Price -> ";
        cin>>price[i];
        cout<<"Enter Quantity -> ";
        cin>>qty[i];

        total_cost[i] = price[i] * qty[i];
        net[i] = total_cost[i] - net[i];

        if(total_cost[i] > 20000)
        {
            discount[i] = total_cost[i] * 0.14;
            net[i] = total_cost[i] - discount[i];
        }
        else if(total_cost[i] >= 10000 && total_cost[i] <= 20000)
        {
            discount[i] = total_cost[i] * 0.1;
            net[i] = total_cost[i] - discount[i];
        }
        else
            discount[i] = 0;

        total_amount = total_amount + net[i];
    }
    cout<<"\n"<<"Item Code\t"<<"Price\t"<<"Quantity\t"<<"Total Cost\t"<<"Discount\t"<<"Net\n";

    for (int i = 0; i < items; i++)
    {
        cout<<code<<"\t"<<price[i]<<"\t"<<qty[i]<<"\t"<<total_cost[i]<<"\t"<<discount[i]<<"\t"<<net[i]<<"\n";
    }

    cout<<"\nThe total amount payable is "<<total_amount;

    cout<<"\n\n";
    return 0;
}
