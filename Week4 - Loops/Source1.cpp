#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int number = 1;
	double balance = 0;
	double totalDeposit = 0;
	double  totalWithdraw = 0;
	double amount, withdraw, startAmount, startWithdraw, SadEb, interst;
	
	cout << "How much money will you want to deposit into the account? ";
	cin >> startAmount;

	while (startAmount < 0)
	{
		cout << "That is an invalid. " << " enter a positive amount ";
		cin >> startAmount;
	}
	balance = balance + startAmount;

	cout << "How much do you want to withdraw from your account? ";
	cin >> startWithdraw;

	while ((startWithdraw < 0) || (startWithdraw > balance))
	{
		cout << "That is an invalid. " << " Enter a amount that is not bigger than your balance ";
		cin >> startWithdraw;
	}
	balance = balance - startWithdraw;
	
	while (number < 3)
	{
		cout << "How much money will you want to deposit into the account? ";
		cin >> amount;

		while (amount < 0)
		{
			cout << "That is an invalid. " << " enter a positive amount ";
			cin >> amount;
		}
		balance = balance + amount;
		totalDeposit = totalDeposit + amount;

		cout << "How much do you want to withdraw from your account? ";
		cin >> withdraw;

		while ((withdraw < 0) || (withdraw > balance))
		{
			cout << "That is an invalid. " << " Enter a amount that is not bigger than your balance ";
			cin >> withdraw;
		}
		balance = balance - withdraw;
		totalWithdraw = totalWithdraw + withdraw;

		SadEb = startAmount + balance / 2;
		interst = SadEb / 12;

	number = number + 1;
	}

	totalDeposit = totalDeposit + startAmount;
	totalWithdraw = totalWithdraw + startWithdraw;



	cout <<"first deposit was "<< startAmount << endl;
	cout << "The final balance is "<< balance << endl;
	cout << "The total Deposit was "<< totalDeposit << endl;
	cout <<"The total withdraw was "<< totalWithdraw << endl;
	cout << "The interst is " << interst << endl;

	system("pause");
}

