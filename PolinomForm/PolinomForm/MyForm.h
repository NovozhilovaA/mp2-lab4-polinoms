#pragma once
#include <stdio.h> 
#include "polinom.h"
#include <iostream>
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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox5;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label9;

	protected:

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label1->Location = System::Drawing::Point(12, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(85, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Полином 1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(141, 35);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(21, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(180, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(21, 20);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(207, 12);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(21, 20);
			this->textBox3->TabIndex = 3;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(234, 12);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(21, 20);
			this->textBox4->TabIndex = 4;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(278, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(73, 21);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Добавить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(103, 88);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(383, 20);
			this->textBox5->TabIndex = 6;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label2->Location = System::Drawing::Point(12, 155);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 18);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Полином 2";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(141, 156);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(21, 20);
			this->textBox10->TabIndex = 9;
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(180, 135);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(21, 20);
			this->textBox9->TabIndex = 10;
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(207, 135);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(21, 20);
			this->textBox8->TabIndex = 11;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(234, 135);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(21, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(278, 152);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(73, 21);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Добавить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(103, 207);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(383, 20);
			this->textBox6->TabIndex = 14;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label3->Location = System::Drawing::Point(168, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 18);
			this->label3->TabIndex = 16;
			this->label3->Text = L"x^";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(0, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(100, 23);
			this->label4->TabIndex = 28;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label5->Location = System::Drawing::Point(224, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 18);
			this->label5->TabIndex = 18;
			this->label5->Text = L"z^";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label6->Location = System::Drawing::Point(168, 158);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 18);
			this->label6->TabIndex = 19;
			this->label6->Text = L"x^";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label7->Location = System::Drawing::Point(196, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 18);
			this->label7->TabIndex = 20;
			this->label7->Text = L"y^";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label8->Location = System::Drawing::Point(224, 158);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 18);
			this->label8->TabIndex = 21;
			this->label8->Text = L"z^";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(495, 176);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"+";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(495, 226);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"-";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label10->Location = System::Drawing::Point(17, 314);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 18);
			this->label10->TabIndex = 26;
			this->label10->Text = L"Результат";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(103, 315);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(383, 20);
			this->textBox11->TabIndex = 27;
			this->textBox11->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox11_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F));
			this->label9->Location = System::Drawing::Point(196, 37);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(22, 18);
			this->label9->TabIndex = 29;
			this->label9->Text = L"y^";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(592, 367);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Polinom *pol1;
		Polinom *pol2;
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e)
	{
		
		pol1 = new Polinom;
		pol2 = new Polinom;
		
	}

	private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e)
	{
	}
			
			 private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 try
				 {
					 double kof = Convert::ToDouble(textBox1->Text);
					 int x = Convert::ToInt32(textBox2->Text);
					 int y = Convert::ToInt32(textBox3->Text);
					 int z = Convert::ToInt32(textBox4->Text);
					 if (x < 0 || y < 0 || z < 0)
					 {
						 throw "Отрицательная степень не допустима! ";
					 }
					 if (x > 9 || y > 9 || z > 9)
					 {
						 throw "Слишком большая степень не допустима! ";
					 }
					 int N = x * 100 + y * 10 + z;
					 pol1->Add (kof, N);
					 string str;
					 stringstream s;
					 s << (*pol1);
					 getline(s, str);
					 textBox5->Text = gcnew String(str.c_str());
				 }
				 catch (const char* error)
				 {
					 textBox5->Text = "Некоректная степень не допустима!";
				 }
			 }

			
			  private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 try
				 {
				 double koef = Convert::ToDouble(textBox10->Text);
				 int x = Convert::ToInt32(textBox9->Text);
				 int y = Convert::ToInt32(textBox8->Text);
				 int z = Convert::ToInt32(textBox7->Text);
				 if (x < 0 || y < 0 || z < 0)
				 {
					  throw "Отрицательная степень не допустима! ";
				 }
				 if (x > 9 || y > 9 || z > 9)
				 {
					 throw "Слишком большая степень не допустима! ";
				 }
				 int N = x * 100 + y * 10 + z;
				 pol2->Add(koef, N);
				 string str;
				 stringstream c;
				 c << (*pol2);
				 getline(c, str);
				 textBox6->Text = gcnew String(str.c_str());
				 }
				 catch (const char* error)
				 {
				 textBox6->Text = "Некоректная степень не допустима!";
				 }
			 }

			 private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 textBox6->Text = "";
				 pol1 = new Polinom;
			 }
			 private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 Polinom res = (*pol1) + (*pol2);
				 string str;
				 stringstream c;
				 c << res;
				 getline(c, str);
				 textBox11->Text = gcnew String(str.c_str());
			 }
			 private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
			 {
				 Polinom res = (*pol1) - (*pol2);
				 string str;
				 stringstream c;
				 c << res;
				 getline(c, str);
				 textBox11->Text = gcnew String(str.c_str());
			 }
	
    private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox9_TextChanged(System::Object^  sender, System::EventArgs^  e){}
    private: System::Void textBox10_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	private: System::Void textBox11_TextChanged(System::Object^  sender, System::EventArgs^  e){}
	
			
		

private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
};
		 }

