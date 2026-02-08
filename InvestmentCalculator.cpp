#include "InvestmentCalculator.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*
This constructor initializes the investment calculator with default values.
*/
InvestmentCalculator::InvestmentCalculator()
    : m_initialInvestment(0.0),
      m_monthlyDeposit(0.0),
      m_annualInterestRate(0.0),
      m_years(0) {}

/*
This method stores the user’s investment input values for later calculations.
Parameter t_initial - double - initial investment amount
Parameter t_monthlyDeposit - double - monthly deposit amount
Parameter t_interestRate - double - annual interest rate percentage
Parameter t_years - integer - number of years to calculate
Return - None
*/
void InvestmentCalculator::setInvestmentData(double t_initial,
                                             double t_monthlyDeposit,
                                             double t_interestRate,
                                             int t_years) {
    m_initialInvestment = t_initial;
    m_monthlyDeposit = t_monthlyDeposit;
    m_annualInterestRate = t_interestRate;
    m_years = t_years;

    m_yearEndBalanceNoDeposit.clear();
    m_yearEndInterestNoDeposit.clear();
    m_yearEndBalanceWithDeposit.clear();
    m_yearEndInterestWithDeposit.clear();
}

/*
This method calculates yearly investment growth using compound interest
without additional monthly deposits.
Parameter - None
Return - None
*/
void InvestmentCalculator::calculateWithoutDeposits() {

    double balance = m_initialInvestment;
    double monthlyRate = (m_annualInterestRate / 100.0) / 12.0;

    for (int year = 1; year <= m_years; ++year) {
        double yearlyInterest = 0.0;

        for (int month = 0; month < 12; ++month) {
            double interest = balance * monthlyRate;
            yearlyInterest += interest;
            balance += interest;
        }

        m_yearEndInterestNoDeposit.push_back(yearlyInterest);
        m_yearEndBalanceNoDeposit.push_back(balance);
    }
}

/*
This method calculates yearly investment growth using compound interest
with recurring monthly deposits.
Parameter - None
Return - None
*/
void InvestmentCalculator::calculateWithDeposits() {

    double balance = m_initialInvestment;
    double monthlyRate = (m_annualInterestRate / 100.0) / 12.0;

    for (int year = 1; year <= m_years; ++year) {
        double yearlyInterest = 0.0;

        for (int month = 0; month < 12; ++month) {
            balance += m_monthlyDeposit;

            double interest = balance * monthlyRate;
            yearlyInterest += interest;
            balance += interest;
        }

        m_yearEndInterestWithDeposit.push_back(yearlyInterest);
        m_yearEndBalanceWithDeposit.push_back(balance);
    }
}

/*
This method displays the yearly investment report without monthly deposits.
Parameter - None
Return - None
*/
void InvestmentCalculator::displayReportWithoutDeposits() const {

    cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
    cout << "=========================================================\n";
    cout << setw(6) << "Year"
         << setw(20) << "Year End Balance"
         << setw(20) << "Interest Earned\n";

    for (int i = 0; i < m_years; ++i) {
        cout << setw(6) << (i + 1)
             << setw(20) << fixed << setprecision(2)
             << m_yearEndBalanceNoDeposit[i]
             << setw(20)
             << m_yearEndInterestNoDeposit[i] << endl;
    }
}

/*
This method displays the yearly investment report with monthly deposits.
Parameter - None
Return - None
*/
void InvestmentCalculator::displayReportWithDeposits() const {

    cout << "\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "======================================================\n";
    cout << setw(6) << "Year"
         << setw(20) << "Year End Balance"
         << setw(20) << "Interest Earned\n";

    for (int i = 0; i < m_years; ++i) {
        cout << setw(6) << (i + 1)
             << setw(20) << fixed << setprecision(2)
             << m_yearEndBalanceWithDeposit[i]
             << setw(20)
             << m_yearEndInterestWithDeposit[i] << endl;
    }
}
