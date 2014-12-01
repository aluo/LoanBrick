/* LAB 1: Loan Calculator
 * Amy Luo
 * CSC 330 - Object Oriented Programming
 * 2013-09-03
 */

#include "calculatorBU.h"
using namespace std;

int main(){
	LoanCalc ulator; 
	//VARIABLES
	int scenario; // pick scenario number
	char choice; // ask user to loop or not
	bool loop = true;

	while(loop){
		cout << "LOAN CALCULATOR" << endl;
		cout << "Whadda you want?" << endl;
		cout <<"(1) - Solve for P (Payment Amount)"<< endl;
		cout <<"(2) - Solve for R (Interest Rate)"<< endl;
		cout <<"(3) - Solve for N (Num of Months)"<< endl;
		cout <<"(4) - Solve for C (Loan Amount)"<< endl;
		cout << "Choose your scenario <1,2,3,4>: ";
		cin >> scenario;
		ulator.errorCh(scenario); // safeguards for non-number input

		ulator.chooseScenario(scenario);
		
		cout << "\n\nRerun? <Y/N>" << endl;
		cin >> choice;
		if(choice == 'Y' || choice == 'y'){
			loop = true;
			system("cls");
		}
		else
			loop = false;
	};

	return 0;
}



	
