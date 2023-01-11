#include<iostream>
using namespace std;
int main()
{
    double choice, area, perimeter,  leng, wid, rad, base, height, hypotenuse;

    cout<<"****Figures****"<<endl;
    cout<<"1.Rectangle"<<endl;
    cout<<"2.Circle"<<endl;
    cout<<"3.Right-angled triangle"<<endl;

    cout<<"Enter your option -> ";
    cin>>choice;

    if(choice == 1)
    {
        cout<<"Enter length and width ->";
        cin>>leng>>wid;
        area = leng * wid;
        perimeter = 2 * (leng + wid);
        cout<<"The area is "<<area<<endl<<"The perimeter is "<<perimeter;
    }
    else if(choice == 2)
    {
        cout<<"Enter radius ->";
        cin>>rad;
        area = 3.142 * rad * rad;
        perimeter = 2 * 3.142 *rad;
        cout<<"The area is "<<area<<endl<<"The perimeter is "<<perimeter;
    }
    else if(choice == 3)
    {
        cout<<"Enter base, height and hypotenuse ->";
        cin>>base>>height>>hypotenuse;
        area = 0.5 * base * height;
        perimeter = base + height +  hypotenuse;
        cout<<"The area is "<<area<<endl<<"The perimeter is "<<perimeter;
    }
    cout<<"\n";
}

