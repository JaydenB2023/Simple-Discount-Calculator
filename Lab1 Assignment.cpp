// Lab1 Assignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Jayden Brown

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{

    int count = 1;
        while (count <= 6)
        {
            double price;
            double total;
            cout << "Enter your total price to calculate discount\n";
            cin >> price;
            if (price < 100.00)
            {
                total = price - (price * 0.10);
                    cout << "Your new price is:\n" << total << "\n";
            }
            if (price >= 100.00 && price <= 249.99)
            {
                total = price - (price * 0.20);
                    cout << "Your new price is:\n" << total << "\n";
            }
            if (price >= 250 && price <= 499.99)
            {
                total = price - (price * 0.30);
                    cout << "Your new price is:\n" << total << "\n";
            }
            if (price >= 500 && price <= 999.99)
            {
                total = price - (price * 0.40);
                    cout << "Your new price is:\n" << total << "\n";
            }
            if (price >= 1000)
            {
                total = price - (price * 0.50);
                    cout << "Your new price is:\n" << total << "\n";
            }
            count += 1;
        }
        return 0;
}

