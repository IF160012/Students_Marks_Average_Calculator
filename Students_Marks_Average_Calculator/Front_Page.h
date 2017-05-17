#pragma once

#include "Login_Screen.h"

namespace Students_Marks_Average_Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Front_Page
	/// </summary>
	public ref class Front_Page : public System::Windows::Forms::Form
	{
	public:
		Front_Page(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			MessageBox::Show("Program was made by: Mantas Silanskas, IF160012");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Front_Page()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  Form1_Kaunas_Label;
	protected:

	private: System::Windows::Forms::Button^  Form1_Next_Button;

	private: System::Windows::Forms::Button^  Form1_Exit_Button;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Front_Page::typeid));
			this->Form1_Kaunas_Label = (gcnew System::Windows::Forms::Label());
			this->Form1_Next_Button = (gcnew System::Windows::Forms::Button());
			this->Form1_Exit_Button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Form1_Kaunas_Label
			// 
			this->Form1_Kaunas_Label->AutoSize = true;
			this->Form1_Kaunas_Label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(186)));
			this->Form1_Kaunas_Label->Location = System::Drawing::Point(1235, 620);
			this->Form1_Kaunas_Label->Name = L"Form1_Kaunas_Label";
			this->Form1_Kaunas_Label->Size = System::Drawing::Size(135, 24);
			this->Form1_Kaunas_Label->TabIndex = 0;
			this->Form1_Kaunas_Label->Text = L"Kaunas, 2017";
			// 
			// Form1_Next_Button
			// 
			this->Form1_Next_Button->Location = System::Drawing::Point(1290, 12);
			this->Form1_Next_Button->Name = L"Form1_Next_Button";
			this->Form1_Next_Button->Size = System::Drawing::Size(80, 30);
			this->Form1_Next_Button->TabIndex = 1;
			this->Form1_Next_Button->Text = L"Next";
			this->Form1_Next_Button->UseVisualStyleBackColor = true;
			this->Form1_Next_Button->Click += gcnew System::EventHandler(this, &Front_Page::Form1_Next_Button_Click);
			// 
			// Form1_Exit_Button
			// 
			this->Form1_Exit_Button->Location = System::Drawing::Point(1290, 48);
			this->Form1_Exit_Button->Name = L"Form1_Exit_Button";
			this->Form1_Exit_Button->Size = System::Drawing::Size(80, 30);
			this->Form1_Exit_Button->TabIndex = 2;
			this->Form1_Exit_Button->Text = L"Exit";
			this->Form1_Exit_Button->UseVisualStyleBackColor = true;
			this->Form1_Exit_Button->Click += gcnew System::EventHandler(this, &Front_Page::Form1_Exit_Button_Click);
			// 
			// Front_Page
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Maroon;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(1382, 653);
			this->Controls->Add(this->Form1_Exit_Button);
			this->Controls->Add(this->Form1_Next_Button);
			this->Controls->Add(this->Form1_Kaunas_Label);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Front_Page";
			this->Text = L"Front_Page";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Form1_Next_Button_Click(System::Object^  sender, System::EventArgs^  e) {
		Login_Screen ^ Login = gcnew Login_Screen(this);
		Login->Show();
		this->Hide();
	}
private: System::Void Form1_Exit_Button_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
