#include<iostream>
#include<cstring>
using namespace std;
class Student
{
private:
	char adm_no[20],name[50];
	int no_of_units;
	double fee_paid, fee_balance, FEE_PAYABLE = 90000;
public:
Student()//default constructor
{
    strcpy(adm_no, "Sct221-0095/2021");
    strcpy(name, "Cecilia");
    no_of_units = 8;
    fee_paid =0;
}
Student(int units, double fee)
{
    no_of_units = units;
    fee_paid = fee;
}
void get_data()
{
    cout<<"\nEnter the admission number of the student: ";
	cin>>adm_no;
	fflush(stdin);
	cout<<"Enter his/her name: ";
	gets(name);
	cout<<"Enter the number of units he/she is doing: ";
	cin>>no_of_units;
	cout<<"Enter the fee he/she has paid: ";
	cin>>fee_paid;
}
void compute()
{
   fee_balance = FEE_PAYABLE - fee_paid;
}
void show_data()
{
    cout<<"\nAdmission Number: "<<adm_no
		<<"\nName: "<<name
		<<"\nNumber of units: "<<no_of_units
		<<"\nFee Paid: "<<fee_paid
		<<"\nFee Balance: "<<fee_balance;
}
};
const double FEE_PAYABLE = 90000;
int main()
{
	Student stud1(7, 80000), stud2, stud3;//To be revisited

	/*cout<<"Data entry for the student:"
		<<"\n------------------------------------------------------------";
	stud1.get_data();*/
	stud1.compute();
	cout<<"\n\nAnalysis for the student:"
		<<"\n------------------------------------------------------------";
    stud1.show_data();

    /*cout<<"Data entry for the student:"
		<<"\n------------------------------------------------------------";
	stud2.get_data();*/
	stud2.compute();
	cout<<"\n\nAnalysis for the student:"
		<<"\n------------------------------------------------------------";
    stud2.show_data();

    cout<<"\nData entry for the student:"
		<<"\n------------------------------------------------------------";
	stud3.get_data();
	stud3.compute();
	cout<<"\n\nAnalysis for the student:"
		<<"\n------------------------------------------------------------";
    stud3.show_data();

	cout<<"\n\n";
	return 0;
}

