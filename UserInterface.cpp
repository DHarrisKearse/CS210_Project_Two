#include "UserInterface.h"
#include <iostream>

using namespace std;

/*
This method displays the program header and title screen.
*/
void UserInterface::displayHeader() const {
    cout << "\n=================================\n";
    cout << "        Airgead Banking App      \n";
    cout << "=================================\n";
}

/*
This method prompts the user to enter investment information.
Parameter t_initial - double reference - initial investment amount
Parameter t_monthlyDeposit - double reference - monthly deposit amount
Parameter t_interestRate - double reference - annual interest rate
Parameter t_years - integer reference - number of investment years
Return - None
*/
void UserInterface::getUserInput(double& t_initial,
                                 double& t_monthlyDeposit,
                                 double& t_interestRate,
                                 int& t_years) const {

    cout << "Initial Investment Amount: ";
    cin >> t_initial;

    cout << "Monthly Deposit: ";
    cin >> t_monthlyDeposit;

    cout << "Annual Interest Rate (%): ";
    cin >> t_interestRate;

    cout << "Number of Years: ";
    cin >> t_years;
}

/*
This method asks the user whether they want to test another scenario.
Parameter - None
Return boolean - true if user wants to continue, false otherwise
*/
bool UserInterface::askToContinue() const {
    char choice;

    cout << "\nTest another scenario? (y/n): ";
    cin >> choice;

    return (choice == 'y' || choice == 'Y');
}
