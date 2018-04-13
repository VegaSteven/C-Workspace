#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class InventoryItem
{
private:
	int numPart;
	int onHand;
	string description;
	double cost;
	double totalCost;

public:
	InventoryItem(int n, int o, double t, string d);
	InventoryItem();
	int getNumPart();
	int getOnHand();
	double getCost();
	string getDescription();
	double getTotalCost();
	void setItemNumber(int i);
	void setQuantity(int q);
	void setCost(double c);
	void setTotalCost(double tc);
	void setDescripion(string d);

};

InventoryItem::InventoryItem(int n, int o, double t, string d)
{
	//setCost(t);
	//setDescripion(d);
	//setItemNumber(n);
	//setQuantity(o);
	//getTotalCost();
	description = d;
	numPart = n;
	onHand = o;
	cost = t;
}
InventoryItem::InventoryItem() {
	numPart = 0;
	onHand = 0;
	cost = 0;
	description = "";
}
void InventoryItem::setItemNumber(int i) {
	this->numPart = i;
}
void InventoryItem::setCost(double c) {
	this->cost = c;
}
void InventoryItem::setQuantity(int q) {
	this->onHand = q;
}
void InventoryItem::setDescripion(string d)
{
	this->description = d;
}
void InventoryItem::setTotalCost(double tc)
{
	this->totalCost = tc;
}

int InventoryItem::getNumPart() 
{
	return numPart;
}
string InventoryItem::getDescription()
{
	return description;
}

int InventoryItem::getOnHand()
{
	return onHand;
}
double InventoryItem::getCost()
{
	return cost;
}
double InventoryItem::getTotalCost() {
	return cost * onHand;
}
int main()
{
	int numPart;
	string description;
	int onHand;
	double cost;
	
	cout << "Enter the number part " << endl;
	cin >> numPart;

	while (numPart < 0)
	{
		cout << "Enter a number greather than 0: ";
		cin >> numPart;
	}

	cin.ignore();
	cout << "Enter the description of the item " << endl;
	getline(cin, description);

	cout << "Enter how much is on your hand " << endl;
	cin >> onHand;

	while (onHand < 0)
	{
		cout << "Enter a number greather than 0: ";
		cin >> onHand;
	}

	cout << "The cost is " << endl;
	cin >> cost;

	while (cost < 0)
	{
		cout << "Enter a number greather than 0: ";
		cin >> cost;
	}

	InventoryItem item(numPart, onHand, cost, description);

	cout << "The Item number: " << item.getNumPart() << endl;
	cout << "The Item description: " << item.getDescription() << endl;
	cout << "The Item quantity: " << item.getOnHand() << endl;
	cout << "The Item price: " << item.getCost() << endl;
	cout << "The Item total: " << item.getTotalCost() << endl;


	system("pause");
}
