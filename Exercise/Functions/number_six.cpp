#include<iostream>
using namespace std;
double calc_volume(double length, double width, double breadth);
int main()
{
    double leng, hei, brea, vol;

    cout<<"Enter the length, height and breadth of the cube -> ";
    cin>>leng>>hei>>brea;

    vol = calc_volume(leng, hei, brea);

    cout<<"Volume"<<"\tLength"<<"\tHeight"<<"\tBreadth";
    cout<<"\n"<<vol<<"\t = " <<leng<<"\t * "<<hei<<"\t * "<<brea<<endl;

}
double calc_volume(double length, double height, double breadth)
{
    double volume;
    volume = length * height * breadth ;
    return volume;
}
