/* LAB 1: Loan Calculator
 * Amy Luo
 * CSC 330 - Object Oriented Programming
 * 2013-09-03
 */

#include "calculatorBU.h"

void LoanCalc::chooseScenario(int choiceNum){
		if (choiceNum == 1){
			cout<<"\n\nPlease enter Loan Amount <C>: " << endl;
			cin>> C;
			errorCh(C); // safeguards for non-number input
			cout<<"Please enter Interest Rate <R>: " << endl;
			cin>> R;
			errorCh(R);
			cout<<"Please enter Number of Months <N>: " << endl;
			cin>> N;
			errorCh(N);

			findMonthlyPay();
			outputAll();
		}
		else if (choiceNum == 2){
			cout<<"\n\nPlease enter Loan Amount <C>: ";
			cin>> C;
			errorCh(C);
			cout<<"Please enter Monthly Payment <P>: ";
			cin>> P;
			errorCh(P);
			cout<<"Please enter Number of Months <N>: ";
			cin>> N;
			errorCh(N);

			findInterestRate();
			outputAll();
		}
		else if (choiceNum == 3){
			cout<<"\n\nPlease enter Loan Amount <C>: ";
			cin>> C;
			errorCh(C);
			cout<<"Please enter Interest Rate <R>: ";
			cin>> R;
			errorCh(R);
			cout<<"Please enter Monthly Payment <P>: ";
			cin>> P;
			errorCh(P);

			findNumMonths();
			outputAll();
		}
		else if (choiceNum == 4){
			cout<<"\n\nPlease enter Interest Rate <R>: " << endl;
			cin>> R;
			errorCh(R);
			cout<<"Please enter Number of Months <N>: " << endl;
			cin>> N;
			errorCh(N);
			cout<<"Please enter Monthly Payment <P>: " << endl;
			cin>> P;
			errorCh(P);

			findLoanAmt();
			outputAll();
		}
		else
			cout << "\n\n[!] Not a valid choice.";

	};






	/* SCENARIO 1: FIND THE MONTHLY PAYMENT*/
	void LoanCalc::findMonthlyPay(){
		

		double r = R/1200; //adjusted monthly payment
		double base, top, bottom;

		base = (1+r);
		top = C * r * pow(base, N);
		bottom = (pow(base,N) - 1);

		P = top/bottom;
		
	};







	/* SCENARIO 2: FIND THE INTEREST RATE*/
	void LoanCalc::findInterestRate(){


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


	};







	/* SCENARIO 3: FIND THE NUMBER OF PAYMENTS*/
	void LoanCalc::findNumMonths(){
		

		double r = R/1200; //adjusted monthly payment
		double top, bottom;

		
		top = (log (P/C))-(log ((P/C)-r));
		bottom = log(1+r);

		N = top/bottom;
		

	};



	/* SCENARIO 4: FIND THE LOAN AMOUNT*/
	void LoanCalc::findLoanAmt(){
		

		double r = R/1200; //adjusted monthly payment
		double base, top, bottom;

		base = (1+r);
		top = P * (pow(base,N) - 1);
		bottom =  r * pow(base, N);

		C = top/bottom;
		
		
	
	
	};



	/* OUTPUT All: OUTPUTS ALL VARIABLES*/
	void LoanCalc::outputAll(){
		cout << fixed << showpoint << setprecision(2);
		cout << "\n\nOUTPUT:\n  Your Monthly Payment (P) is: $" << P << endl;
		cout << "  Your Interest Rate (R) is: " << R << "%" <<endl;
		cout << "  Number of Months (N) is: " << N << endl;
		cout << "  Your Loan Amount (C) is: $" << C << endl;
	};


	/* ERROR CHECK: SAFEGUARDS INPUT BUFFER AGAINST INVALID ENTRIES, LIKE LETTERS*/
	void LoanCalc::errorCh(double& check){

		while(!cin){
			cin.clear(); 
			cin.ignore(100, '\n');
			cout << "Invalid Input. Please enter a number: ";
			cin >> check; // loop prompt until valid input; valid input returned by reference
		}


	};

	/* ERROR CHECK: SAFEGUARDS INPUT BUFFER AGAINST INVALID ENTRIES - INT VERSION*/
	void LoanCalc::errorCh(int& check){

		while(!cin){
			cin.clear();
			cin.ignore(100, '\n');
			cout << "Invalid Input. Please enter a number: ";
			cin >> check;
		}

	};