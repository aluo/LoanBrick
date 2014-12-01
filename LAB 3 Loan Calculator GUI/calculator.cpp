/* LAB 3: Loan Calculator GUI
 * Amy Luo
 * CSC 330 - Object Oriented Programming
 * 2013-10-07
 */
#include "stdafx.h"
#include "CalculatorBU.h"


	// VARIABLES
	//
	// C - Loan Amount
	// R - Interest Rate %
	// P - Monthly Payment
	// N - Number of Months

//FORMULAS AND CALCULATIONS
/* SCENARIO 1: FIND THE MONTHLY PAYMENT*/
	double LoanCalc::findMonthlyPay(double C, double R, double N){
		

		double r = R/1200; //adjusted monthly payment
		double base, top, bottom;

		base = (1+r);
		top = C * r * pow(base, N);
		bottom = (pow(base,N) - 1);

		P = top/bottom;

		return P;
		
	};







	/* SCENARIO 2: FIND THE INTEREST RATE*/
	double LoanCalc::findInterestRate(double C, double N, double P){


		double r0 = 0; //OLD monthly payment guess
		double r1 = 0; //NEW monthly payment guess 
		double diff = 1; //difference between a new guess and an old guess
		double top, bottom;
		bool loop = true;

		//////CALCULATE EDUCATED INITIAL GUESS (r0):
		top = 2.*(N * P - C);
		bottom = N * C;
		r0 = top/bottom; //r0 = educated initial guess (i.e. r_guess)
	
		
		//////CALCULATE NEW r (r1) again and again until difference is small enough
		while(loop == true){
			//Calculations------(via Domanski)
			top = ( P - (P * pow((1.+r0),-N)) - (r0*C) );
			bottom = ( N * (P * pow((1.+r0),(-N-1))) - C);
			r1 = r0 - (top/bottom);
			//------------------
			diff = abs(r1-r0); //find difference (cover for negative)

			if(diff < .0001)
				loop = false; //if < .0001, escape loop
			else
				r0 = r1; //else, new r1 becomes r0

		};

		R = r1 * 1200.0; //if difference is less, then NEW r is interest rate.    
		//  -----> ADJUSTED R TO A HUMAN FORM

		return R;


	};







	/* SCENARIO 3: FIND THE NUMBER OF PAYMENTS*/
	double LoanCalc::findNumMonths(double C, double R, double P){
		

		double r = R/1200; //adjusted monthly payment
		double top, bottom;

		
		top = (log (P/C))-(log ((P/C)-r));
		bottom = log(1+r);

		N = top/bottom;
		
		return N;
	};



	/* SCENARIO 4: FIND THE LOAN AMOUNT*/
	double LoanCalc::findLoanAmt(double R, double N, double P){
		

		double r = R/1200; //adjusted monthly payment
		double base, top, bottom;

		base = (1+r);
		top = P * (pow(base,N) - 1);
		bottom =  r * pow(base, N);

		C = top/bottom;
		
		return C;
	
	
	};