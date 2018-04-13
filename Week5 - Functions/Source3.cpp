#include <iostream>
using namespace std;

// function prototype
float calculate(double populaction, double brithRate, double deathRate, int years);

int main()
{
	int populaction, brithRate, deathRate, years, newPopulaction;

	cout << "Enter the size of the populaction ";
	cin >> populaction;
	while (populaction < 0 || populaction < 2)
	{
		cout << "Enter the populaction size bigger than two ";
		cin >> populaction;
	}
	
	cout << "Enter the brith rate ";
	cin >> brithRate;
	while (brithRate < 0)
	{
		cout << "Enter the brith rate agian. It can't be less than 0. ";
		cin >> brithRate;
	}

	cout << "Enter the death rate ";
	cin >> deathRate;
	while (deathRate < 0)
	{
		cout << "Enter the death rate again. It can't be less than 0. ";
		cin >> deathRate;
	}
	cout << "Enter how many years you want to display it for. ";
	cin >> years;
	while (years < 0)
	{
		cout << "Enter how many years you want to display it for. It can't be 0. ";
		cin >> years;
	}
	
	cout << "Before the populaction was " << populaction << endl;
	for (int y = 0; y < years; y++) 
	{
		newPopulaction = calculate(populaction, brithRate, deathRate, years);
		cout << "After the calculation, the new populaction was " << newPopulaction << endl;
		populaction = newPopulaction;
	}
	system("pause");
}

float calculate(double populaction, double brithRate, double deathRate, int years)
{
	double newPopulaction;

	newPopulaction = populaction * 1 + brithRate * 1 - deathRate;

	return newPopulaction;
}

