#include <iostream>
#include <fstream>
#include <iomanip> 
#include <string>
using namespace std;

void custome();
int main()
{	
	fstream file;
	int count = 0;
	double total = 0, rain = 0, average = 0;
	string firstMonth = "", lastMonth = "";
	file.open("Rainfall.txt");
	file >> firstMonth;
	file >> lastMonth;
	while(!file.eof()) {
		//while loop options
		//option 1 -> !file.eof()
		//option 2 -> file >> rain;
		file >> rain;
		total += rain;
		//cout << rain << endl;
		count++;
	}
	average = total / count;
	cout << "During the months of " << firstMonth ;
	cout << " - " << lastMonth;
	cout << " the total rain was " << total;
	cout << " inches and the average rainfal was "<< setprecision(3) << average << " inches." <<endl;
	file.close();
	//custome();
	system("pause");
}

void custome() {
	fstream outputFile;
	int rain = 0;
	outputFile.open("Rainfall2.txt");
	double sum = 00.00;
	string month = "";
	double average = 00.00;
	int count = 0;
	//cout << "Now write the months it rain \n";
	//outputFile << "January 9 \n";
	//outputFile << "February 10 \n";
	//outputFile << "March 12 \n";
	//outputFile << "April 13 \n";
	//outputFile << "May 10 \n";

	while (outputFile >> month >> rain) {

		cout << "Month: " << month << " Rain: " << rain << endl;
		sum += rain;
		count++;
	}
	average = sum / count;
	cout << "The total rainfall for Jan - May: " << sum << " \n" << endl;
	cout << "The average rainfall for Jan - May: " << average << " \n" << endl;
	outputFile.close();
	system("pause");
}