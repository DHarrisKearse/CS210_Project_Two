# Airgead Banking Investment Calculator

## Overview

This project implements an interactive investment calculator that demonstrates how money grows over time through **compound interest**. It was developed for Airgead Banking as an financial education tool to help users understand the long-term impact of investing with and without recurring monthly deposits.

The application allows users to input investment parameters and generates two side-by-side yearly reports showing growth with and without additional contributions. Users can repeatedly test scenarios to explore how interest rates, deposits, and time affect investment outcomes.

## Problem Statement

Airgead Banking requires an educational program that helps users visualize the power of compound interest and responsible investing. The application must allow users to experiment with different financial inputs and compare investment growth under different conditions. This supports financial literacy education by clearly demonstrating how small changes in savings behavior influence long-term returns.

## Functional Requirements

* Accept user input for:

  * **Initial investment amount**
  * **Monthly deposit amount**
  * **Annual interest rate**
  * **Number of years**
* Generate two investment reports:

  * Growth **without** monthly deposits
  * Growth **with** monthly deposits
* Calculate interest using **monthly compounding**
* Display yearly balances and interest earned
* Allow users to test multiple investment scenarios in a loop

## Sample Input Screen

```
=================================
        Airgead Banking App
=================================
Initial Investment Amount:
Monthly Deposit:
Annual Interest Rate (%):
Number of Years:
```

## Example Report Output

```
Year   Balance (No Deposit)   Interest
----------------------------------------
1      $1,050.00              $50.00
2      $1,102.50              $52.50

Year   Balance (With Deposit) Interest
----------------------------------------
1      $1,650.00              $100.00
2      $2,315.00              $165.00
```

## Design Considerations

* Object-oriented structure separating:

  * Investment calculation logic
  * User input and display handling
* Monthly compounding calculations organized into reusable functions
* Clear data storage for yearly reporting
* Maintainable class design following C++ best practices

## Technologies

* Language: **C++**
* Standard C++ libraries only
* Object-oriented programming principles

## How to Run

1. Compile the program:

```
g++ main.cpp InvestmentCalculator.cpp UserInterface.cpp -o airgead
```

2. Run the executable:

```
./airgead
```

3. Enter investment values and review generated reports.

## What I Learned

* How to implement **compound interest algorithms** with monthly compounding
* Practical application of **object-oriented design** in C++
* Separating business logic from user interface code
* Managing structured program flow for repeated user interaction
* Designing readable and maintainable class architectures
* The importance of documenting software clearly with a structured README

## Future Enhancements

* Graphical visualization of investment growth
* Advanced input validation and error handling
* Exporting reports to files
* Support for variable interest rates
* Unit testing for financial calculations

## Author

Dhandeaka Harris-Kearse
Created as part of **CS 210 – Programming Languages** coursework.
