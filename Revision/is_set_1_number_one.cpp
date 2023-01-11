#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Beer
{
private:
	int bottles;
	double cost;
	char beer_name[30];
public:
	void input(char beer_jina[30]);
	void compute(int the_choice);
	void output(char beer_jina[30]);
};
int main ()
{
	Beer br;
	int the_choice;

begin:
	cout<<"\n ** Jamal and Daughters Pub **\n";
	cout<<"\n Beer Brand		Price";
	cout<<"\n ----------------------------";
	cout<<"\n1. Tusker		100/=";
	cout<<"\n2. Pilsner		120/=";
	cout<<"\n3. Smirnoff Ice		140/=";
	cout<<"\n4. White Cap		90/=";

	cout<<"\n\nEnter your choice: ";
	cin>>the_choice;

	if(the_choice == 1)
	{
		br.input("Tusker");
		br.compute(the_choice);
		br.output("Tusker");
	}
	else if(the_choice == 2)
	{
		br.input("Pilsner");
		br.compute(the_choice);
		br.output("Pilsner");
	}
	else if(the_choice == 3)
	{
		br.input("Smirnoff Ice");
		br.compute(the_choice);
		br.output("Smirnoff Ice");
	}
	else if(the_choice == 4)
	{
		br.input("White cap");
		br.compute(the_choice);
		br.output("White cap");
	}
	else
	{
		cout<<"\n\a\a\a\a\a\a"<<the_choice<<" is an invalid choice!!!\n";
		cout<<"\nPress any key to continue...";
		getch();
		system("cls");
		goto begin;
	}

	char response;
	cout<<"\nEnter (y) to continue and (x) to exit.";
	cin>>response;
	if(response == 'y' || response == 'Y')
	{
		system("cls");
		goto begin;
	}
	else
	{
		system("cls");
		cout<<"\n**THANK YOU FOR CHOOSING JAMAL'S PUB.**";
	}


	return 0;
}
void Beer::input(char beer_jina[30])
{
	cout<<"\nHow many bottles of "<<beer_jina<<" do you want: ";
	cin>>bottles;
}
void Beer::compute(int choice)
{
	if(choice == 1)
	{
		cost = bottles * 100;
	}
	else if(choice == 2)
	{
		cost = bottles * 120;
	}
	else if(choice == 3)
	{
		cost = bottles * 140;
	}
	else if(choice == 4)
	{
		cost = bottles * 90;
	}

}
void Beer::output(char beer_jina[30])
{
	cout<<"\n"<<bottles<<" bottles of "<<beer_jina<<" will cost you "<<cost<<"\n";
}
