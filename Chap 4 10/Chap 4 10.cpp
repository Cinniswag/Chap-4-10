// Chap 4 10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int month, year, leapcheck;
    do {
        cout << "Please enter a month between 1 and 12." << endl;
        cin >> month;

        if (month < 1 || month > 12) {
            cout << "Invalid month, please try again." << endl;
        }
    } while (month < 1 || month > 12);
    do {
        cout << "Please enter a year within A.D." << endl;
        cin >> year;

        if (year < 0) {
            cout << "Invalid year, please try again." << endl;
        }
    } while (year < 0);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << "Month " << month << " of " << year << " has 31 days." << endl;
    else if (month == 4 || month == 6 || month == 9 || month == 11)
        cout << "Month " << month << " of " << year << " has 30 days." << endl;
    else if (month == 2)
    leapcheck = year % 4;
    if (leapcheck == 0)
        cout << "Month " << month << " of " << year << " has 29 days." << endl;
    else
        cout << "Month " << month << " of " << year << " has 28 days." << endl;
}