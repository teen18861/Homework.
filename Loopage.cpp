#include <iostream>
using namespace std;
int Age(int);
int main()
{
	int year;
	for(int i = 1; i <= 3 ;i++)
	{
		cout <<"Enter year"<< i << " : " ;
		cin  >> year;
		cout << "Age "<< i;
		Age(year);
	}
	return(0);
}
int Age(int year)
{
		cout << " : " <<( 2563 - year) ;
		cout << endl;
		return(year);

}
