#include<iostream>
using namespace std;
class Quickmart
{
private:
      int code;
      double price;
      int quantity;
public:
      Quickmart();//default constructor
      Quickmart(int, double, int);//parameterized constructor
      ~Quickmart();//destructor
      int getCode();
      double getPrice();
      int getQuantity();
      void setCode(int);
      void setPrice(double);
      void setQuantity(int);
      double totalCost();
      double discount();
      double net();
};
int main()
{
    Quickmart Item;

    int cod, qty, n, i;
    double pri;

    cout<<"Enter number of items you wish to work with -> ";
    cin>>n;
    Item ;new Quickmart[n];

    for(i = 0; i < n; i++)
    {
      cout<< "Enter code -> ";
      cin>> cod;

      cout << "Enter price -> ";
      cin >> pri;

      cout << "Enter quantity -> ";
      cin >> qty;

      Item.setCode(cod);
      Item.setPrice(pri);
      Item.setQuantity(qty);
    }

    cout<<"Item Code\t"<<"Price\t" <<"Quantity\t"<<"Total Cost\t" <<"Discount\t"<<"Net"<<"\n";

    double totalAmount = 0;
    for(int i = 0; i < n; i++)
    {
        cout<<Item.getCode()<<"\t\t"<<Item.getPrice()<<"\t"<<Item.getQuantity()<<"\t\t"<<Item.totalCost()<<"\t\t"<<Item.discount()<<"\t\t"<<Item.net()<<"\n\n";
        totalAmount += Item.net();
    }

    cout<<"The total amount payable is -> "<<totalAmount<<"\n";

    cout<<"\n\n";
    return 0;
}
Quickmart::Quickmart()//Default Constructor
{
   code = 0;
   price = 0.0;
   quantity = 0;
}
Quickmart::Quickmart(int c, double p, int q)// Parameterized Constructor
{
   code = c;
   price = p;
   quantity = q;
}
Quickmart::~Quickmart()//Destructor
{
   cout<<"Thank you for shopping with us.";
}
int Quickmart::getCode()
{
   return code;
}
double Quickmart::getPrice()
{
   return price;
}
int Quickmart::getQuantity()
{
   return quantity;
}
void Quickmart::setCode(int c)
{
   code = c;
}
void Quickmart::setPrice(double p)
{
   price = p;
}
void Quickmart::setQuantity(int q)
{
   quantity = q;
}
double Quickmart::totalCost()
{
    return (price * quantity);
}
double Quickmart::discount()
{
    double disc;
    double totalCost = price * quantity;

    if(totalCost >20000)
    {
      disc = totalCost * 0.14;
    }
    else if(totalCost >= 10000 && totalCost <= 20000)
    {
      disc = totalCost * 0.1;
    }
    else
    {
      disc = 0;
    }
    return disc;
}
double Quickmart::net()
{
    return (totalCost() - discount());
}
