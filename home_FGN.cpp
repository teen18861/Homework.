#include<iostream>
#include<string>
#include<time.h>

using namespace std;
int Guess(int, int);
int main()
{
	int num = 0,i=0;
	cout << "### Welcome to guessing number game ###" << endl;
	cout << "=======================================" << endl;
	cout << "=====Secret number has been chosen=====" << endl;
	cout << "=======================================" << endl;
	srand(time(NULL));
	int random = 1 + rand() % 10;
	while (num != random)
	{
		cout << "Guess the number(1 to 10) : ";
		cin >> num;
		int round = Guess(num, random);
		i++;
	}
	
	cout << "The secret number is : " << num << endl;
	cout << "You made " << i << " guesses" << endl;
	return 0;
}
int Guess(int num , int random)
{
	if (num > random && num < 11)
	{
		cout << "The secret number is higher" << endl;
	}
	else if (num < random)
	{
		cout << "The secret number is lower" << endl;
	}
	else if (num > 10)
	{
		cout << "program Error!!!" << endl;
	}
	else
	{
		cout << "\nCongratulations!!!!" << endl;
	}
	
	return 0;
}
