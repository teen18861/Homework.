#include<iostream>
using namespace std ;
void display(int a[],int num);
int cal_bonus(int salary);
int main()
{
	int person ;
	cout << "Enter Number of person : ";
	cin >> person ;
	cout<<endl;
	int *salary = new int [person];
	for (int i = 0;i<person;i++)
	{
		cout << "Enter the salary "<<i+1<<" : ";
		cin >> salary[i];
		cout << endl;
	}
	display(salary,person);
	return 0 ;
}
void display(int a[],int num)
{
	cout << "\n==============================================\n";
	cout << "Threre are "<<num<<" person."<<endl;
	for (int i = 0 ; i < num ; i++){
		int B = cal_bonus(a[i]);
	cout << "The salary for person "<<i+1<<" = "<<a[i]<<" and Bonus = "<<B<<endl;
	}
	cout<< "================================================"<<endl;

}
int cal_bonus(int salary)
{
	return salary*2;
}