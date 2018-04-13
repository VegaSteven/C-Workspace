#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	string name;
	double vault1, vault2, vault3;

	cout << "Enter your name ";
	getline(cin, name);
	cout << "Enter the hieght of vault one ";
	cin >> vault1;
	cout << "Enter the hieght of vault two ";
	cin >> vault2;
	cout << "Enter the hieght of vault three ";
	cin >> vault3;

	if (vault1 < 0)
	{
		cout << "That is an invalid time. "<< " enter a positive vault hieght ";
		cin >> vault1;
	}
	if (vault2 < 0)
	{
		cout << "That is an invalid time. "<< " enter a positive vault hieght ";
		cin >> vault2;
	}
	if (vault3 < 0)
	{
		cout << "That is an invalid time. "<< " enter a positive vault hieght ";
		cin >> vault3;
	}

	cout << name;
	cout << vault1;
	cout << vault2;
	cout << vault3;

	system("pause");
}