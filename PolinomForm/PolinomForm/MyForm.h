#pragma once
#include <stdlib.h>
#include "polinom.h"
#include <stdio.h> 
#include <iostream>
#include <ostream>
#include <sstream>

using namespace std;

namespace PolinomForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  coef1;


	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label8;
	protected: 

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->coef1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(375, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// coef1
			// 
			this->coef1->AutoSize = true;
			this->coef1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->coef1->Location = System::Drawing::Point(12, 19);
			this->coef1->Name = L"coef1";
			this->coef1->Size = System::Drawing::Size(57, 13);
			this->coef1->TabIndex = 1;
			this->coef1->Text = L"polinom1";
			this->coef1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(161, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(27, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(216, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(12, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"x";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(234, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(20, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(260, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(12, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(304, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(12, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"z";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(278, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(20, 20);
			this->textBox3->TabIndex = 7;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(322, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(20, 20);
			this->textBox4->TabIndex = 8;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(149, 55);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(216, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)), 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"polinom2";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(161, 119);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(27, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(216, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(12, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"x";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(234, 112);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(20, 20);
			this->textBox7->TabIndex = 13;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(260, 126);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(12, 13);
			this->label6->TabIndex = 14;
			this->label6->Text = L"y";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(278, 112);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(20, 20);
			this->textBox8->TabIndex = 15;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(322, 112);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(20, 20);
			this->textBox9->TabIndex = 16;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(304, 126);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(12, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"z";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(149, 162);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(216, 20);
			this->textBox10->TabIndex = 18;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(375, 121);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 19;
			this->button2->Text = L"add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(49, 226);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 20;
			this->button3->Text = L"Add";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(207, 226);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Min";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(363, 226);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 22;
			this->button5->Text = L"Mult";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(31, 315);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(419, 20);
			this->textBox11->TabIndex = 24;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(28, 273);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 15);
			this->label8->TabIndex = 25;
			this->label8->Text = L"RESULT";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 367);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->coef1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

		Polinom *pol1;
		Polinom *pol2;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 double coeff = Convert::ToDouble(textBox1->Text);
				 int deg1=Convert::ToDouble(textBox2->Text);
				 int deg2=Convert::ToDouble(textBox3->Text);
				 int deg3=Convert::ToDouble(textBox4->Text);
				// char str[] = "String";

				 //textBox5->Text = gcnew String( str) + " " + coeff.ToString();
				 textBox5->Text = coeff.ToString() + "  *   X ^" +deg1.ToString()  + "  *  Y ^" + deg2.ToString()  + "  *   Z ^" +deg3.ToString();

			 }


	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }


	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }


	private: System::Void label1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 }


private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }


private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }

private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			  double coeff = Convert::ToDouble(textBox6->Text);
				 int deg1=Convert::ToDouble(textBox7->Text);
				 int deg2=Convert::ToDouble(textBox8->Text);
				 int deg3=Convert::ToDouble(textBox9->Text);
				// char str[] = "String";

				 //textBox5->Text = gcnew String( str) + " " + coeff.ToString();
				 textBox10->Text = coeff.ToString() + "  *   X ^" +deg1.ToString()  + "  *  Y ^" + deg2.ToString()  + "  *   Z ^" +deg3.ToString();
			 
			 
			 /* char str[100];
			 String ^ s = textBox6->Text;
			 int i = 0;
			 for(i = 0; i < s->Length; i++)
			 {
				 //wchar_t tmp = s[i];
				 //wcstombs(str+i, &tmp, 1);
				 str[i] = s[i];
			 }
			 str[s->Length] = '\0';
			 textBox7->Text = gcnew String(str);*/
		 }
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			Polinom res;
			 Polinom pol1;
			res = pol1 + pol2;
			 string str;
				 stringstream c;
				 //res.out_pol("Add polinoms");
				 //pol1.out_pol("Add polinoms");
				 getline(c, str);
				 textBox11->Text = gcnew String(str.c_str());
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			Polinom res;
			 Polinom pol1;
			res = pol1 - pol2;
				 string str;
				 stringstream c;
				 //res.out_pol("Minus polinoms");
				 getline(c, str);
				 textBox11->Text = gcnew String(str.c_str());
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			Polinom res;
			int cc;
			 Polinom pol1;
			res = pol1 * cc;
			string str;
			stringstream c;
			//res.out_pol("Multy polinoms on const");
			getline(c, str);
			textBox11->Text = gcnew String(str.c_str());
		 }
};
}
