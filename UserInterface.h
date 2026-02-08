/**
This class handles all user interaction for the Airgead Banking application.
It collects input from the user and controls how information is displayed.
Parameter - None
Return - None
*/

#ifndef AIRGEAD_USER_INTERFACE_H_
#define AIRGEAD_USER_INTERFACE_H_

class UserInterface {
public:
    void getUserInput(double& t_initial,
                      double& t_monthlyDeposit,
                      double& t_interestRate,
                      int& t_years) const;

    bool askToContinue() const;

    void displayHeader() const;
};

#endif  // AIRGEAD_USER_INTERFACE_H_
