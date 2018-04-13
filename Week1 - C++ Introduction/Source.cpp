#include<iostream>
using namespace std;

int main()
{
	double totalbars, price, earnings;

	cout << "how many candy bars did you sell? ";
	cin >> totalbars;

	cout << "How much was each candy bar sold for? ";
	cin >> price;
	
	earnings = totalbars * price;

	cout << "you enarned $" << earnings << endl;
	system("pause");
}