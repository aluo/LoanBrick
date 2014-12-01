/* LAB 3: Loan Calculator GUI
 * Amy Luo
 * CSC 330 - Object Oriented Programming
 * 2013-10-07
 */

#pragma once
#include "CalculatorBU.h"

namespace LAB3LoanCalculatorGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::MaskedTextBox^  CTBox;
	private: System::Windows::Forms::MaskedTextBox^  RTBox;
	private: System::Windows::Forms::MaskedTextBox^  NTBox;
	private: System::Windows::Forms::MaskedTextBox^  PTBox;





	private: System::Windows::Forms::Label^  tickerBox;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  CDollar;
	private: System::Windows::Forms::Label^  PDollar;
	private: System::Windows::Forms::Label^  RPerc;
	private: System::Windows::Forms::Label^  label6;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->CTBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->RTBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->NTBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->PTBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tickerBox = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->CDollar = (gcnew System::Windows::Forms::Label());
			this->PDollar = (gcnew System::Windows::Forms::Label());
			this->RPerc = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(25, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(86, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Loan Amount (C)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(25, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(96, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Interest Rate % (R)";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(25, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Number of Months (N)";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label4->Location = System::Drawing::Point(25, 163);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Monthly Payment (P)";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(11, 195);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(53, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"P = \?";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			this->button1->MouseHover += gcnew System::EventHandler(this, &Form1::button1_MouseHover);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(72, 195);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(53, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"R = \?";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			this->button2->MouseHover += gcnew System::EventHandler(this, &Form1::button2_MouseHover);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(132, 195);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(53, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"N = \?";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			this->button3->MouseHover += gcnew System::EventHandler(this, &Form1::button3_MouseHover);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ControlLight;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(192, 195);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(53, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"C = \?";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			this->button4->MouseHover += gcnew System::EventHandler(this, &Form1::button4_MouseHover);
			// 
			// CTBox
			// 
			this->CTBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->CTBox->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->CTBox->Location = System::Drawing::Point(154, 68);
			this->CTBox->Name = L"CTBox";
			this->CTBox->Size = System::Drawing::Size(136, 20);
			this->CTBox->TabIndex = 8;
			this->CTBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->CTBox->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// RTBox
			// 
			this->RTBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->RTBox->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->RTBox->Location = System::Drawing::Point(154, 100);
			this->RTBox->Name = L"RTBox";
			this->RTBox->Size = System::Drawing::Size(136, 20);
			this->RTBox->TabIndex = 9;
			this->RTBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->RTBox->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// NTBox
			// 
			this->NTBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NTBox->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->NTBox->Location = System::Drawing::Point(154, 129);
			this->NTBox->Name = L"NTBox";
			this->NTBox->Size = System::Drawing::Size(136, 20);
			this->NTBox->TabIndex = 10;
			this->NTBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->NTBox->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// PTBox
			// 
			this->PTBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PTBox->ForeColor = System::Drawing::SystemColors::ControlDark;
			this->PTBox->Location = System::Drawing::Point(154, 160);
			this->PTBox->Name = L"PTBox";
			this->PTBox->Size = System::Drawing::Size(136, 20);
			this->PTBox->TabIndex = 11;
			this->PTBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->PTBox->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// tickerBox
			// 
			this->tickerBox->AutoSize = true;
			this->tickerBox->BackColor = System::Drawing::Color::Transparent;
			this->tickerBox->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->tickerBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tickerBox->Location = System::Drawing::Point(17, 38);
			this->tickerBox->Name = L"tickerBox";
			this->tickerBox->Size = System::Drawing::Size(227, 16);
			this->tickerBox->TabIndex = 12;
			this->tickerBox->Text = L"Hover over a button for more info.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7));
			this->label5->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->label5->Location = System::Drawing::Point(195, 2);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(111, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Calculator by Amy Luo";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::Control;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::DarkGray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->button5->Location = System::Drawing::Point(251, 195);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(51, 23);
			this->button5->TabIndex = 14;
			this->button5->Text = L"CLR";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			this->button5->MouseHover += gcnew System::EventHandler(this, &Form1::button5_MouseHover);
			// 
			// CDollar
			// 
			this->CDollar->AutoSize = true;
			this->CDollar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->CDollar->Location = System::Drawing::Point(141, 71);
			this->CDollar->Name = L"CDollar";
			this->CDollar->Size = System::Drawing::Size(13, 13);
			this->CDollar->TabIndex = 15;
			this->CDollar->Text = L"$";
			// 
			// PDollar
			// 
			this->PDollar->AutoSize = true;
			this->PDollar->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->PDollar->Location = System::Drawing::Point(141, 163);
			this->PDollar->Name = L"PDollar";
			this->PDollar->Size = System::Drawing::Size(13, 13);
			this->PDollar->TabIndex = 16;
			this->PDollar->Text = L"$";
			// 
			// RPerc
			// 
			this->RPerc->AutoSize = true;
			this->RPerc->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->RPerc->Location = System::Drawing::Point(291, 103);
			this->RPerc->Name = L"RPerc";
			this->RPerc->Size = System::Drawing::Size(15, 13);
			this->RPerc->TabIndex = 17;
			this->RPerc->Text = L"%";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 19, System::Drawing::FontStyle::Underline));
			this->label6->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label6->Location = System::Drawing::Point(5, 2);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(189, 32);
			this->label6->TabIndex = 18;
			this->label6->Text = L"LOAN BRICK   ";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(311, 227);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->RPerc);
			this->Controls->Add(this->PDollar);
			this->Controls->Add(this->CDollar);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tickerBox);
			this->Controls->Add(this->PTBox);
			this->Controls->Add(this->NTBox);
			this->Controls->Add(this->RTBox);
			this->Controls->Add(this->CTBox);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"Form1";
			this->Text = L"Loan Calculator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 CTBox->Text = "<Input C>";
				 RTBox->Text = "<Input R>";
				 NTBox->Text = "<Input N>";
				 PTBox->Text = "<Input P>";

			 }

	/* SCENARIO 1: FIND THE MONTHLY PAYMENT*/
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				//VARIABLES ----

				// C - Loan Amount
				// R - Interest Rate %
				// P - Monthly Payment
				// N - Number of Months
				
				 LoanCalc ulator; // class object
		
				double C = 0, R = 0, N = 0, P = 0;

				///* ERROR HANDLING: */
				//
				// For Blank Input:
				if (this->CTBox->Text == "" || this->RTBox->Text == "" || this->NTBox->Text == "")
				 {
					 tickerBox->Text = "[ ! ] Please input NUMBERS for C, R, and N!"; // top tickerbox label
					 String^ str = "Error: Needs input(s)";
					
					this->PTBox->Text = str; // appears in 'answer' textbox
				 }
				// For Non-Numeric Input: 
				else if (! Microsoft::VisualBasic::Information::IsNumeric(CTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(RTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(NTBox->Text))
				{

					tickerBox->Text = "[ ! ] Please input NUMBERS for C, R, and N!";
					String^ str = "Error: Non-Numeric value";

					
					this->PTBox->Text = str;
				 }
				// Else, DO JOB. --------------------------------------
				else
				 {
					//CONVERT AND SET VALUES TO VARIABLES
					C = System::Convert::ToDouble(CTBox->Text);
					R = System::Convert::ToDouble(RTBox->Text);
					N = System::Convert::ToDouble(NTBox->Text);


					//CALCULATIONS
						P = ulator.findMonthlyPay(C,R,N);

					//OUTPUT
					PTBox->Text =  Convert::ToString(P);
				}//-----------------------------------------------------

	}




	/* SCENARIO 2: FIND THE INTEREST RATE*/
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				//VARIABLES ----

				// C - Loan Amount
				// R - Interest Rate %
				// P - Monthly Payment
				// N - Number of Months
		
				LoanCalc ulator; // class object
				 double C = 0, R = 0, N = 0, P = 0;

				///* ERROR HANDLING: */
				//
				// For Blank Input:
				if (this->CTBox->Text == "" || this->NTBox->Text == "" || this->PTBox->Text == "")
				 {
					 tickerBox->Text = "[ ! ] Please input NUMBERS for C, N, and P!"; // top tickerbox label
					 String^ str = "Error: Needs input(s)";
					
					this->RTBox->Text = str; // appears in 'answer' textbox
				 }
				// For Non-Numeric Input: 
				else if (! Microsoft::VisualBasic::Information::IsNumeric(CTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(NTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(PTBox->Text))
				{

					tickerBox->Text = "[ ! ] Please input NUMBERS for C, N, and P!";
					String^ str = "Error: Non-Numeric value";

					
					this->RTBox->Text = str;
				 }
				// Else, DO JOB. --------------------------------------
				else
				 {
					//CONVERT AND SET VALUES TO VARIABLES
					C = System::Convert::ToDouble(CTBox->Text);
					N = System::Convert::ToDouble(NTBox->Text);
					P = System::Convert::ToDouble(PTBox->Text);

					//CALCULATIONS
						R = ulator.findInterestRate(C,N,P);

					//OUTPUTS
					RTBox->Text =  Convert::ToString(R);
				}
	}

	
			 
			 
			 
	/* SCENARIO 3: FIND THE NUMBER OF PAYMENTS*/
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				//VARIABLES ----

				// C - Loan Amount
				// R - Interest Rate %
				// P - Monthly Payment
				// N - Number of Months
				 LoanCalc ulator; // class object
		
				double C = 0, R = 0, N = 0, P = 0;

				///* ERROR HANDLING: */
				//
				// For Blank Input:
				if (this->CTBox->Text == "" || this->RTBox->Text == "" || this->PTBox->Text == "")
				 {
					 tickerBox->Text = "[ ! ] Please input NUMBERS for C, R, and P!"; // top tickerbox label
					 String^ str = "Error: Needs input(s)";
					
					this->NTBox->Text = str; // appears in 'answer' textbox
				 }
				// For Non-Numeric Input: 
				else if (! Microsoft::VisualBasic::Information::IsNumeric(CTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(RTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(PTBox->Text))
				{

					tickerBox->Text = "[ ! ] Please input NUMBERS for C, R, and P!";
					String^ str = "Error: Non-Numeric value";

					
					this->NTBox->Text = str;
				 }
				// Else, DO JOB. --------------------------------------
				else
				 {
					 //CONVERT AND SET VALUES TO VARIABLES
					C = System::Convert::ToDouble(CTBox->Text);
					R = System::Convert::ToDouble(RTBox->Text);
					P = System::Convert::ToDouble(PTBox->Text);
				
					// CALCULATIONS
						N = ulator.findNumMonths(C,R,P);


					// OUTPUT
					NTBox->Text =  Convert::ToString(N);
				}
	}



	/* SCENARIO 4: FIND THE LOAN AMOUNT*/
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				//VARIABLES ----

				// C - Loan Amount
				// R - Interest Rate %
				// P - Monthly Payment
				// N - Number of Months
				 
				 LoanCalc ulator; // class object
		
				double C = 0, R = 0, N = 0, P = 0;

				///* ERROR HANDLING: */
				//
				// For Blank Input:
				if (this->RTBox->Text == "" || this->NTBox->Text == "" || this->PTBox->Text == "")
				 {
					 tickerBox->Text = "[ ! ] Please input NUMBERS for R, N, and P!"; // top tickerbox label
					 String^ str = "Error: Needs input(s)";
					
					this->CTBox->Text = str; // appears in 'answer' textbox
				 }
				// For Non-Numeric Input: 
				else if (! Microsoft::VisualBasic::Information::IsNumeric(RTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(NTBox->Text) || ! Microsoft::VisualBasic::Information::IsNumeric(PTBox->Text))
				{

					tickerBox->Text = "[ ! ] Please input NUMBERS for R, N, and P!";
					String^ str = "Error: Non-Numeric value";

					
					this->CTBox->Text = str;
				 }
				// Else, DO JOB. --------------------------------------
				else
				 {
					 //CONVERT AND SET VALUES TO VARIABLES
					R = System::Convert::ToDouble(RTBox->Text);
					N = System::Convert::ToDouble(NTBox->Text);
					P = System::Convert::ToDouble(PTBox->Text);

					//CALCULATIONS	
						C = ulator.findLoanAmt(R, N, P);
		
					//OUTPUT
					CTBox->Text =  Convert::ToString(C);
				}
	}


	/* CLEAR: CLEARS FORM*/
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 CTBox->Text = "";
			 RTBox->Text = "";
			 NTBox->Text = "";
			 PTBox->Text = "";

		 }



//MOUSE-OVER - TICKER INSTRUCTIONS
private: System::Void button1_MouseHover(System::Object^  sender, System::EventArgs^  e) {	
			 tickerBox->Text = "FIND P:   Please input a C, R, and N. ";
}
private: System::Void button2_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 tickerBox->Text = "FIND R:   Please input a C, N, and P. ";
}
private: System::Void button3_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 tickerBox->Text = "FIND N:   Please input a C, R, and P. ";
}
private: System::Void button4_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 tickerBox->Text = "FIND C:   Please input a R, N, and P. ";
}
private: System::Void button5_MouseHover(System::Object^  sender, System::EventArgs^  e) {
			 tickerBox->Text = "Hover over a button for more info.";
}
//-----END MOUSE-OVER


}; // END "public ref class Form1 : public System::Windows::Forms::Form"
} // END "namespace LAB3LoanCalculatorGUI"

