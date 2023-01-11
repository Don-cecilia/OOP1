#include<iostream.h>
#include<stdlib.h>
struct Student
{
	char adm_no[15],name[20];
	int age;
	float height;
};
int main()
{
	Student stud1,stud2;
	cout<<"Data entry for student 1:\n"
		<<"--------------------------------------------------------------\n";
	cout<<"Enter the admission number of the student: ";
	cin>>stud1.adm_no;
	cout<<"Enter his/her name: ";
	cin>>stud1.name;
	cout<<"Enter his/her age: ";
	cin>>stud1.age;
	cout<<"Enter his/her height: ";
	cin>>stud1.height;

	cout<<"\n\nData entry for student 2:\n"
		<<"--------------------------------------------\n";
	cout<<"Enter the admission number of the student: ";
	cin>>stud2.adm_no;
	cout<<"Enter his/her name: ";
	cin>>stud2.name;
	cout<<"Enter his/her age: ";
	cin>>stud2.age;
	cout<<"Enter his/her height: ";
	cin>>stud2.height;

	system("cls");
	
	cout<<"Analysis for student 1:"
		<<"\n---------------------------------------"
		<<"\nAdmission Number: "<<stud1.adm_no
		<<"\nName: "<<stud1.name
		<<"\nAge: "<<stud1.age
		<<"\nHeight: "<<stud1.height;
	
	cout<<"\n\nAnalysis for student 2:"
		<<"\n---------------------------------------"
		<<"\nAdmission Number: "<<stud2.adm_no
		<<"\nName: "<<stud2.name
		<<"\nAge: "<<stud2.age
		<<"\nHeight: "<<stud2.height;
	cout<<"\n\n";
	return 0;
}
