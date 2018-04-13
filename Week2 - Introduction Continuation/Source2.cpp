#include<iostream>
#include<string>
using namespace std;

int main()
{
	string movie;
	int adultTicktes;
	int childernTickets;
	double atotal;
	double ctotal;
	double gbop;
	double nbop;
	double aptd;


	cout << "Please enter the name of the movie ";
	getline(cin, movie);
	cout << "Please enter the amount of adult ticktes sold ";
	cin >> adultTicktes;
	cout << "Please enter the amount of childern ticktes sold ";
	cin >> childernTickets;

	atotal = adultTicktes * 6;
	ctotal = childernTickets * 3;
	gbop = atotal + ctotal;
	nbop = gbop * 0.2;
	aptd = nbop - gbop;

	
	cout << "The movie was called\n " << movie << endl;
	cout << "Adult tickets that were sold for the movie was\n " << adultTicktes << endl;
	cout << "Childern tickets that were sold for the movie was\n " << childernTickets << endl;
	cout << "Gross Box Office Profit $\n " << gbop << endl;
	cout << "Amount Paid to Distributor -$\n" << aptd << endl;
	cout << "Net Box Office Profit $\n " << nbop << endl;

	system("pause");

}