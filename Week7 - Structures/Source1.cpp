#include <iostream>
#include <string>
using namespace std;

struct CorpData
{
	string name;
	double firstQ,
		secondQ,
		thirdQ,
		fourthQ,
		totalQ,
		AverageQ;
	CorpData();
	CorpData(string, double, double, double, double);
};
CorpData::CorpData() {
}
CorpData::CorpData(string s, double f, double sd, double t, double ft) {
	this->name = s;
	this->firstQ = f;
	this->secondQ = sd;
	this->thirdQ = t;
	this->fourthQ = ft;
	totalQ;
	AverageQ;
}
void calculations(CorpData &data);
int main()
{
	CorpData east(" East Devision ", 143, 63, 21, 21);
	CorpData west(" West Devision ", 123, 25, 22, 211);
	CorpData north(" North Devision ", 43, 31, 55, 99);
	CorpData south(" South Devision ", 67, 237, 21.46, 21.43);
	calculations(east);
	cout << " " << endl;
	calculations(west);
	cout << " " << endl;
	calculations(north);
	cout << " " << endl;
	calculations(south);
	cout << " " << endl;


	system("pause");
}
void calculations(CorpData &data)
{
	data.totalQ = data.firstQ + data.secondQ + data.thirdQ + data.fourthQ;
	cout << "The total sales for the 4 quarters for the :" << data.name << " is : $" << data.totalQ << endl;

	data.AverageQ = data.totalQ / 4;

	cout << "The average for this devision is : $" << data.AverageQ << endl;

}
