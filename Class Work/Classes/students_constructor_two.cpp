/*This code describes overloading*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
private:
	char adm_no[20],name[50];
	int no_of_units;
	double fee_paid, fee_balance;
public:
    //overloading
    ~Student();
    Student(char adm[20], char jina[50], int units, double fee);/*Two constructors with the same name but different parameters*/
    Student(int units, double fee);
    Student();
    void get_data();
    void compute();
    void show_data();
    double get_fee();//Accessor function
};
const double FEE_PAYABLE = 90000;
int main()
{
	Student stud1, stud2("SCT221-0442/2021", "Jane", 7, 80000), stud3(8, 40000), stud4;//To be revisited

	cout<<"Data entry for student1:"
		<<"\n------------------------------------------------------------";
	stud1.get_data();
	stud1.compute();
	cout<<"\n\nAnalysis for the student1:"
		<<"\n------------------------------------------------------------";
    stud1.show_data();
    cout<<"\nThe fee paid for student1 is Kshs.:"<<stud1.get_fee();

	/*cout<<"\nData entry for student2:";
	stud2.get_data();*/
	stud2.compute();
	cout<<"\n\nAnalysis for the student2:"
		<<"\n------------------------------------------------------------";
    stud2.show_data();
    cout<<"\nThe fee paid for student2 is Kshs.:"<<stud2.get_fee();

    /*cout<<"\nData entry for student3:";
	stud3.get_data();*/
	stud3.compute();
	cout<<"\n\nAnalysis for the student3:"
		<<"\n------------------------------------------------------------";
    stud3.show_data();
    cout<<"\nThe fee paid for student3 is Kshs.:"<<stud3.get_fee();

    /*cout<<"\nData entry for student4:";
	stud4.get_data();*/
	stud4.compute();
	cout<<"\n\nAnalysis for student4:"
		<<"\n------------------------------------------------------------";
    stud4.show_data();
    cout<<"\nThe fee paid for student4 is Kshs.:"<<stud4.get_fee();

	cout<<"\n\n";
	return 0;
}
Student::~Student()//deconstructor
{
    cout<<"\nNothing to see here.\n";
}
Student::Student()//default constructor
{
    strcpy(adm_no, "SCt221-0095/2021");
    strcpy(name, "Mohammed");
    no_of_units = 8;
    fee_paid = 0;
}
Student::Student(char adm[20], char jina[50], int units, double fee)//constructor
{
    strcpy(adm_no, adm);
    strcpy(name, jina);
    no_of_units = units;
    fee_paid = fee;
}
Student::Student(int units, double fee)
{
    no_of_units = units;
    fee_paid = fee;
}
void Student::get_data()
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
void Student::compute()
{
   fee_balance = FEE_PAYABLE - fee_paid;
}
void Student::show_data()
{
    cout<<"\nAdmission Number: "<<adm_no
		<<"\nName: "<<name
		<<"\nNumber of units: "<<no_of_units
		<<"\nFee Paid: "<<fee_paid
		<<"\nFee Balance: "<<fee_balance;
}
double Student::get_fee()
{
    return fee_paid;
}
