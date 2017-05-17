#pragma once


#include <ctype.h>
#include <string>


namespace Students_Marks_Average_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace std;
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
	private: System::Windows::Forms::Label^  Faculty_Label;
	protected:

	private: System::Windows::Forms::ComboBox^  Form2_University_ComboBox;
	protected:

	private: System::Windows::Forms::Label^  Form2_University_Label;
	private: System::Windows::Forms::ComboBox^  Form2_Faculty_ComboBox;
	private: System::Windows::Forms::Label^  Course_Label;



	private: System::Windows::Forms::ComboBox^  Form2_Course_ComboBox;
	private: System::Windows::Forms::Label^  Semester_Label;



	private: System::Windows::Forms::ComboBox^  comboBox4;
	private: System::Windows::Forms::Button^  Exit_Button;

	private: System::Windows::Forms::Button^  Back_Button;


	private: System::Windows::Forms::ProgressBar^  Form2_DefaultInformation_ProgressBar;
	private: System::Windows::Forms::Label^  Lectures_List;



	private: System::Windows::Forms::Button^  Right_Information_Button;

	private: System::Windows::Forms::Label^  Right_Information;


	private: System::Windows::Forms::ComboBox^  Form2_Studies_ComboBox;
	private: System::Windows::Forms::Label^  Studies_Label;


	private: System::Windows::Forms::TextBox^  Informatics_Laboratory_Grade;
	private: System::Windows::Forms::TextBox^  Informatics_Mid_Term_Grade;
	private: System::Windows::Forms::TextBox^  Informatics_Exam_Grade;



	private: System::Windows::Forms::Label^  Informatics_Laboratory_Label;

	private: System::Windows::Forms::Label^  Informatics_Mid_Term_Label;

	private: System::Windows::Forms::Label^  Informatics_Exam_Label;
	private: System::Windows::Forms::TextBox^  Informatics_Final_Grade;




	private: System::Windows::Forms::Label^  Informatics_Final_Grade_Label;

	private: System::Windows::Forms::Button^  Calculate_Grades_Button;

	private: System::Windows::Forms::Label^  Calculate_Grades;

	private: System::Windows::Forms::Label^  Right_Lectures;
	private: System::Windows::Forms::Button^  Right_Lectures_Button;
	private: System::Windows::Forms::Label^  Math_Test1_Label;

	private: System::Windows::Forms::Label^  Math_Test2_Label;
	private: System::Windows::Forms::Label^  Math_Mid_Term_Label;
	private: System::Windows::Forms::Label^  Math_Final_Grade_Label;









	private: System::Windows::Forms::Label^  Math_Exam_Label;
	private: System::Windows::Forms::TextBox^  Math_Test1_Grade;
	private: System::Windows::Forms::TextBox^  Math_Test2_Grade;
	private: System::Windows::Forms::TextBox^  Math_Mid_Term_Grade;
	private: System::Windows::Forms::TextBox^  Math_Exam_Grade;
	private: System::Windows::Forms::TextBox^  Math_Final_Grade;
	private: System::Windows::Forms::Label^  Programming_Laboratory_Label;
	private: System::Windows::Forms::Label^  Programming_Mid_Term_Label;
private: System::Windows::Forms::Label^  Programming_Exam_Label;
private: System::Windows::Forms::TextBox^  Programming_Laboratory_Grade;
private: System::Windows::Forms::TextBox^  Programming_Mid_Term_Grade;
private: System::Windows::Forms::TextBox^  Programming_Exam_Grade;
private: System::Windows::Forms::TextBox^  Programming_Final_Grade;













