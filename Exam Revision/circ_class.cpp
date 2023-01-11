#include<iostream>
using namespace std;
    class Circle
{
private:
    int radius;
    double area, circumfrence;
public:
    void input(), compute(), output();
};
int main()
{
    Circle circ;

    circ.input();
    circ.compute();

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    circ.output();

    cout<<"\n\n";
    return 0;
}
void Circle::input()
{
    cout<<"Enter the radius of the circle -> ";
    cin>>radius;
}
void Circle::compute()
{
    area = 3.142 * radius * radius;
    circumfrence = 2 * 3.142 * radius;
}
void Circle::output()
{
    cout<<"\nThe area of the circle is: "<<area
        <<"\nThe perimeter of the circle is: "<<circumfrence;
}
