#include <iostream>
#include <iomanip>
using namespace std;

//function prototypes
char getChoice();
double patient(int days, double dailyRate, double hospitalServ, double hospitalMed);
double patient(double hospitalServ, double hospitalMed);

int main()
{
	char selection;
	int days;
	double dailyRate, hospitalServ, hospitalMed, total, totalHospital;

	cout << "Enter the type of patient you were " << endl;
	cout << "(I) for in-patient, or \n";
	cout << "(O) for out-patient? ";
	selection = getChoice();

	switch (selection)
	{
	case 'I':
	case 'i':
		cout << "Enter many days did you stay in the hospital ";
		cin >> days;
		while (days < 0)
		{
			cout << "Enter a number greater than 0 : ";
			cin >> days;
		}

		cout << "Enter how much was the daily rate ";
		cin >> dailyRate;
		while (dailyRate < 0)
		{
			cout << "Enter a number greater than 0 : ";
			cin >> dailyRate;
		}

		cout << "Enter how much was it for all the hospital services ";
		cin >> hospitalServ;
		while (hospitalServ < 0)
		{
			cout << "Enter a number greater than 0 : ";
			cin >> hospitalServ;
		}

		cout << "Enter how much was it for all the hospital medication ";
		cin >> hospitalMed;
		while (hospitalMed < 0)
		{
			cout << "Enter a number greater than 0 : ";
			cin >> hospitalMed;
		}
		
		patient(days, dailyRate, hospitalServ, hospitalMed);
		
		total = patient(days, dailyRate, hospitalServ, hospitalMed);
		cout << "The total for the hospital services, hospital medication, and the daily rate came out to be " << total << endl;
		
		break;
	case 'O':
	case 'o':
		cout << "Enter how much was it for all the hospital services ";
		cin >> hospitalServ;
		while (hospitalServ < 0)
		{
			cout << "Enter a number greater than 0 : ";
			cin >> hospitalServ;
		}

		cout << "Enter how much was it for all the hospital medication ";
		cin >> hospitalMed;
		while (hospitalMed < 0)
		{
			cout << "Enter a number greater than 0 : ";
			cin >> hospitalMed;
		}

		patient( hospitalServ, hospitalMed);

		totalHospital = patient(hospitalServ, hospitalMed);
		cout << "The total for the hospital services and the hospital medication came out to be " << totalHospital << endl;

		break;
	default:
		break;
	}
	system("pause");
}

char getChoice()
{
	char letter;

	cin >> letter;
	while (letter != 'I' && letter != 'i'
		&& letter != 'O' && letter != 'o')
	{
		cout << "Enter I or O : ";
		cin >> letter;
	}
	return letter;
}

double patient(int days, double dailyRate, double hospitalServ, double hospitalMed)
{
	double dTotal, hospitalTotal, total;
	

	dTotal = days * dailyRate;
	hospitalTotal = hospitalServ + hospitalMed;
	total = dTotal + hospitalTotal;

	return total;
}

double patient(double hospitalServ, double hospitalMed)
{
	double totalHospital;

	totalHospital = hospitalServ + hospitalMed;

	return totalHospital;
}