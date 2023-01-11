#include <iostream>
#include <string>
using namespace std;
 class Supermarket
{
private:
    int itemCode, quantity;
    float price, totalCost, discount, net;
public:
    Supermarket();
    Supermarket(int code, float fPrice, int qty);
    ~Supermarket();
    void calcTotalCost();
    void setDiscount();
    void setNet();

    void printSupermarketDetails();
    float getTotalCost();
    float getNet();
    void deleteSupermarket();
};
int main()
{
    Supermarket items;

    int Items;
    float gTotalAmount = 0, gNetAmount = 0;

    //take input
    cout << "---------Supermarket Supermarket Checker-----------\n";
    cout << "Enter number of items-> ";
    cin>>Items;

    for(int i=0; i<Items; i++)
    {
        int code;
        float fPrice;
        int qty;

        cout<<"Enter Supermarket Code : ";
        cin>>code;

        cout<<"Enter Price : ";
        cin>>fPrice;

        cout << "Enter Quantity : ";
        cin >> qty;

        Supermarket Supermarket(code, fPrice, qty);
        items = Supermarket;
    }

    //call functions for each object
    for(int i = 0; i < Items; i++)
    {
        items.calcTotalCost();
        items.setDiscount();
        items.setNet();
        gTotalAmount += items.getTotalCost();
        gNetAmount += items.getNet();
    }

    //print output

    for(int i = 0; i < Items; i++)
    {
        items.printSupermarketDetails();
    }
    cout << "\nItem Code\tPrice\tQuantity\tTotal Cost\tDiscount\tNet\n";

    cout << "\nThe total amount payable is "<<gNetAmount<<"\n";

    cout<<"\n\n";
    return 0;
}
Supermarket::Supermarket()//Default Constructor
{
    itemCode = 0;
    price = 0;
    quantity = 0;
    totalCost = 0;
    discount = 0;
    net = 0;
}
Supermarket::Supermarket(int code, float fPrice, int qty)//Parametarized Constructor
{
    itemCode = code;
    price = fPrice;
    quantity = qty;
    totalCost = 0;
    discount = 0;
    net = 0;
}
Supermarket::~Supermarket()//Destructor
{
    cout<<"\nSupermarket deleted.";
}
void Supermarket::calcTotalCost()//function to calculate total cost
{
    totalCost = price * quantity;
}
void Supermarket::setDiscount()//function to apply discounts
{
    if(totalCost > 20000)
        discount = totalCost * 0.14;

    else if(totalCost > 10000 && totalCost <= 20000)
        discount = totalCost * 0.1;

    else
        discount = 0;
}
void Supermarket::setNet()//function to calculate net amount
{
    net = totalCost - discount;
}
void Supermarket::printSupermarketDetails()//function to print details of an Supermarket
{
    cout<<"Item Code    " << itemCode << "\t\t";
    cout<<"Price         " << price << "\t\t";
    cout<<"Quantity      " << quantity << "\t\t";
    cout<<"Total Cost    " << totalCost <<  "\t\t";
    cout<<"Discount      " << discount <<  "\t\t";
    cout<<"Net           " << net << endl;
}
float Supermarket::getTotalCost()//function to get total cost
{
    return totalCost;
}
float Supermarket::getNet()//function to get net cost
{
    return net;
}
