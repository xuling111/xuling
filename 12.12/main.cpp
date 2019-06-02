#include<iostream>
#include<iomanip>
#include<vector>
#include"Employee"
#include"SalriedEmployee.h"
#include"CommissionEmployee.h"
#include"BasePlusCommissonEmployee.h"
using namespace std;
void virtualViaPointer(const Employee*const);
void virtualViaReference(constEmployee&);
int main()
{
    cout<<fixed<<setprecision(2);
    SalariedEmployee salariedEmployee(
        "John","Smith","111-11-1111",800,);
        CommissonEmployee CommissonEmployee(
                "Sue","Jone","333-33-3333",10000,.06);
                BasePlusCommissionEmployee basePlusCommissionEmployee(
                "Bob","Lewis","444-44-4444",5000,.04,300);
                cout<<"Employee processed individually using static binding :\n\n";
                salariedEmployee.print();
                cout<<"earned$"<<salariedEmployee.earnings()<<"\n\n";
                commissionEmployee.print()
                cout<<"\nearned $"<<commissonEmployee.earnings()<<"\n\n";
                baseCommissionEmployee.print();
                cout<<"\nearned $"<<baseCommissionEmployee.earnings()
                <<"\n\n";
                vector<Employee>employees(3);
                employees[0]=&salariedEmployee;
                employees[1]=&commissionEmployee;
                employees[2]&basePlusCommissionEmployee;
                cout<<"Employees processed polymorphially via dynamic binding:\n\n";
                void virtualViaReference(const Employee &baseEmployee)
                {
                    baseClassRef.print();
                    cout,<"earned$"<<baseClassRef,print()<<"\n\n";
                }
}
