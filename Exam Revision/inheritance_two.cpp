#include<iostream>
using namespace std;
    class Employees
{
protected:
    double salary, transport_all, house_all, net_sal;
public:
    void emp_input(), output(), get_net();
};

    class Manager:public Employees
{
private:
    double entertainment_all, responsibility_all;
public:
    void m_input(), m_output(), m_net();
};
int main()
{
    Employees emp;
    Manager man;

    cout<<"****Employee Details****";
    emp.emp_input();
    cout<<"\n****Manager Details****";
    man.m_input();

    cout<<"\n****Employee Analysis****";
    emp.output();
    emp.get_net();

    cout<<"\n****Manager Analysis****";
    man.m_output();
    man.m_net();

    cout<<"\n\n";
    return 0;
}
void Employees::emp_input()
{
    cout<<"\nEnter the basic salary of the employee -> ";
    cin>>salary;
    cout<<"\nEnter the transport allowance of the employee -> ";
    cin>>transport_all;
    cout<<"\nEnter the house allowance of the employee -> ";
    cin>>house_all;
    net_sal = salary + transport_all + house_all;
}
void Employees::output()
{
    cout<<"\nThe basic salary of the employee is Kshs.: "<<salary;
    cout<<"\nThe transport allowance of the employee is Ksh.: "<<transport_all;
    cout<<"\nThe house allowance of the employee isKshs.: "<<house_all;
}
void Employees::get_net()
{
    cout<<"\n\nThe net salary of the employee is Kshs.: "<<net_sal;
    cout<<"\n\n";
}
void Manager::m_input()
{
    emp_input();
    cout<<"\nEnter the entertainment allowance for the manager -> ";
    cin>>entertainment_all;

    cout<<"\nEnter the responsibility allowance for the manager -> ";
    cin>>responsibility_all;

    net_sal = net_sal + transport_all + house_all;
}
void  Manager::m_output()
{
    output();
    cout<<"\nThe entertainment allowance is Kshs.: "<<entertainment_all
        <<"\nThe responsibility allowance is Kshs.: "<<responsibility_all;
}
void Manager::m_net()
{
    cout<<"\n\nThe net salary of the salary is Kshs.: "<<net_sal;
}
