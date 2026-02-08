/*
This class manages all investment calculations for the Airgead Banking application.
It stores investment data and calculates compound interest with and without
monthly deposits, then prepares yearly financial reports.
*/

#ifndef AIRGEAD_INVESTMENT_CALCULATOR_H_
#define AIRGEAD_INVESTMENT_CALCULATOR_H_

#include <vector>

class InvestmentCalculator {
public:
    InvestmentCalculator();

    void setInvestmentData(double t_initial,
                           double t_monthlyDeposit,
                           double t_interestRate,
                           int t_years);

    void calculateWithoutDeposits();
    void calculateWithDeposits();

    void displayReportWithoutDeposits() const;
    void displayReportWithDeposits() const;

private:
    double m_initialInvestment;
    double m_monthlyDeposit;
    double m_annualInterestRate;
    int m_years;

    std::vector<double> m_yearEndBalanceNoDeposit;
    std::vector<double> m_yearEndInterestNoDeposit;

    std::vector<double> m_yearEndBalanceWithDeposit;
    std::vector<double> m_yearEndInterestWithDeposit;
};

#endif  // AIRGEAD_INVESTMENT_CALCULATOR_H_
