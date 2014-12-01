/* LAB 3: Loan Calculator GUI
 * Amy Luo
 * CSC 330 - Object Oriented Programming
 * 2013-10-07
 */

#ifndef CALCULATORBU_H
#define CALCULATORBU_H
#include <math.h>
#include <string>
#using <Microsoft.VisualBasic.dll>


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
	
	double findMonthlyPay(double,double,double); // Finds Monthly Pay (P)
	double findInterestRate(double,double,double); // Finds Interest Rate (R)
	double findNumMonths(double,double,double); // Finds Number of Months (N)
	double findLoanAmt(double,double,double); // Finds Loan Amount (C)


	
};

#endif