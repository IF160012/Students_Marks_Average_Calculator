#pragma once

#include <ctype.h>

namespace Students_Marks_Average_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login_Screen
	/// </summary>
	public ref class Login_Screen : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Form ^ main;
	public:
		Login_Screen(System::Windows::Forms::Form ^ o)
		{
			main = o;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login_Screen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ComboBox^  comboBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Button^  button3;

	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label12;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label22;



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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(12, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(187, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choose your Faculty:";
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::Window;
			this->comboBox1->DropDownWidth = 200;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"VDU (Vytautas Magnus University)" });
			this->comboBox1->Location = System::Drawing::Point(18, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(190, 24);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::comboBox1_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label2->Location = System::Drawing::Point(12, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Choose your University:";
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownWidth = 200;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Economics and Management", L"Natural Sciences",
					L"Humanities", L"Informatics", L"Catholic Theology", L"Arts", L"Music Academy", L"Political Science and Diplomacy", L"Social Sciences",
					L"Law"
			});
			this->comboBox2->Location = System::Drawing::Point(18, 82);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(191, 24);
			this->comboBox2->TabIndex = 3;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::comboBox2_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label3->Location = System::Drawing::Point(16, 164);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Choose your course:";
			// 
			// comboBox3
			// 
			this->comboBox3->DropDownWidth = 200;
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"I", L"II", L"III", L"IV" });
			this->comboBox3->Location = System::Drawing::Point(17, 187);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(193, 24);
			this->comboBox3->TabIndex = 5;
			this->comboBox3->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::comboBox3_SelectedIndexChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label4->Location = System::Drawing::Point(16, 214);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Choose semester:";
			// 
			// comboBox4
			// 
			this->comboBox4->DropDownWidth = 200;
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Autumn", L"Spring" });
			this->comboBox4->Location = System::Drawing::Point(17, 242);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(191, 24);
			this->comboBox4->TabIndex = 7;
			this->comboBox4->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::comboBox4_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1290, 611);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login_Screen::button1_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1204, 611);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(80, 30);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Login_Screen::button3_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(1001, 618);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 12;
			this->progressBar1->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label5->Location = System::Drawing::Point(14, 325);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Your main lectures list:";
			this->label5->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(20, 292);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(80, 30);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Yes";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Login_Screen::button4_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label6->Location = System::Drawing::Point(16, 269);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(286, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"I have selected right information:";
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Informatics Systems" });
			this->comboBox5->Location = System::Drawing::Point(18, 137);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(192, 24);
			this->comboBox5->TabIndex = 16;
			this->comboBox5->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::comboBox5_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label7->Location = System::Drawing::Point(16, 114);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(193, 20);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Choose your studies: ";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(396, 352);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 22);
			this->textBox1->TabIndex = 18;
			this->textBox1->Visible = false;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox1_KeyPress);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(543, 352);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(134, 22);
			this->textBox2->TabIndex = 19;
			this->textBox2->Visible = false;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(683, 352);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(104, 22);
			this->textBox3->TabIndex = 20;
			this->textBox3->Visible = false;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox3_KeyPress);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label8->Location = System::Drawing::Point(392, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(136, 18);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Laboratory [30%]";
			this->label8->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label9->Location = System::Drawing::Point(540, 329);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(127, 18);
			this->label9->TabIndex = 22;
			this->label9->Text = L"Mid-Term [20%]";
			this->label9->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label10->Location = System::Drawing::Point(680, 331);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(97, 18);
			this->label10->TabIndex = 23;
			this->label10->Text = L"Exam [50%]";
			this->label10->Visible = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(942, 352);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(92, 22);
			this->textBox4->TabIndex = 24;
			this->textBox4->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label11->Location = System::Drawing::Point(942, 329);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(95, 18);
			this->label11->TabIndex = 25;
			this->label11->Text = L"Final Grade";
			this->label11->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(396, 296);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 30);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Yes";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &Login_Screen::button5_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label12->Location = System::Drawing::Point(392, 269);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(240, 20);
			this->label12->TabIndex = 27;
			this->label12->Text = L"I want calculate my grades:";
			this->label12->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label13->Location = System::Drawing::Point(14, 473);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(260, 20);
			this->label13->TabIndex = 29;
			this->label13->Text = L"I have selected right lectures:";
			this->label13->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(16, 496);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 30);
			this->button6->TabIndex = 30;
			this->button6->Text = L"Yes";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Visible = false;
			this->button6->Click += gcnew System::EventHandler(this, &Login_Screen::button6_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label14->Location = System::Drawing::Point(393, 377);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(111, 18);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Test I [12.5%]";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label15->Location = System::Drawing::Point(519, 377);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(115, 18);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Test II [12.5%]";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label16->Location = System::Drawing::Point(650, 377);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(127, 18);
			this->label16->TabIndex = 33;
			this->label16->Text = L"Mid-Term [25%]";
			this->label16->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label17->Location = System::Drawing::Point(942, 377);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(95, 18);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Final Grade";
			this->label17->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label18->Location = System::Drawing::Point(792, 377);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(97, 18);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Exam [50%]";
			this->label18->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(396, 399);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(120, 22);
			this->textBox5->TabIndex = 36;
			this->textBox5->Visible = false;
			this->textBox5->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox5_KeyPress);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(522, 398);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(124, 22);
			this->textBox6->TabIndex = 37;
			this->textBox6->Visible = false;
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox6_KeyPress);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(652, 398);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(135, 22);
			this->textBox7->TabIndex = 38;
			this->textBox7->Visible = false;
			this->textBox7->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox7_KeyPress);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(795, 398);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(104, 22);
			this->textBox8->TabIndex = 39;
			this->textBox8->Visible = false;
			this->textBox8->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox8_KeyPress);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(942, 398);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(92, 22);
			this->textBox9->TabIndex = 40;
			this->textBox9->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label19->Location = System::Drawing::Point(395, 423);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(136, 18);
			this->label19->TabIndex = 41;
			this->label19->Text = L"Laboratory [30%]";
			this->label19->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label20->Location = System::Drawing::Point(546, 422);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(122, 18);
			this->label20->TabIndex = 42;
			this->label20->Text = L"Mid-Term[20%]";
			this->label20->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label21->Location = System::Drawing::Point(691, 423);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(97, 18);
			this->label21->TabIndex = 43;
			this->label21->Text = L"Exam [50%]";
			this->label21->Visible = false;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(396, 444);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(141, 22);
			this->textBox10->TabIndex = 44;
			this->textBox10->Visible = false;
			this->textBox10->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox10_KeyPress);
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(549, 443);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(128, 22);
			this->textBox11->TabIndex = 45;
			this->textBox11->Visible = false;
			this->textBox11->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox11_KeyPress);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(694, 443);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(101, 22);
			this->textBox12->TabIndex = 46;
			this->textBox12->Visible = false;
			this->textBox12->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::textBox12_KeyPress);
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(942, 443);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(92, 22);
			this->textBox13->TabIndex = 47;
			this->textBox13->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->label22->Location = System::Drawing::Point(942, 422);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(95, 18);
			this->label22->TabIndex = 48;
			this->label22->Text = L"Final Grade";
			this->label22->Visible = false;
			// 
			// Login_Screen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(1382, 653);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->comboBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Login_Screen";
			this->Text = L"Login_Screen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (progressBar1->Value == 0)
	{
		progressBar1->Value += 20;
	}
	if (progressBar1->Value == 20)
	{
		progressBar1->Value -= 20;
		progressBar1->Value += 20;
	}

}
private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox2->Text == "Economics and Management")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Natural Sciences")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Humanities")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Catholic Theology")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Arts")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Music Academy")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Political Science and Diplomacy")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Social Sciences")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Law")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox2->Text == "Informatics")
	{
		if (progressBar1->Value == 20)
		{
			progressBar1->Value += 20;
		}
		if (progressBar1->Value == 40)
		{
			progressBar1->Value -= 20;
			progressBar1->Value += 20;
		}
	}
}
private: System::Void comboBox3_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox3->Text == "I")
	{
		if (progressBar1->Value == 60)
		{
			progressBar1->Value += 20;
		}
		if (progressBar1->Value == 80)
		{
			progressBar1->Value -= 20;
			progressBar1->Value += 20;
		}
	}
	if (comboBox3->Text == "II")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox3->Text == "III")
	{
		MessageBox::Show("Work in progress");
	}
	if (comboBox3->Text == "IV")
	{
		MessageBox::Show("Work in progress");
	}
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox4->Text == "Spring")
	{
		MessageBox::Show("Work in progress");
	}
	if (progressBar1->Value == 80)
	{
		progressBar1->Value += 20;
	}
	if (progressBar1->Value == 100)
	{
		progressBar1->Value -= 20;
		progressBar1->Value += 20;
	}
}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		if (progressBar1->Value == 100)
		{
			label5->Show();
		}
		if (comboBox1->Text == "VDU (Vytautas Magnus University)" && comboBox2->Text == "Informatics" && comboBox5->Text == "Informatics Systems" && comboBox3->Text == "I"&& comboBox4->Text == "Autumn")
		{
		System::Windows::Forms::ComboBox ^ comboBox8 = (gcnew System::Windows::Forms::ComboBox());;
		comboBox8->DropDownWidth = 200;
		comboBox8->FormattingEnabled = true;
		comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"INFN1004 Informatics" });
		comboBox8->Location = System::Drawing::Point(15, 285);
		comboBox8->Name = L"comboBox8";
		comboBox8->Size = System::Drawing::Size(185, 24);
		comboBox8->TabIndex = 7;
		this->Controls->Add(comboBox8);
		//Second lecture
		System::Windows::Forms::ComboBox ^ comboBox6 = (gcnew System::Windows::Forms::ComboBox());;
		comboBox6->DropDownWidth = 200;
		comboBox6->FormattingEnabled = true;
		comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"MAT1021 Math 1" });
		comboBox6->Location = System::Drawing::Point(15, 320);
		comboBox6->Name = L"comboBox6";
		comboBox6->Size = System::Drawing::Size(185, 24);
		comboBox6->TabIndex = 7;
		this->Controls->Add(comboBox6);
		//Third lecture
		System::Windows::Forms::ComboBox ^ comboBox7 = (gcnew System::Windows::Forms::ComboBox());;
		comboBox7->DropDownWidth = 200;
		comboBox7->FormattingEnabled = true;
		comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"INFN1003 Fundamentals of Programming" });
		comboBox7->Location = System::Drawing::Point(15, 355);
		comboBox7->Name = L"comboBox7";
		comboBox7->Size = System::Drawing::Size(185, 24);
		comboBox7->TabIndex = 7;
		this->Controls->Add(comboBox7);
		//
		button6->Show();
		label13->Show();
	}
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	main->Show();
	this->Hide();
}
private: System::Void comboBox5_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (progressBar1->Value == 40)
	{
		progressBar1->Value += 20;
	}
	if (progressBar1->Value == 60)
	{
		progressBar1->Value -= 20;
		progressBar1->Value += 20;
	}
}
private: System::Void textBox1_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox1->TextLength; i++)
	{
		textBox1->MaxLength = 2;
		if (!isdigit(textBox1->Text[i]))
		{
			textBox1->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	label12->Show();
	button5->Show();
	label8->Show();
	label9->Show();
	label10->Show();
	label11->Show();
	textBox1->Show();
	textBox2->Show();
	textBox3->Show();
	textBox4->Show();
	textBox5->Show();
	textBox6->Show();
	textBox7->Show();
	textBox8->Show();
	textBox9->Show();
	textBox10->Show();
	textBox11->Show();
	textBox12->Show();
	textBox13->Show();
	label14->Show();
	label15->Show();
	label16->Show();
	label17->Show();
	label18->Show();
	label19->Show();
	label20->Show();
	label21->Show();
	label22->Show();
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox2->TextLength; i++)
	{
		textBox2->MaxLength = 2;
		if (!isdigit(textBox2->Text[i]))
		{
			textBox2->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox3_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox3->TextLength; i++)
	{
		textBox3->MaxLength = 2;
		if (!isdigit(textBox3->Text[i]))
		{
			textBox3->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox5_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox5->TextLength; i++)
	{
		textBox5->MaxLength = 2;
		if (!isdigit(textBox5->Text[i]))
		{
			textBox5->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox6_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox6->TextLength; i++)
	{
		textBox6->MaxLength = 2;
		if (!isdigit(textBox6->Text[i]))
		{
			textBox6->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox7_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox7->TextLength; i++)
	{
		textBox7->MaxLength = 2;
		if (!isdigit(textBox7->Text[i]))
		{
			textBox7->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox8_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox8->TextLength; i++)
	{
		textBox8->MaxLength = 2;
		if (!isdigit(textBox8->Text[i]))
		{
			textBox8->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox10_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox10->TextLength; i++)
	{
		textBox10->MaxLength = 2;
		if (!isdigit(textBox10->Text[i]))
		{
			textBox10->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox11_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox11->TextLength; i++)
	{
		textBox11->MaxLength = 2;
		if (!isdigit(textBox11->Text[i]))
		{
			textBox11->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void textBox12_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < textBox12->TextLength; i++)
	{
		textBox12->MaxLength = 2;
		if (!isdigit(textBox12->Text[i]))
		{
			textBox12->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	int InfLab;
	InfLab = System::Convert::ToInt32(textBox1->Text);
	if (InfLab > 10 )
	{
		MessageBox::Show("Informatics Labarotory mark wrong input. Input must be less or equal to 10");
	}
	int InfMid;
	InfMid = System::Convert::ToInt32(textBox2->Text);
	if (InfMid > 10 )
	{
		MessageBox::Show("Informatics Mid-Term mark wrong input. Input must be less or equal to 10");
	}
	int InfExa;
	InfExa = System::Convert::ToInt32(textBox3->Text);
	if (InfExa > 10)
	{
		MessageBox::Show("Informatics Exam mark wrong input. Input must be less or equal to 10");
	}
	int MathTest1;
	MathTest1 = System::Convert::ToInt32(textBox5->Text);
	if (MathTest1 > 10)
	{
		MessageBox::Show("Math Test 1 mark wrong input. Input must be less or equal to 10");
	}
	int MathTest2;
	MathTest2 = System::Convert::ToInt32(textBox6->Text);
	if (MathTest2 > 10)
	{
		MessageBox::Show("Math Test 2 mark wrong input. Input must be less or equal to 10");
	}
	int MathMid;
	MathMid = System::Convert::ToInt32(textBox7->Text);
	if (MathMid > 10)
	{
		MessageBox::Show("Math Mid-Term mark wrong input. Input must be less or equal to 10");
	}
	int MathExam;
	MathExam = System::Convert::ToInt32(textBox8->Text);
	if (MathExam > 10)
	{
		MessageBox::Show("Math Exam mark wrong input. Input must be less or equal to 10");
	}
	int ProgLab;
	ProgLab = System::Convert::ToInt32(textBox10->Text);
	if (ProgLab > 10)
	{
		MessageBox::Show("Programming Labarotory mark wrong input. Input must be less or equal to 10");
	}
	int ProgMid;
	ProgMid = System::Convert::ToInt32(textBox11->Text);
	if (ProgMid > 10)
	{
		MessageBox::Show("Programming Mid-Term mark wrong input. Input must be less or equal to 10");
	}
	int ProgExam;
	ProgExam = System::Convert::ToInt32(textBox12->Text);
	if (ProgExam > 10)
	{
		MessageBox::Show("Programming Exam mark wrong input. Input must be less or equal to 10");
	}
	if(InfLab <= 10 && InfMid <=10 && InfExa <= 10)
	{
	int InfFinal;
	InfFinal = (InfLab*0.3) + (InfMid*0.2) + (InfExa*0.5);
	textBox4->Text = System::Convert::ToString(InfFinal);
	}
	else
	{
		MessageBox::Show("Bad input calculation of Informatics Final Grade is not aviable");
	}
	if (MathTest1 <= 10 && MathTest2 <= 10 && MathMid <= 10 && MathExam <= 10)
	{
		int MathFinal;
		MathFinal = (MathTest1*0.125) + (MathTest2*0.125) + (MathMid*0.25) + (MathExam*0.5);
		textBox9->Text = System::Convert::ToString(MathFinal);
	}
	else
	{
		MessageBox::Show("Bad input calculation of Math final grade is not aviable");
	}
	if (ProgLab <= 10 && ProgMid <= 10 && ProgExam <= 10)
	{
		int ProgFinal;
		ProgFinal = (ProgLab*0.3) + (ProgMid*0.2) + (ProgExam*0.5);
		textBox13->Text = System::Convert::ToString(ProgFinal);
	}
	else
	{
		MessageBox::Show("Bad input calculation of Programming Final Grade is not aviable");
	}
}
};
}
