#include<iostream>
using namespace std;

int main()
{
	double DollarToYen;
	double DollarToEuro;
	double Yens_Per_Dollars;
	double Euros_Per_Dollars;

	cout << "Enter amout of US dollars you want to convert to Yens ";
	cin >> DollarToYen;
	cout << "Enter amount of US dollars you want to convert to Euros ";
	cin >> DollarToEuro;

	Yens_Per_Dollars = DollarToYen * 107.26;
	Euros_Per_Dollars = DollarToEuro * 0.81;

	cout << "Total Yens " << Yens_Per_Dollars << endl;
	cout << "Total Euros " << Euros_Per_Dollars << endl;

	system("pause");






}