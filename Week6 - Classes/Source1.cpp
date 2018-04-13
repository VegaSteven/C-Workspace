#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int year;
	int speed;
	string make;
public: Car(int y, string m);

public:
	int getYear();
	int getSpeed();
	string getMake();
	void accelerate();
	void brake();
	void displaycar(Car r);
};
Car::Car(int y, string m)
{
	year = y;
	make = m;
	speed = 0;
}
int Car::getYear()
{
	return year;
}
int Car::getSpeed()
{
	return speed;
}
string Car::getMake()
{
	return make;
}
void Car::accelerate()
{
	
	speed = speed + 5;
	cout << "Accelerate... " << speed << endl;
}
void Car::brake()
{
	speed = speed - 5;
	cout << "branking..." << speed << endl;
}
void Car::displaycar(Car r)
{
	cout << "Make of the car is : " << r.getMake() << endl;
	cout << "The car year is : " << r.getYear() << endl;
	cout << "The car speed is : " << r.getSpeed() << endl;

}

int main()
{
	Car carOne(1999, "Toyota Supra");
	

	carOne.accelerate();
	carOne.accelerate();
	carOne.accelerate();
	carOne.accelerate();
	carOne.accelerate();
	carOne.displaycar(carOne);
	carOne.brake();
	carOne.brake();
	carOne.brake();
	carOne.brake();
	carOne.brake();





	system("pause");
}
