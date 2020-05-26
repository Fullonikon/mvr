#pragma once
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h> 

using namespace std;
namespace Graph {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

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






	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;



	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label16;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DataGridView^  dataGridView3;














	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 280);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(94, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Точность метода";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(139, 277);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(64, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"0,00000001";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 227);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(121, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Число разбиений по X";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(139, 224);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"4";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(139, 250);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"4";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 253);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Число разбиений по Y";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(139, 303);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(64, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"500";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 306);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Ограничение шагов";
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->textBox13);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->textBox5);
			this->panel1->Controls->Add(this->textBox4);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(6, 6);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(238, 462);
			this->panel1->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::Control;
			this->button3->Location = System::Drawing::Point(56, 387);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 37);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Решить ";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(139, 331);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(64, 20);
			this->textBox13->TabIndex = 15;
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(12, 334);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(98, 13);
			this->label15->TabIndex = 14;
			this->label15->Text = L"Параметр метода";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 45);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(226, 158);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 10);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Тестовая задача";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(458, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(622, 465);
			this->dataGridView1->TabIndex = 15;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(345, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(107, 20);
			this->textBox3->TabIndex = 15;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(250, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Число итераций";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(345, 67);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(107, 20);
			this->textBox6->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(250, 70);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Погрешность";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1091, 522);
			this->tabControl1->TabIndex = 18;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage1->Controls->Add(this->panel1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1083, 496);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Тестовая";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::Gainsboro;
			this->tabPage2->Controls->Add(this->dataGridView3);
			this->tabPage2->Controls->Add(this->textBox11);
			this->tabPage2->Controls->Add(this->textBox12);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Controls->Add(this->label13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1083, 496);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Основная";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(345, 69);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(117, 20);
			this->textBox11->TabIndex = 22;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(345, 39);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(117, 20);
			this->textBox12->TabIndex = 21;
			// 
			// dataGridView2
			// 
			this->dataGridView2->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(497, 3);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(524, 244);
			this->dataGridView2->TabIndex = 20;
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Location = System::Drawing::Point(6, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(238, 487);
			this->panel2->TabIndex = 17;
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Controls->Add(this->label18);
			this->panel4->Controls->Add(this->label17);
			this->panel4->Controls->Add(this->textBox16);
			this->panel4->Controls->Add(this->textBox17);
			this->panel4->Controls->Add(this->textBox15);
			this->panel4->Controls->Add(this->label19);
			this->panel4->Location = System::Drawing::Point(7, 347);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(209, 73);
			this->panel4->TabIndex = 24;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(3, 6);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(123, 13);
			this->label18->TabIndex = 20;
			this->label18->Text = L"Точность метода c h/2";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(3, 51);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(127, 13);
			this->label17->TabIndex = 21;
			this->label17->Text = L"Параметр метода с h/2";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(138, 3);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(64, 20);
			this->textBox16->TabIndex = 21;
			this->textBox16->Text = L"0,0000001";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(138, 25);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(64, 20);
			this->textBox17->TabIndex = 23;
			this->textBox17->Text = L"500";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(138, 48);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(64, 20);
			this->textBox15->TabIndex = 22;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(2, 28);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(136, 13);
			this->label19->TabIndex = 22;
			this->label19->Text = L"Ограничение шагов c h/2";
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->label12);
			this->panel3->Controls->Add(this->textBox10);
			this->panel3->Controls->Add(this->label8);
			this->panel3->Controls->Add(this->textBox14);
			this->panel3->Controls->Add(this->textBox7);
			this->panel3->Controls->Add(this->label16);
			this->panel3->Location = System::Drawing::Point(7, 268);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(209, 73);
			this->panel3->TabIndex = 23;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(3, 7);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(112, 13);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Точность метода c h";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(138, 4);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(64, 20);
			this->textBox10->TabIndex = 4;
			this->textBox10->Text = L"0,00000001";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(2, 29);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(125, 13);
			this->label8->TabIndex = 10;
			this->label8->Text = L"Ограничение шагов с h";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(138, 48);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(64, 20);
			this->textBox14->TabIndex = 19;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(138, 26);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(64, 20);
			this->textBox7->TabIndex = 11;
			this->textBox7->Text = L"500";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(3, 51);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(116, 13);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Параметр метода c h";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(46, 441);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(125, 35);
			this->button2->TabIndex = 20;
			this->button2->Text = L"Решить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(3, 45);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(226, 158);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(148, 242);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(64, 20);
			this->textBox8->TabIndex = 13;
			this->textBox8->Text = L"4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(13, 10);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(95, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Основная задача";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 245);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(121, 13);
			this->label10->TabIndex = 12;
			this->label10->Text = L"Число разбиений по Y";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(12, 222);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(121, 13);
			this->label11->TabIndex = 5;
			this->label11->Text = L"Число разбиений по X";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(148, 219);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(64, 20);
			this->textBox9->TabIndex = 6;
			this->textBox9->Text = L"4";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(250, 42);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(89, 13);
			this->label13->TabIndex = 18;
			this->label13->Text = L"Число итераций";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(250, 72);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 13);
			this->label14->TabIndex = 19;
			this->label14->Text = L"Погрешность";
			// 
			// dataGridView3
			// 
			this->dataGridView3->BackgroundColor = System::Drawing::SystemColors::Window;
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Location = System::Drawing::Point(497, 250);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(524, 240);
			this->dataGridView3->TabIndex = 23;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1028, 518);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"Решение задачи Дирихле для уравнения Пуассона";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		double func(double x, double y)
		{
			return exp(1 - x * x - y * y);
		}
		/*private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
		{
			double w = Convert::ToDouble(textBox13->Text);
			if ((w >= 2) || (w <= 0))
			{
				return;
			}
			int Nmax = Convert::ToDouble(textBox5->Text);
			int S = 0;
			double eps = Convert::ToDouble(textBox1->Text);
			double eps_max = 0;
			double eps_cur = 0;
			double a2, k2, h2;
			int n = Convert::ToDouble(textBox2->Text);
			int m = Convert::ToDouble(textBox4->Text);
			this->dataGridView1->ColumnCount = n + 2;
			this->dataGridView1->RowCount = m + 2;
			double v[200][200];
			double f[200][200];
			double a = -1.0, b = 1.0, c = -1.0, d = 1.0;
			int i, j;
			int p, r;
			double v_old;
			double v_new;
			bool ff = false;
			double h = (b - a) / n;
			double k = (d - c) / m;
			h2 = (n / (b - a))*(n / (b - a));
			k2 = (m / (d - c))*(m / (d - c));
			a2 = -2 * (h2 + k2);
			for (int j = 0; j < m + 1; j++)
			{
				for (int i = 0; i < n + 1; i++)
				{
					f[i][j] = 4 * (-1 + (i*h - 1)*(i*h - 1) + (j*k - 1)*(j*k - 1))*exp(1 - (i*h - 1)*(i*h - 1) - (j*k - 1)*(j*k - 1));
				}
			}
			for (int j = 0; j < m + 1; j++)
			{
				v[0][j] = exp(-(j*k - 1)*(j*k - 1));
				v[n][j] = exp(-(j*k - 1)*(j*k - 1));
			}
			for (int i = 0; i < n + 1; i++)
			{
				v[i][0] = exp(-(i*h - 1)*(i*h - 1));
				v[i][m] = exp(-(i*h - 1)*(i*h - 1));
			}
			while (!ff)
			{
				eps_max = 0;
				for (j = 1; j < m; j++)
				{
					for (i = 1; i < n; i++)
					{
						v_old = v[i][j];
						v_new = -w * ((h2*(v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])));
						v_new = v_new + (1 - w)*a2*v[i][j] + w * f[i][j];;
						v_new = v_new / a2;
						eps_cur = fabs(v_old - v_new);
						if (eps_cur > eps_max)
						{
							eps_max = eps_cur;
						}
						v[i][j] = v_new;
					}
				}
				S++;
				if (eps_max < eps || S >= Nmax)
				{
					ff = true;
				}
			}
			double x = 0, y = 0;
			double maxeps = 0;
			double cureps = 0;
			for (j = 0; j < m + 1; j++)
			{
				for (i = 0; i < n + 1; i++)
				{
					y = j * k - 1;
					x = i * h - 1;
					cureps = fabs(func(x, y) - v[i][j]);
					if (cureps >= maxeps)
					{
						maxeps = cureps;
					}
				}
			}
			this->dataGridView1->ColumnCount = n + 2;
			this->dataGridView1->RowCount = m + 2;
			dataGridView1->Columns[0]->HeaderText = "i";
			dataGridView1->Rows[0]->HeaderCell->Value = "j";
			for (int i = 1; i <= n + 1; i++)
			{
				dataGridView1->Rows[0]->Cells[i]->Value = (i - 1)*h - 1;
				dataGridView1->Columns[i]->HeaderText = Convert::ToString(i - 1);
			}
			dataGridView1->RowHeadersVisible = true;
			p = 1;
			for (int j = m + 1; j >= 1; j--)
			{
				dataGridView1->Rows[p]->Cells[0]->Value = (j - 1)*k - 1;
				dataGridView1->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
				p++;
			}
			dataGridView1->Rows[0]->Cells[0]->Value = "Y/X";
			for (int j = 1; j < m + 2; j++)
			{
				for (int i = 1; i < n + 2; i++)
				{

					dataGridView1->Rows[j]->Cells[i]->Value = v[i - 1][m + 1 - j];
				}

			}
			this->textBox3->Text = Convert::ToString(S);
			this->textBox6->Text = Convert::ToString(maxeps);
			memset(v, 0, 40000 * sizeof(double));
			memset(f, 0, 40000 * sizeof(double));
		}*/
	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e)
	{
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		const double PI = 3.141592653589793238463;
		double w; //Convert::ToDouble(textBox13->Text);
		/*if ((w >= 2) || (w <= 0))
		{
			return;
		}
		*/
		int Nmax = Convert::ToDouble(textBox5->Text);
		int S = 0;
		double eps = Convert::ToDouble(textBox1->Text);
		double eps_max = 0;
		double eps_cur = 0;
		double a2, k2, h2;
		double l;
		int n = Convert::ToDouble(textBox2->Text);
		int m = Convert::ToDouble(textBox4->Text);
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		double v[200][200];
		double f[200][200];
		double a = -1.0, b = 1.0, c = -1.0, d = 1.0;
		int i, j;
		int p, r;
		double v_old;
		double v_new;
		bool ff = false;
		double h = (b - a) / n;
		double k = (d - c) / m;
		l = 2*pow(asin(PI/(2*n)),2);
		w = 2 / (1 + pow(l*(2-l), 0.5));

		if ((w >= 2) || (w <= 0))
		{
			return;
		}
		h2 = (n / (b - a)) * (n / (b - a));
		k2 = (m / (d - c)) * (m / (d - c));
		a2 = -2 * (h2 + k2);
		for (int j = 0; j < m + 1; j++)
		{
			for (int i = 0; i < n + 1; i++)
			{
				f[i][j] = 4 * (-1 + (i * h - 1) * (i * h - 1) + (j * k - 1) * (j * k - 1)) * exp(1 - (i * h - 1) * (i * h - 1) - (j * k - 1) * (j * k - 1));
			}
		}
		for (int j = 0; j < m + 1; j++)
		{
			v[0][j] = exp(-(j * k - 1) * (j * k - 1));
			v[n][j] = exp(-(j * k - 1) * (j * k - 1));
		}
		for (int i = 0; i < n + 1; i++)
		{
			v[i][0] = exp(-(i * h - 1) * (i * h - 1));
			v[i][m] = exp(-(i * h - 1) * (i * h - 1));
		}
		while (!ff)
		{
			eps_max = 0;
			for (j = 1; j < m; j++)
			{
				for (i = 1; i < n; i++)
				{
					v_old = v[i][j];
					v_new = -w * ((h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])));
					v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];;
					v_new = v_new / a2;
					eps_cur = fabs(v_old - v_new);
					if (eps_cur > eps_max)
					{
						eps_max = eps_cur;
					}
					v[i][j] = v_new;
				}
			}
			S++;
			if (eps_max < eps || S >= Nmax)
			{
				ff = true;
			}
		}
		double x = 0, y = 0;
		double maxeps = 0;
		double cureps = 0;
		for (j = 0; j < m + 1; j++)
		{
			for (i = 0; i < n + 1; i++)
			{
				y = j * k - 1;
				x = i * h - 1;
				cureps = fabs(func(x, y) - v[i][j]);
				if (cureps >= maxeps)
				{
					maxeps = cureps;
				}
			}
		}
		this->dataGridView1->ColumnCount = n + 2;
		this->dataGridView1->RowCount = m + 2;
		dataGridView1->Columns[0]->HeaderText = "i";
		dataGridView1->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView1->Rows[0]->Cells[i]->Value = (i - 1) * h - 1;
			dataGridView1->Columns[i]->HeaderText = Convert::ToString(i - 1);
		}
		dataGridView1->RowHeadersVisible = true;
		p = 1;
		for (int j = m + 1; j >= 1; j--)
		{
			dataGridView1->Rows[p]->Cells[0]->Value = (j - 1) * k - 1;
			dataGridView1->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}
		dataGridView1->Rows[0]->Cells[0]->Value = "Y/X";
		for (int j = 1; j < m + 2; j++)
		{
			for (int i = 1; i < n + 2; i++)
			{

				dataGridView1->Rows[j]->Cells[i]->Value = v[i - 1][m + 1 - j];
			}

		}
		this->textBox3->Text = Convert::ToString(S);
		this->textBox6->Text = Convert::ToString(maxeps);
		this->textBox13->Text = Convert::ToString(w);
		memset(v, 0, 40000 * sizeof(double));
		memset(f, 0, 40000 * sizeof(double));
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		const double PI  = 3.141592653589793238463;
		double w; //Convert::ToDouble(textBox14->Text);
		double w2; // Convert::ToDouble(textBox15->Text);
		/*if ((w >= 2) || (w <= 0))
		{
			return;
		}
		if ((w2 >= 2) || (w2 <= 0))
		{
			return;
		}
		*/
		int Nmax = Convert::ToDouble(textBox7->Text);
		int Nmax2 = Convert::ToDouble(textBox17->Text);
		int S = 0, SS = 0;
		double eps = Convert::ToDouble(textBox10->Text);
		double eps2 = Convert::ToDouble(textBox16->Text);
		double eps_max = 0;
		double eps_cur = 0;
		double eps_max2 = 0;
		double eps_cur2 = 0;
		double a2, k2, h2, aa2, kk2, hh2;
		double l;
		double l1;
		int n = Convert::ToDouble(textBox9->Text);
		int m = Convert::ToDouble(textBox8->Text);
		int N = 2 * n;
		int M = 2 * m;
		this->dataGridView2->ColumnCount = n + 2;
		this->dataGridView2->RowCount = m + 2;
		double v[100][100];
		double f[100][100];
		double v2[200][200];
		double f2[200][200];
		double a = -1.0, b = 1.0, c = -1.0, d = 1.0;
		int i, j;
		int p, r;
		double v_old, v_old2;
		double v_new, v_new2;
		bool ff = false, ff2 = false;
		double h = (b - a) / n;
		double k = (d - c) / m;
		l = 2 * pow(asin(PI / (2 * n)), 2);
		w = 2 / (1 + pow(l * (2 - l), 0.5));
		if ((w >= 2) || (w <= 0))
		{
			return;
		}
		double hh = h / 2;
		double kk = k / 2;
		l1 = 2 * pow(asin(PI / (2 * N)), 2);
		w2 = 2 / (1 + pow(l1 * (2 - l1), 0.5));
		if ((w2 >= 2) || (w2 <= 0))
		{
			return;
		}
		h2 = -(n / (b - a)) * (n / (b - a));
		k2 = -(m / (d - c)) * (m / (d - c));
		a2 = -2 * (h2 + k2);
		hh2 = -(1 / hh) * (1 / hh);
		kk2 = -(1 / kk) * (1 / kk);
		aa2 = -2 * (hh2 + kk2);
		for (int j = 0; j < m + 1; j++)
		{
			for (int i = 0; i < n + 1; i++)
			{
				f[i][j] = fabs((i * h - 1) * (i * h - 1) - (j * k - 1) * (j * k - 1));
			}
		}
		for (int j = 0; j < M + 1; j++)
		{
			for (int i = 0; i < N + 1; i++)
			{
				f2[i][j] = fabs((i * hh - 1) * (i * hh - 1) - (j * kk - 1) * (j * kk - 1));
			}
		}
		for (int j = 0; j < m + 1; j++)
		{
			v[0][j] = 1 - (j * k - 1) * (j * k - 1);
			v[n][j] = (1 - (j * k - 1) * (j * k - 1)) * exp(j * k - 1);
		}
		for (int i = 0; i < n + 1; i++)
		{
			v[i][0] = 1 - (i * h - 1) * (i * h - 1);
			v[i][m] = 1 - (i * h - 1) * (i * h - 1);
		}
		for (int j = 0; j < M + 1; j++)
		{
			v2[0][j] = 1 - (j * kk - 1) * (j * kk - 1);
			v2[N][j] = (1 - (j * kk - 1) * (j * kk - 1)) * exp(j * kk - 1);
		}
		for (int i = 0; i < N + 1; i++)
		{
			v2[i][0] = 1 - (i * hh - 1) * (i * hh - 1);
			v2[i][M] = 1 - (i * hh - 1) * (i * hh - 1);
		}
		while (!ff)
		{
			eps_max = 0;
			for (j = 1; j < m; j++)
			{
				for (i = 1; i < n; i++)
				{
					v_old = v[i][j];
					v_new = -w * ((h2 * (v[i + 1][j] + v[i - 1][j]) + k2 * (v[i][j + 1] + v[i][j - 1])));
					v_new = v_new + (1 - w) * a2 * v[i][j] + w * f[i][j];
					v_new = v_new / a2;
					eps_cur = fabs(v_old - v_new);
					if (eps_cur > eps_max)
					{
						eps_max = eps_cur;
					}
					v[i][j] = v_new;
				}
			}
			S++;
			if (eps_max < eps || S >= Nmax)
			{
				ff = true;
			}
		}
		while (!ff2)
		{
			eps_max2 = 0;
			for (j = 1; j < M; j++)
			{
				for (i = 1; i < N; i++)
				{
					v_old2 = v2[i][j];
					v_new2 = -w2 * ((hh2 * (v2[i + 1][j] + v2[i - 1][j]) + kk2 * (v2[i][j + 1] + v2[i][j - 1])));
					v_new2 = v_new2 + (1 - w2) * aa2 * v2[i][j] + w2 * f2[i][j];
					v_new2 = v_new2 / aa2;
					eps_cur2 = fabs(v_old2 - v_new2);
					if (eps_cur2 > eps_max2)
					{
						eps_max2 = eps_cur2;
					}
					v2[i][j] = v_new2;
				}
			}
			SS++;
			if (eps_max2 < eps2 || SS >= Nmax2)
			{
				ff2 = true;
			}
		}
		double x = 0, y = 0;
		double maxeps = 0.0;
		double cureps = 0;
		int ii = 0, jj = 0;
		int s1, s2;
		for (j = 0; j < m + 1; j++)
		{
			for (i = 0; i < n + 1; i++)
			{
				y = j * k - 1;
				x = i * h - 1;
				ii = 2 * i;
				jj = 2 * j;
				cureps = fabs(v2[ii][jj] - v[i][j]);
				if (cureps >= maxeps)
				{
					maxeps = cureps;
					s1 = i;
					s2 = j;
				}
			}
		}
		this->dataGridView2->ColumnCount = n + 2;
		this->dataGridView2->RowCount = m + 2;
		dataGridView2->Columns[0]->HeaderText = "i";
		dataGridView2->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= n + 1; i++)
		{
			dataGridView2->Rows[0]->Cells[i]->Value = (i - 1) * h - 1;
			dataGridView2->Columns[i]->HeaderText = Convert::ToString(i - 1);
		}
		dataGridView2->RowHeadersVisible = true;
		p = 1;
		for (int j = m + 1; j >= 1; j--)
		{
			dataGridView2->Rows[p]->Cells[0]->Value = (j - 1) * k - 1;
			dataGridView2->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}
		dataGridView2->Rows[0]->Cells[0]->Value = "Y/X";
		for (int j = 1; j < m + 2; j++)
		{
			for (int i = 1; i < n + 2; i++)
			{
				dataGridView2->Rows[j]->Cells[i]->Value = v[i - 1][m + 1 - j];
			}
		}

		this->dataGridView3->ColumnCount = N + 2;
		this->dataGridView3->RowCount = M + 2;
		dataGridView3->Columns[0]->HeaderText = "i";
		dataGridView3->Rows[0]->HeaderCell->Value = "j";
		for (int i = 1; i <= N + 1; i++)
		{
			dataGridView3->Rows[0]->Cells[i]->Value = (i - 1) * hh - 1;
			dataGridView3->Columns[i]->HeaderText = Convert::ToString(i - 1);
		}
		dataGridView3->RowHeadersVisible = true;
		p = 1;
		for (int j = M + 1; j >= 1; j--)
		{
			dataGridView3->Rows[p]->Cells[0]->Value = (j - 1) * kk - 1;
			dataGridView3->Rows[p]->HeaderCell->Value = Convert::ToString(j - 1);
			p++;
		}
		dataGridView3->Rows[0]->Cells[0]->Value = "Y/X";
		for (int j = 1; j < M + 2; j++)
		{
			for (int i = 1; i < N + 2; i++)
			{
				dataGridView3->Rows[j]->Cells[i]->Value = v2[i - 1][M + 1 - j];
			}
		}
		this->textBox12->Text = Convert::ToString(S);
		this->textBox11->Text = Convert::ToString(maxeps);
		this->textBox14->Text = Convert::ToString(w);
		this->textBox15->Text = Convert::ToString(w2);
		memset(v, 0, 40000 * sizeof(double));
		memset(f, 0, 40000 * sizeof(double));
	}
	private: System::Void textBox13_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};

}