private: System::Windows::Forms::Label^  Programming_Final_Grade_Label;





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
			this->Faculty_Label = (gcnew System::Windows::Forms::Label());
			this->Form2_University_ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Form2_University_Label = (gcnew System::Windows::Forms::Label());
			this->Form2_Faculty_ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Course_Label = (gcnew System::Windows::Forms::Label());
			this->Form2_Course_ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Semester_Label = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->Exit_Button = (gcnew System::Windows::Forms::Button());
			this->Back_Button = (gcnew System::Windows::Forms::Button());
			this->Form2_DefaultInformation_ProgressBar = (gcnew System::Windows::Forms::ProgressBar());
			this->Lectures_List = (gcnew System::Windows::Forms::Label());
			this->Right_Information_Button = (gcnew System::Windows::Forms::Button());
			this->Right_Information = (gcnew System::Windows::Forms::Label());
			this->Form2_Studies_ComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->Studies_Label = (gcnew System::Windows::Forms::Label());
			this->Informatics_Laboratory_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Informatics_Mid_Term_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Informatics_Exam_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Informatics_Laboratory_Label = (gcnew System::Windows::Forms::Label());
			this->Informatics_Mid_Term_Label = (gcnew System::Windows::Forms::Label());
			this->Informatics_Exam_Label = (gcnew System::Windows::Forms::Label());
			this->Informatics_Final_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Informatics_Final_Grade_Label = (gcnew System::Windows::Forms::Label());
			this->Calculate_Grades_Button = (gcnew System::Windows::Forms::Button());
			this->Calculate_Grades = (gcnew System::Windows::Forms::Label());
			this->Right_Lectures = (gcnew System::Windows::Forms::Label());
			this->Right_Lectures_Button = (gcnew System::Windows::Forms::Button());
			this->Math_Test1_Label = (gcnew System::Windows::Forms::Label());
			this->Math_Test2_Label = (gcnew System::Windows::Forms::Label());
			this->Math_Mid_Term_Label = (gcnew System::Windows::Forms::Label());
			this->Math_Final_Grade_Label = (gcnew System::Windows::Forms::Label());
			this->Math_Exam_Label = (gcnew System::Windows::Forms::Label());
			this->Math_Test1_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Math_Test2_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Math_Mid_Term_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Math_Exam_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Math_Final_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Programming_Laboratory_Label = (gcnew System::Windows::Forms::Label());
			this->Programming_Mid_Term_Label = (gcnew System::Windows::Forms::Label());
			this->Programming_Exam_Label = (gcnew System::Windows::Forms::Label());
			this->Programming_Laboratory_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Programming_Mid_Term_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Programming_Exam_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Programming_Final_Grade = (gcnew System::Windows::Forms::TextBox());
			this->Programming_Final_Grade_Label = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// Faculty_Label
			// 
			this->Faculty_Label->AutoSize = true;
			this->Faculty_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Faculty_Label->Location = System::Drawing::Point(12, 59);
			this->Faculty_Label->Name = L"Faculty_Label";
			this->Faculty_Label->Size = System::Drawing::Size(187, 20);
			this->Faculty_Label->TabIndex = 0;
			this->Faculty_Label->Text = L"Choose your Faculty:";
			// 
			// Form2_University_ComboBox
			// 
			this->Form2_University_ComboBox->BackColor = System::Drawing::SystemColors::Window;
			this->Form2_University_ComboBox->DropDownWidth = 200;
			this->Form2_University_ComboBox->FormattingEnabled = true;
			this->Form2_University_ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"VDU (Vytautas Magnus University)" });
			this->Form2_University_ComboBox->Location = System::Drawing::Point(18, 32);
			this->Form2_University_ComboBox->Name = L"Form2_University_ComboBox";
			this->Form2_University_ComboBox->Size = System::Drawing::Size(190, 24);
			this->Form2_University_ComboBox->TabIndex = 1;
			this->Form2_University_ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::Form2_University_ComboBox_SelectedIndexChanged);
			// 
			// Form2_University_Label
			// 
			this->Form2_University_Label->AutoSize = true;
			this->Form2_University_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->Form2_University_Label->Location = System::Drawing::Point(12, 9);
			this->Form2_University_Label->Name = L"Form2_University_Label";
			this->Form2_University_Label->Size = System::Drawing::Size(210, 20);
			this->Form2_University_Label->TabIndex = 2;
			this->Form2_University_Label->Text = L"Choose your University:";
			// 
			// Form2_Faculty_ComboBox
			// 
			this->Form2_Faculty_ComboBox->DropDownWidth = 200;
			this->Form2_Faculty_ComboBox->FormattingEnabled = true;
			this->Form2_Faculty_ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Economics and Management", L"Natural Sciences",
					L"Humanities", L"Informatics", L"Catholic Theology", L"Arts", L"Music Academy", L"Political Science and Diplomacy", L"Social Sciences",
					L"Law"
			});
			this->Form2_Faculty_ComboBox->Location = System::Drawing::Point(18, 82);
			this->Form2_Faculty_ComboBox->Name = L"Form2_Faculty_ComboBox";
			this->Form2_Faculty_ComboBox->Size = System::Drawing::Size(191, 24);
			this->Form2_Faculty_ComboBox->TabIndex = 3;
			this->Form2_Faculty_ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::Form2_Faculty_ComboBox_SelectedIndexChanged);
			// 
			// Course_Label
			// 
			this->Course_Label->AutoSize = true;
			this->Course_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Course_Label->Location = System::Drawing::Point(16, 164);
			this->Course_Label->Name = L"Course_Label";
			this->Course_Label->Size = System::Drawing::Size(183, 20);
			this->Course_Label->TabIndex = 4;
			this->Course_Label->Text = L"Choose your course:";
			// 
			// Form2_Course_ComboBox
			// 
			this->Form2_Course_ComboBox->DropDownWidth = 200;
			this->Form2_Course_ComboBox->FormattingEnabled = true;
			this->Form2_Course_ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"I", L"II", L"III", L"IV" });
			this->Form2_Course_ComboBox->Location = System::Drawing::Point(17, 187);
			this->Form2_Course_ComboBox->Name = L"Form2_Course_ComboBox";
			this->Form2_Course_ComboBox->Size = System::Drawing::Size(193, 24);
			this->Form2_Course_ComboBox->TabIndex = 5;
			this->Form2_Course_ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::Form2_Course_ComboBox_SelectedIndexChanged);
			// 
			// Semester_Label
			// 
			this->Semester_Label->AutoSize = true;
			this->Semester_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Semester_Label->Location = System::Drawing::Point(16, 214);
			this->Semester_Label->Name = L"Semester_Label";
			this->Semester_Label->Size = System::Drawing::Size(162, 20);
			this->Semester_Label->TabIndex = 6;
			this->Semester_Label->Text = L"Choose semester:";
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
			// Exit_Button
			// 
			this->Exit_Button->Location = System::Drawing::Point(1290, 611);
			this->Exit_Button->Name = L"Exit_Button";
			this->Exit_Button->Size = System::Drawing::Size(80, 30);
			this->Exit_Button->TabIndex = 8;
			this->Exit_Button->Text = L"Exit";
			this->Exit_Button->UseVisualStyleBackColor = true;
			this->Exit_Button->Click += gcnew System::EventHandler(this, &Login_Screen::Exit_Button_Click);
			// 
			// Back_Button
			// 
			this->Back_Button->Location = System::Drawing::Point(1204, 611);
			this->Back_Button->Name = L"Back_Button";
			this->Back_Button->Size = System::Drawing::Size(80, 30);
			this->Back_Button->TabIndex = 10;
			this->Back_Button->Text = L"Back";
			this->Back_Button->UseVisualStyleBackColor = true;
			this->Back_Button->Click += gcnew System::EventHandler(this, &Login_Screen::Back_Button_Click);
			// 
			// Form2_DefaultInformation_ProgressBar
			// 
			this->Form2_DefaultInformation_ProgressBar->Location = System::Drawing::Point(1001, 618);
			this->Form2_DefaultInformation_ProgressBar->Name = L"Form2_DefaultInformation_ProgressBar";
			this->Form2_DefaultInformation_ProgressBar->Size = System::Drawing::Size(100, 23);
			this->Form2_DefaultInformation_ProgressBar->TabIndex = 12;
			this->Form2_DefaultInformation_ProgressBar->Visible = false;
			// 
			// Lectures_List
			// 
			this->Lectures_List->AutoSize = true;
			this->Lectures_List->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Lectures_List->Location = System::Drawing::Point(14, 325);
			this->Lectures_List->Name = L"Lectures_List";
			this->Lectures_List->Size = System::Drawing::Size(205, 20);
			this->Lectures_List->TabIndex = 13;
			this->Lectures_List->Text = L"Your main lectures list:";
			this->Lectures_List->Visible = false;
			// 
			// Right_Information_Button
			// 
			this->Right_Information_Button->Location = System::Drawing::Point(20, 292);
			this->Right_Information_Button->Name = L"Right_Information_Button";
			this->Right_Information_Button->Size = System::Drawing::Size(80, 30);
			this->Right_Information_Button->TabIndex = 14;
			this->Right_Information_Button->Text = L"Yes";
			this->Right_Information_Button->UseVisualStyleBackColor = true;
			this->Right_Information_Button->Click += gcnew System::EventHandler(this, &Login_Screen::Right_Information_Button_Click);
			// 
			// Right_Information
			// 
			this->Right_Information->AutoSize = true;
			this->Right_Information->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Right_Information->Location = System::Drawing::Point(16, 269);
			this->Right_Information->Name = L"Right_Information";
			this->Right_Information->Size = System::Drawing::Size(286, 20);
			this->Right_Information->TabIndex = 15;
			this->Right_Information->Text = L"I have selected right information:";
			// 
			// Form2_Studies_ComboBox
			// 
			this->Form2_Studies_ComboBox->FormattingEnabled = true;
			this->Form2_Studies_ComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Informatics Systems" });
			this->Form2_Studies_ComboBox->Location = System::Drawing::Point(18, 137);
			this->Form2_Studies_ComboBox->Name = L"Form2_Studies_ComboBox";
			this->Form2_Studies_ComboBox->Size = System::Drawing::Size(192, 24);
			this->Form2_Studies_ComboBox->TabIndex = 16;
			this->Form2_Studies_ComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Login_Screen::Form2_Studies_ComboBox_SelectedIndexChanged);
			// 
			// Studies_Label
			// 
			this->Studies_Label->AutoSize = true;
			this->Studies_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Studies_Label->Location = System::Drawing::Point(16, 114);
			this->Studies_Label->Name = L"Studies_Label";
			this->Studies_Label->Size = System::Drawing::Size(193, 20);
			this->Studies_Label->TabIndex = 17;
			this->Studies_Label->Text = L"Choose your studies: ";
			// 
			// Informatics_Laboratory_Grade
			// 
			this->Informatics_Laboratory_Grade->Location = System::Drawing::Point(396, 352);
			this->Informatics_Laboratory_Grade->Name = L"Informatics_Laboratory_Grade";
			this->Informatics_Laboratory_Grade->Size = System::Drawing::Size(141, 22);
			this->Informatics_Laboratory_Grade->TabIndex = 18;
			this->Informatics_Laboratory_Grade->Visible = false;
			this->Informatics_Laboratory_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Informatics_Laboratory_Grade_KeyPress);
			// 
			// Informatics_Mid_Term_Grade
			// 
			this->Informatics_Mid_Term_Grade->Location = System::Drawing::Point(543, 352);
			this->Informatics_Mid_Term_Grade->Name = L"Informatics_Mid_Term_Grade";
			this->Informatics_Mid_Term_Grade->Size = System::Drawing::Size(134, 22);
			this->Informatics_Mid_Term_Grade->TabIndex = 19;
			this->Informatics_Mid_Term_Grade->Visible = false;
			this->Informatics_Mid_Term_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Informatics_Mid_Term_Grade_KeyPress);
			// 
			// Informatics_Exam_Grade
			// 
			this->Informatics_Exam_Grade->Location = System::Drawing::Point(683, 352);
			this->Informatics_Exam_Grade->Name = L"Informatics_Exam_Grade";
			this->Informatics_Exam_Grade->Size = System::Drawing::Size(104, 22);
			this->Informatics_Exam_Grade->TabIndex = 20;
			this->Informatics_Exam_Grade->Visible = false;
			this->Informatics_Exam_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Informatics_Exam_Grade_KeyPress);
			// 
			// Informatics_Laboratory_Label
			// 
			this->Informatics_Laboratory_Label->AutoSize = true;
			this->Informatics_Laboratory_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->Informatics_Laboratory_Label->Location = System::Drawing::Point(392, 329);
			this->Informatics_Laboratory_Label->Name = L"Informatics_Laboratory_Label";
			this->Informatics_Laboratory_Label->Size = System::Drawing::Size(136, 18);
			this->Informatics_Laboratory_Label->TabIndex = 21;
			this->Informatics_Laboratory_Label->Text = L"Laboratory [30%]";
			this->Informatics_Laboratory_Label->Visible = false;
			// 
			// Informatics_Mid_Term_Label
			// 
			this->Informatics_Mid_Term_Label->AutoSize = true;
			this->Informatics_Mid_Term_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->Informatics_Mid_Term_Label->Location = System::Drawing::Point(540, 329);
			this->Informatics_Mid_Term_Label->Name = L"Informatics_Mid_Term_Label";
			this->Informatics_Mid_Term_Label->Size = System::Drawing::Size(127, 18);
			this->Informatics_Mid_Term_Label->TabIndex = 22;
			this->Informatics_Mid_Term_Label->Text = L"Mid-Term [20%]";
			this->Informatics_Mid_Term_Label->Visible = false;
			// 
			// Informatics_Exam_Label
			// 
			this->Informatics_Exam_Label->AutoSize = true;
			this->Informatics_Exam_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Informatics_Exam_Label->Location = System::Drawing::Point(680, 331);
			this->Informatics_Exam_Label->Name = L"Informatics_Exam_Label";
			this->Informatics_Exam_Label->Size = System::Drawing::Size(97, 18);
			this->Informatics_Exam_Label->TabIndex = 23;
			this->Informatics_Exam_Label->Text = L"Exam [50%]";
			this->Informatics_Exam_Label->Visible = false;
			// 
			// Informatics_Final_Grade
			// 
			this->Informatics_Final_Grade->Location = System::Drawing::Point(942, 352);
			this->Informatics_Final_Grade->Name = L"Informatics_Final_Grade";
			this->Informatics_Final_Grade->Size = System::Drawing::Size(92, 22);
			this->Informatics_Final_Grade->TabIndex = 24;
			this->Informatics_Final_Grade->Visible = false;
			// 
			// Informatics_Final_Grade_Label
			// 
			this->Informatics_Final_Grade_Label->AutoSize = true;
			this->Informatics_Final_Grade_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->Informatics_Final_Grade_Label->Location = System::Drawing::Point(942, 329);
			this->Informatics_Final_Grade_Label->Name = L"Informatics_Final_Grade_Label";
			this->Informatics_Final_Grade_Label->Size = System::Drawing::Size(95, 18);
			this->Informatics_Final_Grade_Label->TabIndex = 25;
			this->Informatics_Final_Grade_Label->Text = L"Final Grade";
			this->Informatics_Final_Grade_Label->Visible = false;
			// 
			// Calculate_Grades_Button
			// 
			this->Calculate_Grades_Button->Location = System::Drawing::Point(396, 296);
			this->Calculate_Grades_Button->Name = L"Calculate_Grades_Button";
			this->Calculate_Grades_Button->Size = System::Drawing::Size(80, 30);
			this->Calculate_Grades_Button->TabIndex = 26;
			this->Calculate_Grades_Button->Text = L"Yes";
			this->Calculate_Grades_Button->UseVisualStyleBackColor = true;
			this->Calculate_Grades_Button->Visible = false;
			this->Calculate_Grades_Button->Click += gcnew System::EventHandler(this, &Login_Screen::Calculate_Grades_Button_Click);
			// 
			// Calculate_Grades
			// 
			this->Calculate_Grades->AutoSize = true;
			this->Calculate_Grades->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Calculate_Grades->Location = System::Drawing::Point(392, 269);
			this->Calculate_Grades->Name = L"Calculate_Grades";
			this->Calculate_Grades->Size = System::Drawing::Size(240, 20);
			this->Calculate_Grades->TabIndex = 27;
			this->Calculate_Grades->Text = L"I want calculate my grades:";
			this->Calculate_Grades->Visible = false;
			// 
			// Right_Lectures
			// 
			this->Right_Lectures->AutoSize = true;
			this->Right_Lectures->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Right_Lectures->Location = System::Drawing::Point(14, 473);
			this->Right_Lectures->Name = L"Right_Lectures";
			this->Right_Lectures->Size = System::Drawing::Size(260, 20);
			this->Right_Lectures->TabIndex = 29;
			this->Right_Lectures->Text = L"I have selected right lectures:";
			this->Right_Lectures->Visible = false;
			// 
			// Right_Lectures_Button
			// 
			this->Right_Lectures_Button->Location = System::Drawing::Point(16, 496);
			this->Right_Lectures_Button->Name = L"Right_Lectures_Button";
			this->Right_Lectures_Button->Size = System::Drawing::Size(80, 30);
			this->Right_Lectures_Button->TabIndex = 30;
			this->Right_Lectures_Button->Text = L"Yes";
			this->Right_Lectures_Button->UseVisualStyleBackColor = true;
			this->Right_Lectures_Button->Visible = false;
			this->Right_Lectures_Button->Click += gcnew System::EventHandler(this, &Login_Screen::button6_Click);
			// 
			// Math_Test1_Label
			// 
			this->Math_Test1_Label->AutoSize = true;
			this->Math_Test1_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Math_Test1_Label->Location = System::Drawing::Point(393, 377);
			this->Math_Test1_Label->Name = L"Math_Test1_Label";
			this->Math_Test1_Label->Size = System::Drawing::Size(111, 18);
			this->Math_Test1_Label->TabIndex = 31;
			this->Math_Test1_Label->Text = L"Test I [12.5%]";
			this->Math_Test1_Label->Visible = false;
			// 
			// Math_Test2_Label
			// 
			this->Math_Test2_Label->AutoSize = true;
			this->Math_Test2_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Math_Test2_Label->Location = System::Drawing::Point(519, 377);
			this->Math_Test2_Label->Name = L"Math_Test2_Label";
			this->Math_Test2_Label->Size = System::Drawing::Size(115, 18);
			this->Math_Test2_Label->TabIndex = 32;
			this->Math_Test2_Label->Text = L"Test II [12.5%]";
			this->Math_Test2_Label->Visible = false;
			// 
			// Math_Mid_Term_Label
			// 
			this->Math_Mid_Term_Label->AutoSize = true;
			this->Math_Mid_Term_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Math_Mid_Term_Label->Location = System::Drawing::Point(650, 377);
			this->Math_Mid_Term_Label->Name = L"Math_Mid_Term_Label";
			this->Math_Mid_Term_Label->Size = System::Drawing::Size(127, 18);
			this->Math_Mid_Term_Label->TabIndex = 33;
			this->Math_Mid_Term_Label->Text = L"Mid-Term [25%]";
			this->Math_Mid_Term_Label->Visible = false;
			// 
			// Math_Final_Grade_Label
			// 
			this->Math_Final_Grade_Label->AutoSize = true;
			this->Math_Final_Grade_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Math_Final_Grade_Label->Location = System::Drawing::Point(942, 377);
			this->Math_Final_Grade_Label->Name = L"Math_Final_Grade_Label";
			this->Math_Final_Grade_Label->Size = System::Drawing::Size(95, 18);
			this->Math_Final_Grade_Label->TabIndex = 34;
			this->Math_Final_Grade_Label->Text = L"Final Grade";
			this->Math_Final_Grade_Label->Visible = false;
			// 
			// Math_Exam_Label
			// 
			this->Math_Exam_Label->AutoSize = true;
			this->Math_Exam_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Math_Exam_Label->Location = System::Drawing::Point(792, 377);
			this->Math_Exam_Label->Name = L"Math_Exam_Label";
			this->Math_Exam_Label->Size = System::Drawing::Size(97, 18);
			this->Math_Exam_Label->TabIndex = 35;
			this->Math_Exam_Label->Text = L"Exam [50%]";
			this->Math_Exam_Label->Visible = false;
			// 
			// Math_Test1_Grade
			// 
			this->Math_Test1_Grade->Location = System::Drawing::Point(396, 399);
			this->Math_Test1_Grade->Name = L"Math_Test1_Grade";
			this->Math_Test1_Grade->Size = System::Drawing::Size(120, 22);
			this->Math_Test1_Grade->TabIndex = 36;
			this->Math_Test1_Grade->Visible = false;
			this->Math_Test1_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Math_Test1_Grade_KeyPress);
			// 
			// Math_Test2_Grade
			// 
			this->Math_Test2_Grade->Location = System::Drawing::Point(522, 398);
			this->Math_Test2_Grade->Name = L"Math_Test2_Grade";
			this->Math_Test2_Grade->Size = System::Drawing::Size(124, 22);
			this->Math_Test2_Grade->TabIndex = 37;
			this->Math_Test2_Grade->Visible = false;
			this->Math_Test2_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Math_Test2_Grade_KeyPress);
			// 
			// Math_Mid_Term_Grade
			// 
			this->Math_Mid_Term_Grade->Location = System::Drawing::Point(652, 398);
			this->Math_Mid_Term_Grade->Name = L"Math_Mid_Term_Grade";
			this->Math_Mid_Term_Grade->Size = System::Drawing::Size(135, 22);
			this->Math_Mid_Term_Grade->TabIndex = 38;
			this->Math_Mid_Term_Grade->Visible = false;
			this->Math_Mid_Term_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Math_Mid_Term_Grade_KeyPress);
			// 
			// Math_Exam_Grade
			// 
			this->Math_Exam_Grade->Location = System::Drawing::Point(795, 398);
			this->Math_Exam_Grade->Name = L"Math_Exam_Grade";
			this->Math_Exam_Grade->Size = System::Drawing::Size(104, 22);
			this->Math_Exam_Grade->TabIndex = 39;
			this->Math_Exam_Grade->Visible = false;
			this->Math_Exam_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Math_Exam_Grade_KeyPress);
			// 
			// Math_Final_Grade
			// 
			this->Math_Final_Grade->Location = System::Drawing::Point(942, 398);
			this->Math_Final_Grade->Name = L"Math_Final_Grade";
			this->Math_Final_Grade->Size = System::Drawing::Size(92, 22);
			this->Math_Final_Grade->TabIndex = 40;
			this->Math_Final_Grade->Visible = false;
			// 
			// Programming_Laboratory_Label
			// 
			this->Programming_Laboratory_Label->AutoSize = true;
			this->Programming_Laboratory_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->Programming_Laboratory_Label->Location = System::Drawing::Point(395, 423);
			this->Programming_Laboratory_Label->Name = L"Programming_Laboratory_Label";
			this->Programming_Laboratory_Label->Size = System::Drawing::Size(136, 18);
			this->Programming_Laboratory_Label->TabIndex = 41;
			this->Programming_Laboratory_Label->Text = L"Laboratory [30%]";
			this->Programming_Laboratory_Label->Visible = false;
			// 
			// Programming_Mid_Term_Label
			// 
			this->Programming_Mid_Term_Label->AutoSize = true;
			this->Programming_Mid_Term_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->Programming_Mid_Term_Label->Location = System::Drawing::Point(546, 422);
			this->Programming_Mid_Term_Label->Name = L"Programming_Mid_Term_Label";
			this->Programming_Mid_Term_Label->Size = System::Drawing::Size(122, 18);
			this->Programming_Mid_Term_Label->TabIndex = 42;
			this->Programming_Mid_Term_Label->Text = L"Mid-Term[20%]";
			this->Programming_Mid_Term_Label->Visible = false;
			// 
			// Programming_Exam_Label
			// 
			this->Programming_Exam_Label->AutoSize = true;
			this->Programming_Exam_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Programming_Exam_Label->Location = System::Drawing::Point(691, 423);
			this->Programming_Exam_Label->Name = L"Programming_Exam_Label";
			this->Programming_Exam_Label->Size = System::Drawing::Size(97, 18);
			this->Programming_Exam_Label->TabIndex = 43;
			this->Programming_Exam_Label->Text = L"Exam [50%]";
			this->Programming_Exam_Label->Visible = false;
			// 
			// Programming_Laboratory_Grade
			// 
			this->Programming_Laboratory_Grade->Location = System::Drawing::Point(396, 444);
			this->Programming_Laboratory_Grade->Name = L"Programming_Laboratory_Grade";
			this->Programming_Laboratory_Grade->Size = System::Drawing::Size(141, 22);
			this->Programming_Laboratory_Grade->TabIndex = 44;
			this->Programming_Laboratory_Grade->Visible = false;
			this->Programming_Laboratory_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Programming_Laboratory_Grade_KeyPress);
			// 
			// Programming_Mid_Term_Grade
			// 
			this->Programming_Mid_Term_Grade->Location = System::Drawing::Point(549, 443);
			this->Programming_Mid_Term_Grade->Name = L"Programming_Mid_Term_Grade";
			this->Programming_Mid_Term_Grade->Size = System::Drawing::Size(128, 22);
			this->Programming_Mid_Term_Grade->TabIndex = 45;
			this->Programming_Mid_Term_Grade->Visible = false;
			this->Programming_Mid_Term_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Programming_Mid_Term_Grade_KeyPress);
			// 
			// Programming_Exam_Grade
			// 
			this->Programming_Exam_Grade->Location = System::Drawing::Point(694, 443);
			this->Programming_Exam_Grade->Name = L"Programming_Exam_Grade";
			this->Programming_Exam_Grade->Size = System::Drawing::Size(101, 22);
			this->Programming_Exam_Grade->TabIndex = 46;
			this->Programming_Exam_Grade->Visible = false;
			this->Programming_Exam_Grade->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Login_Screen::Programming_Exam_Grade_KeyPress);
			// 
			// Programming_Final_Grade
			// 
			this->Programming_Final_Grade->Location = System::Drawing::Point(942, 443);
			this->Programming_Final_Grade->Name = L"Programming_Final_Grade";
			this->Programming_Final_Grade->Size = System::Drawing::Size(92, 22);
			this->Programming_Final_Grade->TabIndex = 47;
			this->Programming_Final_Grade->Visible = false;
			// 
			// Programming_Final_Grade_Label
			// 
			this->Programming_Final_Grade_Label->AutoSize = true;
			this->Programming_Final_Grade_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(186)));
			this->Programming_Final_Grade_Label->Location = System::Drawing::Point(942, 422);
			this->Programming_Final_Grade_Label->Name = L"Programming_Final_Grade_Label";
			this->Programming_Final_Grade_Label->Size = System::Drawing::Size(95, 18);
			this->Programming_Final_Grade_Label->TabIndex = 48;
			this->Programming_Final_Grade_Label->Text = L"Final Grade";
			this->Programming_Final_Grade_Label->Visible = false;
			// 
			// Login_Screen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Bisque;
			this->ClientSize = System::Drawing::Size(1382, 653);
			this->Controls->Add(this->Programming_Final_Grade_Label);
			this->Controls->Add(this->Programming_Final_Grade);
			this->Controls->Add(this->Programming_Exam_Grade);
			this->Controls->Add(this->Programming_Mid_Term_Grade);
			this->Controls->Add(this->Programming_Laboratory_Grade);
			this->Controls->Add(this->Programming_Exam_Label);
			this->Controls->Add(this->Programming_Mid_Term_Label);
			this->Controls->Add(this->Programming_Laboratory_Label);
			this->Controls->Add(this->Math_Final_Grade);
			this->Controls->Add(this->Math_Exam_Grade);
			this->Controls->Add(this->Math_Mid_Term_Grade);
			this->Controls->Add(this->Math_Test2_Grade);
			this->Controls->Add(this->Math_Test1_Grade);
			this->Controls->Add(this->Math_Exam_Label);
			this->Controls->Add(this->Math_Final_Grade_Label);
			this->Controls->Add(this->Math_Mid_Term_Label);
			this->Controls->Add(this->Math_Test2_Label);
			this->Controls->Add(this->Math_Test1_Label);
			this->Controls->Add(this->Right_Lectures_Button);
			this->Controls->Add(this->Right_Lectures);
			this->Controls->Add(this->Calculate_Grades);
			this->Controls->Add(this->Calculate_Grades_Button);
			this->Controls->Add(this->Informatics_Final_Grade_Label);
			this->Controls->Add(this->Informatics_Final_Grade);
			this->Controls->Add(this->Informatics_Exam_Label);
			this->Controls->Add(this->Informatics_Mid_Term_Label);
			this->Controls->Add(this->Informatics_Laboratory_Label);
			this->Controls->Add(this->Informatics_Exam_Grade);
			this->Controls->Add(this->Informatics_Mid_Term_Grade);
			this->Controls->Add(this->Informatics_Laboratory_Grade);
			this->Controls->Add(this->Studies_Label);
			this->Controls->Add(this->Form2_Studies_ComboBox);
			this->Controls->Add(this->Right_Information);
			this->Controls->Add(this->Right_Information_Button);
			this->Controls->Add(this->Lectures_List);
			this->Controls->Add(this->Form2_DefaultInformation_ProgressBar);
			this->Controls->Add(this->Back_Button);
			this->Controls->Add(this->Exit_Button);
			this->Controls->Add(this->comboBox4);
			this->Controls->Add(this->Semester_Label);
			this->Controls->Add(this->Form2_Course_ComboBox);
			this->Controls->Add(this->Course_Label);
			this->Controls->Add(this->Form2_Faculty_ComboBox);
			this->Controls->Add(this->Form2_University_Label);
			this->Controls->Add(this->Form2_University_ComboBox);
			this->Controls->Add(this->Faculty_Label);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Login_Screen";
			this->Text = L"Login_Screen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Exit_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void comboBox4_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox4->Text == "Spring")
	{
		MessageBox::Show("Work in progress");
	}
	if (Form2_DefaultInformation_ProgressBar->Value == 80)
	{
		Form2_DefaultInformation_ProgressBar->Value += 20;
	}
	if (Form2_DefaultInformation_ProgressBar->Value == 100)
	{
		Form2_DefaultInformation_ProgressBar->Value -= 20;
		Form2_DefaultInformation_ProgressBar->Value += 20;
	}
}
	private: System::Void Right_Information_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Form2_DefaultInformation_ProgressBar->Value == 100)
		{
			Lectures_List->Show();
		}
		if (Form2_University_ComboBox->Text == "VDU (Vytautas Magnus University)" && Form2_Faculty_ComboBox->Text == "Informatics" && Form2_Studies_ComboBox->Text == "Informatics Systems" && Form2_Course_ComboBox->Text == "I"&& comboBox4->Text == "Autumn")
		{
		System::Windows::Forms::ComboBox ^ comboBox8 = (gcnew System::Windows::Forms::ComboBox());;
		comboBox8->DropDownWidth = 200;
		comboBox8->FormattingEnabled = true;
		comboBox8->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"INFN1004 Informatics" });
		comboBox8->Location = System::Drawing::Point(15, 285);
		comboBox8->Name = L"Lecture_1_ComboBox";
		comboBox8->Size = System::Drawing::Size(185, 24);
		comboBox8->TabIndex = 7;
		this->Controls->Add(comboBox8);
		//Second lecture
		System::Windows::Forms::ComboBox ^ comboBox6 = (gcnew System::Windows::Forms::ComboBox());;
		comboBox6->DropDownWidth = 200;
		comboBox6->FormattingEnabled = true;
		comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"MAT1021 Math 1" });
		comboBox6->Location = System::Drawing::Point(15, 320);
		comboBox6->Name = L"Lecture_2_ComboBox";
		comboBox6->Size = System::Drawing::Size(185, 24);
		comboBox6->TabIndex = 7;
		this->Controls->Add(comboBox6);
		//Third lecture
		System::Windows::Forms::ComboBox ^ comboBox7 = (gcnew System::Windows::Forms::ComboBox());;
		comboBox7->DropDownWidth = 200;
		comboBox7->FormattingEnabled = true;
		comboBox7->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"INFN1003 Fundamentals of Programming" });
		comboBox7->Location = System::Drawing::Point(15, 355);
		comboBox7->Name = L"Lecture_3_ComboBox";
		comboBox7->Size = System::Drawing::Size(185, 24);
		comboBox7->TabIndex = 7;
		this->Controls->Add(comboBox7);
		//
		Right_Lectures_Button->Show();
		Right_Lectures->Show();
	}
}
private: System::Void Back_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	main->Show();
	this->Hide();
}
private: System::Void Informatics_Laboratory_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Informatics_Laboratory_Grade->TextLength; i++)
	{
		Informatics_Laboratory_Grade->MaxLength = 2;
		if (!isdigit(Informatics_Laboratory_Grade->Text[i]))
		{
			Informatics_Laboratory_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Calculate_Grades->Show();
	Calculate_Grades_Button->Show();
	Informatics_Laboratory_Label->Show();
	Informatics_Mid_Term_Label->Show();
	Informatics_Exam_Label->Show();
	Informatics_Final_Grade_Label->Show();
	Informatics_Laboratory_Grade->Show();
	Informatics_Mid_Term_Grade->Show();
	Informatics_Exam_Grade->Show();
	Informatics_Final_Grade->Show();
	Math_Test1_Grade->Show();
	Math_Test2_Grade->Show();
	Math_Mid_Term_Grade->Show();
	Math_Exam_Grade->Show();
	Math_Final_Grade->Show();
	Programming_Laboratory_Grade->Show();
	Programming_Mid_Term_Grade->Show();
	Programming_Exam_Grade->Show();
	Programming_Final_Grade->Show();
	Math_Test1_Label->Show();
	Math_Test2_Label->Show();
	Math_Mid_Term_Label->Show();
	Math_Final_Grade_Label->Show();
	Math_Exam_Label->Show();
	Programming_Laboratory_Label->Show();
	Programming_Mid_Term_Label->Show();
	Programming_Exam_Label->Show();
	Programming_Final_Grade_Label->Show();
}
private: System::Void Informatics_Mid_Term_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Informatics_Mid_Term_Grade->TextLength; i++)
	{
		Informatics_Mid_Term_Grade->MaxLength = 2;
		if (!isdigit(Informatics_Mid_Term_Grade->Text[i]))
		{
			Informatics_Mid_Term_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Informatics_Exam_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Informatics_Exam_Grade->TextLength; i++)
	{
		Informatics_Exam_Grade->MaxLength = 2;
		if (!isdigit(Informatics_Exam_Grade->Text[i]))
		{
			Informatics_Exam_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Math_Test1_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Math_Test1_Grade->TextLength; i++)
	{
		Math_Test1_Grade->MaxLength = 2;
		if (!isdigit(Math_Test1_Grade->Text[i]))
		{
			Math_Test1_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Math_Test2_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Math_Test2_Grade->TextLength; i++)
	{
		Math_Test2_Grade->MaxLength = 2;
		if (!isdigit(Math_Test2_Grade->Text[i]))
		{
			Math_Test2_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Math_Mid_Term_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Math_Mid_Term_Grade->TextLength; i++)
	{
		Math_Mid_Term_Grade->MaxLength = 2;
		if (!isdigit(Math_Mid_Term_Grade->Text[i]))
		{
			Math_Mid_Term_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Math_Exam_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Math_Exam_Grade->TextLength; i++)
	{
		Math_Exam_Grade->MaxLength = 2;
		if (!isdigit(Math_Exam_Grade->Text[i]))
		{
			Math_Exam_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Programming_Laboratory_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Programming_Laboratory_Grade->TextLength; i++)
	{
		Programming_Laboratory_Grade->MaxLength = 2;
		if (!isdigit(Programming_Laboratory_Grade->Text[i]))
		{
			Programming_Laboratory_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Programming_Mid_Term_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Programming_Mid_Term_Grade->TextLength; i++)
	{
		Programming_Mid_Term_Grade->MaxLength = 2;
		if (!isdigit(Programming_Mid_Term_Grade->Text[i]))
		{
			Programming_Mid_Term_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: System::Void Programming_Exam_Grade_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
	for (int i = 0; i < Programming_Exam_Grade->TextLength; i++)
	{
		Programming_Exam_Grade->MaxLength = 2;
		if (!isdigit(Programming_Exam_Grade->Text[i]))
		{
			Programming_Exam_Grade->Text = "";
			MessageBox::Show("Wrong input");
		}
	}
}
private: void Informatics_Errors(bool Informatics_Condition, System::String Errors_Messages){
	if(Informatics_Condition)
		{
			MessageBox::Show(Errors_Messages);
			/*MessageBox::Show("Informatics Labarotory mark wrong input. Input must be less or equal to 10");
			MessageBox::Show("Informatics Mid-Term mark wrong input. Input must be less or equal to 10");
			MessageBox::Show("Informatics Exam mark wrong input. Input must be less or equal to 10");*/
		}
	}
private: System::Void Calculate_Grades_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	int InfLab;
	InfLab = System::Convert::ToInt32(Informatics_Laboratory_Grade->Text);
	int InfMid;
	InfMid = System::Convert::ToInt32(Informatics_Mid_Term_Grade->Text);
	int InfExa;
	InfExa = System::Convert::ToInt32(Informatics_Exam_Grade->Text);
	Informatics_Errors(InfLab > 10, L"Informatics Labarotory mark wrong input. Input must be less or equal to 10");
	Informatics_Errors(InfMid > 10, L"Informatics Mid-Term mark wrong input. Input must be less or equal to 10");
	Informatics_Errors(InfExa > 10, L"Informatics Exam mark wrong input. Input must be less or equal to 10");
	int MathTest1;
	MathTest1 = System::Convert::ToInt32(Math_Test1_Grade->Text);
	if (MathTest1 > 10)
	{
		MessageBox::Show("Math Test 1 mark wrong input. Input must be less or equal to 10");
	}
	int MathTest2;
	MathTest2 = System::Convert::ToInt32(Math_Test2_Grade->Text);
	if (MathTest2 > 10)
	{
		MessageBox::Show("Math Test 2 mark wrong input. Input must be less or equal to 10");
	}
	int MathMid;
	MathMid = System::Convert::ToInt32(Math_Mid_Term_Grade->Text);
	if (MathMid > 10)
	{
		MessageBox::Show("Math Mid-Term mark wrong input. Input must be less or equal to 10");
	}
	int MathExam;
	MathExam = System::Convert::ToInt32(Math_Exam_Grade->Text);
	if (MathExam > 10)
	{
		MessageBox::Show("Math Exam mark wrong input. Input must be less or equal to 10");
	}
	int ProgLab;
	ProgLab = System::Convert::ToInt32(Programming_Laboratory_Grade->Text);
	if (ProgLab > 10)
	{
		MessageBox::Show("Programming Labarotory mark wrong input. Input must be less or equal to 10");
	}
	int ProgMid;
	ProgMid = System::Convert::ToInt32(Programming_Mid_Term_Grade->Text);
	if (ProgMid > 10)
	{
		MessageBox::Show("Programming Mid-Term mark wrong input. Input must be less or equal to 10");
	}
	int ProgExam;
	ProgExam = System::Convert::ToInt32(Programming_Exam_Grade->Text);
	if (ProgExam > 10)
	{
		MessageBox::Show("Programming Exam mark wrong input. Input must be less or equal to 10");
	}
	if(InfLab <= 10 && InfMid <=10 && InfExa <= 10)
	{
	int InfFinal;
	InfFinal = (InfLab*0.3) + (InfMid*0.2) + (InfExa*0.5);
	Informatics_Final_Grade->Text = System::Convert::ToString(InfFinal);
	}
	else
	{
		MessageBox::Show("Bad input calculation of Informatics Final Grade is not aviable");
	}
	if (MathTest1 <= 10 && MathTest2 <= 10 && MathMid <= 10 && MathExam <= 10)
	{
		int MathFinal;
		MathFinal = (MathTest1*0.125) + (MathTest2*0.125) + (MathMid*0.25) + (MathExam*0.5);
		Math_Final_Grade->Text = System::Convert::ToString(MathFinal);
	}
	else
	{
		MessageBox::Show("Bad input calculation of Math final grade is not aviable");
	}
	if (ProgLab <= 10 && ProgMid <= 10 && ProgExam <= 10)
	{
		int ProgFinal;
		ProgFinal = (ProgLab*0.3) + (ProgMid*0.2) + (ProgExam*0.5);
		Programming_Final_Grade->Text = System::Convert::ToString(ProgFinal);
	}
	else
	{
		MessageBox::Show("Bad input calculation of Programming Final Grade is not aviable");
	}
}
private: System::Void Form2_University_ComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Form2_DefaultInformation_ProgressBar->Value == 0)
	{
		Form2_DefaultInformation_ProgressBar->Value += 20;
	}
	if (Form2_DefaultInformation_ProgressBar->Value == 20)
	{
		Form2_DefaultInformation_ProgressBar->Value -= 20;
		Form2_DefaultInformation_ProgressBar->Value += 20;
	}

}
private: System::Void Form2_Faculty_ComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	switch (Form2_Faculty_ComboBox->Text != "Informatics")
	{
	case 1:
		MessageBox::Show("Work in progress");
		break;
	}
	if (Form2_Faculty_ComboBox->Text == "Informatics")
	{
		if (Form2_DefaultInformation_ProgressBar->Value == 20)
		{
			Form2_DefaultInformation_ProgressBar->Value += 20;
		}
		if (Form2_DefaultInformation_ProgressBar->Value == 40)
		{
			Form2_DefaultInformation_ProgressBar->Value -= 20;
			Form2_DefaultInformation_ProgressBar->Value += 20;
		}
	}
}
private: System::Void Form2_Studies_ComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Form2_DefaultInformation_ProgressBar->Value == 40)
	{
		Form2_DefaultInformation_ProgressBar->Value += 20;
	}
	if (Form2_DefaultInformation_ProgressBar->Value == 60)
	{
		Form2_DefaultInformation_ProgressBar->Value -= 20;
		Form2_DefaultInformation_ProgressBar->Value += 20;
	}
}
private: System::Void Form2_Course_ComboBox_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	if (Form2_Course_ComboBox->Text == "I")
	{

		if (Form2_DefaultInformation_ProgressBar->Value == 60)
		{
			Form2_DefaultInformation_ProgressBar->Value += 20;
		}
		if (Form2_DefaultInformation_ProgressBar->Value == 80)
		{
			Form2_DefaultInformation_ProgressBar->Value -= 20;
			Form2_DefaultInformation_ProgressBar->Value += 20;
		}
	}
	switch (Form2_Course_ComboBox->Text != "I")
	{
	case 1:
		MessageBox::Show("Work in progress");
		break;
	}
}
};
}
