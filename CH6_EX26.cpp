// CH6_EX26.cpp : Defines the entry point for the console application.
// Tiara Dalton

// function to show uer how to use the program
// function to sell coffee
// function to show # of cups  of each size sold
// function to show total amount of coffee sold
// function to show total $ made
// no global variables & special values such as coffee cup size & cost of coffee cup must be declared as named constants

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

const double SmallCup = 1.75;
const double MediumCup = 1.90;
const double LargeCup = 2.00;
const int SmallOz = 9;
const int MediumOz = 12;
const int LargeOz = 15;

void UseProgram();
void SellCoffee(int& Sm, int& Med, int& Lg);
void OzSold(int Sm, int Med, int Lg, int& Toz);
void CupSizeSold(int Sm, int Med, int Lg);
void TotalSales(int Sm, int Med, int Lg, double& Tsale);


int main()
{
	int TotalOz, ProgramChoice;
	int NoSmall = 0;
	int NoMedium = 0;
	int NoLarge = 0;
	double TotalMoney;

	// Use program & void choices
	do
	{
		UseProgram();
		cin >> ProgramChoice;
		cout << endl;

		switch (ProgramChoice)
		{
			//Case 1 is option to sell coffee & display pay amount
		case 1:
			SellCoffee(NoSmall, NoMedium, NoLarge);
			TotalSales(NoSmall, NoMedium, NoLarge, TotalMoney);
			cout << "Please pay $";
			cout << fixed << setprecision(2) << TotalMoney << endl;
			break;
			
			//Case 2 is the option to show total money made
		case 2:
			cout << "Total money made: $" << TotalMoney << endl;
			break;

			//Case 3 is the option to show total amount in oz sold
		case 3:
			OzSold(NoSmall, NoMedium, NoLarge, TotalOz);
			cout << "Total amount of coffee sold: " << TotalOz << "oz" << endl;
			break;

			//Case 4 is the option to show total number of cups per size
		case 4:
			CupSizeSold(NoSmall, NoMedium, NoLarge);
			break;

			//Case 5 is the option to print the data in order: cup size, oz, amount made

		case 5: 
			CupSizeSold(NoSmall, NoMedium, NoLarge);
			cout << "Total amount of coffee sold: " << TotalOz << "oz" << endl;
			cout << "Total money made: $";
			cout << fixed << setprecision(2) << TotalMoney << endl;
			break;

		case 9:
			break;

		default:
			cout << "Invalid choice." << endl;
		}
	} 
	while (ProgramChoice != 9);

	
	
	system("pause");

	
	return 0;
}

void UseProgram()
{
	cout << "1: Enter 1 to order coffee." << '\n';
	cout << "2: Enter 2 to check the total money made up to this time." << '\n';
	cout << "3: Enter 3 to check the total amount of coffee sold up to this time." << '\n';
	cout << "4: Enter 4 to check the number of cups of coffee of each size sold." << '\n';
	cout << "5: Enter 5 to print the data." << '\n' << "9: Enter 9 to exit the program." << endl;
}

void SellCoffee(int& Sm, int& Med, int& Lg)
{
	int ProgramChoice;
	
	do
	{
		cout << "1: Enter 1 to buy coffee in a small cup size (9 oz)" << '\n' << "2: Enter 2 to buy coffee in a medium cup size (12 oz)" << '\n';
		cout << "3: Enter 3 to buy coffee in a large cup size (15 oz)" << '\n' << "9: Enter 9 to exit." << endl;
		cin >> ProgramChoice;
		cout << endl;
		

		switch (ProgramChoice)
		{
		case 1:
			cout << "Enter the number of cups: "; 
			cin >> Sm;
			cout << endl;
			break;
		case 2:
			cout << "Enter the number of cups: "; 
			cin >> Med;
			cout << endl;
			break;
		case 3:
			cout << "Enter the number of cups: "; 
			cin >> Lg;
			cout << endl;
			break;
		case 9:
			break;
		default:
			cout << "Invalid choice." << endl;
		}
	} 
	while (ProgramChoice != 9);


}

void CupSizeSold(int Sm, int Med, int Lg)
{
	cout << "Small cup count: " << Sm << endl;
	cout << "Medium cup count: " << Med << endl;
	cout << "Large cup count: " << Lg << endl;
}

void TotalSales(int Sm, int Med, int Lg, double& Tsale)
{
	Tsale = (Sm * SmallCup) + (Med * MediumCup) + (Lg * LargeCup);
}

void OzSold(int Sm, int Med, int Lg, int& Toz)
{
	Toz = (Sm * SmallOz) + (Med * MediumOz) + (Lg * LargeOz);
}