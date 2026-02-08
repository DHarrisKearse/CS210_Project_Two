/**
This program simulates an investment growth calculator for Airgead Banking.
It allows users to enter an initial investment amount, monthly deposits,
an annual interest rate, and a time period in years. The program calculates
and displays yearly investment growth both with and without monthly deposits,
demonstrating the effects of compound interest. Users can test multiple
scenarios to compare how changes in deposits, interest rates, and time impact
their investment.

Author: Dhandeaka Harris-Kearse
Date: 2/8/2026
*/

#include "InvestmentCalculator.h"
#include "UserInterface.h"

int main() {

    InvestmentCalculator calculator;
    UserInterface ui;

    bool running = true;

    while (running) {
        double initial = 0.0;
        double monthly = 0.0;
        double interest = 0.0;
        int years = 0;

        ui.displayHeader();
        ui.getUserInput(initial, monthly, interest, years);

        calculator.setInvestmentData(initial, monthly, interest, years);

        calculator.calculateWithoutDeposits();
        calculator.calculateWithDeposits();

        calculator.displayReportWithoutDeposits();
        calculator.displayReportWithDeposits();

        running = ui.askToContinue();
    }

    return 0;
}
