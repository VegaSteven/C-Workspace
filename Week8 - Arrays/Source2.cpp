#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Drinks
{
	string drinkName;
	double drinkPrice;
	int numberDrinks;
};

class DrinkMachine
{
private:
	Drinks drinks[5];
	double money;
	bool enoughMoney;
	int amount;
	double total;
	int inputMoney(int);

public:

	DrinkMachine();
	void displayChoices();
	void buyDrink(int);
	~DrinkMachine();
};

DrinkMachine::DrinkMachine() 
{
	for (int x = 0; x < 5; x++) {
		if (x == 4) {
			drinks[x].drinkPrice = 1.50;
		}
		else {
			drinks[x].drinkPrice = 1.00;
		}
		drinks[x].numberDrinks = 20;
	}

	drinks[0].drinkName = "Cola";
	drinks[1].drinkName = "Root-beer";
	drinks[2].drinkName = "Orange soda";
	drinks[3].drinkName = "Grape soda";
	drinks[4].drinkName = "Bottled water";
	money = 0.0;
	amount = 0;
	total = 0.0;
}

void DrinkMachine::displayChoices() 
{
	cout << " Drink name" << "\t" << setw(10) << "\tCost" << "\t\t" << "Number in Machine" << endl;

	cout << "--------------------------------------------------------" << endl;

	for (int x = 0; x < 5; x++) {
		if (x == 0) {
			cout << x + 1 << " " << drinks[x].drinkName << "\t\t" << setw(10) << "\t: $" << drinks[x].drinkPrice << "\t\t" << drinks[x].numberDrinks << endl;
		}
		else {
			cout << x + 1 << " " << drinks[x].drinkName << setw(10) << "\t: $" << drinks[x].drinkPrice << "\t\t" << drinks[x].numberDrinks << endl;
		}
	}
}

int DrinkMachine::inputMoney(int choice) 
{
	cout << "The drinkPrice for " << drinks[choice - 1].drinkName << " is $" << drinks[choice - 1].drinkPrice << endl;

	cout << "How much money will you insert? ";
	cin >> money;

	if (money < drinks[choice - 1].drinkPrice) {
		cout << "Can not deliver beverage, not enough money" << endl;
		enoughMoney = false;
	}
	else {
		enoughMoney = true;
	}

	return money;
}


void DrinkMachine::buyDrink(int choice) 
{
	char purchaseChoice;
	inputMoney(choice);
	if (enoughMoney) {
		cout << "Do you want to make a purchase for this drink?(Y/N) ";

		cin >> purchaseChoice;

		while (toupper(purchaseChoice) != 'Y' && toupper(purchaseChoice) != 'N') {

			cout << "Please enter correct input, purchase drink (Y/N)? ";
			cin >> purchaseChoice;
		}

		if (toupper(purchaseChoice) == 'Y') {

			if (drinks[choice - 1].numberDrinks <= 0) {
				cout << "sold out" << endl;
				cout << "Here is your money back $" << money << endl;
			}
			else {
				cout << "Here is your beverage" << endl;
				total += drinks[choice - 1].drinkPrice;
				drinks[choice - 1].numberDrinks -= 1;
			}

			if (money > drinks[choice - 1].drinkPrice) {
				money -= drinks[choice - 1].drinkPrice;
				cout << "Here is your change $" << money << endl;
			}
		}
		else {
			cout << "Here is your money back $" << money << endl;
		}
	}
}

DrinkMachine::~DrinkMachine() 
{
	for (int x = 0; x < 5; x++) {
		cout << "There are " << drinks[x].numberDrinks << " " << drinks[x].drinkName << " left in the machine" << endl;
	}

	cout << "The total amount of money collected during the day is $" << total << endl;
}

int main() 
{
	int choice;
	string line;
	DrinkMachine machine;

	cout << fixed << setprecision(2);

	do {

		machine.displayChoices();

		cout << "Enter your drink number or enter -1 to exit" << endl;

		cin >> choice;

		if (choice == -1) {
			cout << "Todays earnings are below." << endl;
			machine.~DrinkMachine();
		}
		else {

			switch (choice) {
			case 1: machine.buyDrink(choice);
				break;
			case 2: machine.buyDrink(choice);
				break;
			case 3: machine.buyDrink(choice);
				break;
			case 4: machine.buyDrink(choice);
				break;
			case 5: machine.buyDrink(choice);
				break;
			default: cout << endl << "Please enter a valid choice!" << endl << endl;

			}
		}

	} while (choice != -1 || choice >= 1 && choice <= 5);

	system("pause");
}