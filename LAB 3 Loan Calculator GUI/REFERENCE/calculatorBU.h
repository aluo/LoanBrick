/* LAB 1: Loan Calculator
 * Amy Luo
 * CSC 330 - Object Oriented Programming
 * 2013-09-03
 */

#ifndef CALCULATORBU_H
#define CALCULATORBU_H
#include <stdio.h> 
#include <math.h>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;


class LoanCalc{
private:
	
	// VARIABLES
	//
	// C - Loan Amount
	// R - Interest Rate %
	// P - Monthly Payment
	// N - Number of Months

	double C, R, P, N;

public:
	LoanCalc(){C = 0; R = 0; N = 0; P = 0;}; //initializing main variables
	
	void findMonthlyPay(); // Finds Monthly Pay (P)
	void findInterestRate(); // Finds Interest Rate (R)
	void findNumMonths(); // Finds Number of Months (N)
	void findLoanAmt(); // Finds Loan Amount (C)
	void outputAll(); // Outputs C, R, P, N
	void chooseScenario(int);
	void errorCh(double&);
	void errorCh(int&);

	
};


#endif
