#include<iostream>
using namespace std;
int main()
{
	int day, month, year, rday, x;
	cout << "Days = "; cin >> day;
	cout << "months = "; cin >> month;
	cout << "year = "; cin >> year;
	cout << "repair days = "; cin >> rday;
	cout << endl;
	day--;
	month--;
	day = day + rday;
	x = day / 30;
	day = day % 30;

	month = month + x;
	x = month / 12;
	month %= 30;

	year = year + x;
	day++;
	month++;
	cout << day << endl;
	cout << month << endl;
	cout << year << endl;
}