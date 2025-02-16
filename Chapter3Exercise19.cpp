/*

file name:Chapter3exercise19.cpp
GitHub URL
programmer:Yaqoob Nagi
Date:February 2025
Requirements:

The monthly payment on a loan may be calculated by the following formula:
Payment= Rate x (1 + Rate)^N/((1 + Rate)^N - 1) x L
Rate is the monthly interest rate, which is the annual interest rate divided by 12.
(12 percent annual interest would be 1 percent monthly interest.) N is the number of payments,
and L is the amount of the loan. Write a program that asks for these values then displays a report similar to:
Loan Amount:$ 10000.00 Monthly Interest Rate: 1% Number of Payments: 36 Monthly Payment: $332.14 Amount Paid Backs: 11957.15 Interest Paid: 1957.15
*/
#include <iostream>
#include <iomanip> 
#include <cmath> 

using namespace std;

int main() {
    double loanAmount, annualRate, monthlyRate, monthlyPayment, totalPaid, interestPaid;
    int numPayments;

    cout << "Loan Amount: $";
    cin >> loanAmount;

    cout << "Annual Interest Rate (in percentage): ";
    cin >> annualRate;

    cout << "Number of Payments (months): ";
    cin >> numPayments;

    monthlyRate = (annualRate / 100) / 12;

    monthlyPayment = (monthlyRate * loanAmount) / (1 - pow(1 + monthlyRate, -numPayments));

    totalPaid = monthlyPayment * numPayments;
    interestPaid = totalPaid - loanAmount;

    cout << fixed << setprecision(2);
    cout << "\nMonthly Payment: $" << monthlyPayment << endl;
    cout << "Amount Paid Back: $" << totalPaid << endl;
    cout << "Interest Paid: $" << interestPaid << endl;

    return 0;
}
