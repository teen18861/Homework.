#include <iostream>
using namespace std;
int main()
{
	float First, Second, Third,Midt,Final;
	cout << "=========QUIZZES=========\n";
	cout << "Enter first quizz (10):";
	cin >> First;
	cout << "Enter second quizz (10):";
	cin >> Second;
	cout << "Enter Third quizz (10):";
	cin >> Third;
	cout << "=========MID-TERM======\n";
	cout << "Enter mid-term (40): ";
	cin >> Midt;
	cout << "=========FINAL=========\n";
	cout << "Enter Final (50): ";
	cin >> Final;
	float Quizz = (First + Second + Third) / 3;
	cout << "Quizz Total " << Quizz << endl;
	cout << "Mid term : "<<Midt<<endl;
	cout << "Final : "<<Final<<endl;
	float Total = Midt + Final + Quizz;
	cout << "Total: " << Total << endl;
	cout << "your score isPass" << endl;
	return 0;
}