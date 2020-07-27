#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Name,Sername;
	int Salary, Sale, Commis;
	cout << "**** Homework 2 **********\n";
	cout << "Enter Name   : ";
	cin >> Name >> Sername;
	cout << "Enter Salary : ";
	cin >> Salary;
	cout << "Enter Sale   : ";
	cin >> Sale;
	cout << "Enter Commision Percent : ";
	cin >> Commis;
	cout << endl;
	cout << "-----------output-----------\n";
	cout << "Your Name = " << Name << " " << Sername << endl;
	cout << "Total Revenue " << (Commis * Sale) / 100 + Salary<<endl;
	cout << "----------------------------\n";
	return 0;
}