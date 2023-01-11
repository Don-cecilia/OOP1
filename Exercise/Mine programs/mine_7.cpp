#include<iostream>
using namespace std;
int main()
{
    int original_number,  reversed_number, remainder;

    cout<<"Enter the number -> ";
    cin>>original_number;

    reversed_number = 0;
    do{
        remainder = original_number % 10;
        reversed_number =  reversed_number * 10 + remainder;
        original_number = original_number / 10;
    }while(original_number != 0);

    cout<<"\nThe reverse of the number is "<<reversed_number<<endl;

	cout<<"\n\n";
	return 0;
}

