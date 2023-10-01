#pragma once

#include "User.h"
#include "RegistrationForm.h"
#include "AdminForm.h"
#include "UserForm.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for LogInForm
	/// </summary>
	public ref class LogInForm : public System::Windows::Forms::Form
	{
	public:
		LogInForm(void)
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
		~LogInForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogIn;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnCreateNew;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LogInForm::typeid));
			this->btnLogIn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnCreateNew = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLogIn
			// 
			this->btnLogIn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnLogIn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogIn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogIn->ForeColor = System::Drawing::Color::White;
			this->btnLogIn->Location = System::Drawing::Point(231, 371);
			this->btnLogIn->Name = L"btnLogIn";
			this->btnLogIn->Size = System::Drawing::Size(270, 38);
			this->btnLogIn->TabIndex = 0;
			this->btnLogIn->Text = L"LOG IN";
			this->btnLogIn->UseVisualStyleBackColor = false;
			this->btnLogIn->Click += gcnew System::EventHandler(this, &LogInForm::btnLogIn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(169, 43);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(345, 150);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightGray;
			this->panel1->Controls->Add(this->tbUsername);
			this->panel1->Location = System::Drawing::Point(231, 263);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(270, 40);
			this->panel1->TabIndex = 2;
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::LightGray;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbUsername->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tbUsername->Location = System::Drawing::Point(4, 6);
			this->tbUsername->Margin = System::Windows::Forms::Padding(0);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(264, 23);
			this->tbUsername->TabIndex = 0;
			this->tbUsername->Text = L"Username";
			this->tbUsername->Click += gcnew System::EventHandler(this, &LogInForm::tbUsername_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightGray;
			this->panel2->Controls->Add(this->tbPassword);
			this->panel2->Location = System::Drawing::Point(231, 317);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(270, 40);
			this->panel2->TabIndex = 3;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::LightGray;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbPassword->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tbPassword->Location = System::Drawing::Point(4, 6);
			this->tbPassword->Margin = System::Windows::Forms::Padding(0);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(264, 23);
			this->tbPassword->TabIndex = 0;
			this->tbPassword->Text = L"Password";
			this->tbPassword->UseSystemPasswordChar = true;
			this->tbPassword->Click += gcnew System::EventHandler(this, &LogInForm::tbPassword_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(178, 317);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(40, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(178, 263);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(322, 446);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(177, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Don\'t have an account\?";
			// 
			// btnCreateNew
			// 
			this->btnCreateNew->BackColor = System::Drawing::Color::Transparent;
			this->btnCreateNew->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnCreateNew->FlatAppearance->BorderSize = 0;
			this->btnCreateNew->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreateNew->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnCreateNew->Location = System::Drawing::Point(341, 469);
			this->btnCreateNew->Name = L"btnCreateNew";
			this->btnCreateNew->Size = System::Drawing::Size(173, 36);
			this->btnCreateNew->TabIndex = 7;
			this->btnCreateNew->Text = L"Create an account.";
			this->btnCreateNew->UseVisualStyleBackColor = false;
			this->btnCreateNew->Click += gcnew System::EventHandler(this, &LogInForm::btnCreateNew_Click);
			// 
			// LogInForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(678, 574);
			this->Controls->Add(this->btnCreateNew);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnLogIn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"LogInForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LogInForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnCreateNew_Click(System::Object^ sender, System::EventArgs^ e) {

			
	RegistrationForm^ regForm = gcnew RegistrationForm;
	this->Hide();
	regForm->Show();

}

	public: User^ user = nullptr;
private: System::Void btnLogIn_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ username = this->tbUsername->Text;
	String^ password = this->tbPassword->Text;

	if (username->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter email and password.");
		return;
	}

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ connString1 = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
		SqlConnection sqlConn1(connString1);
		sqlConn1.Open();

		String^ sqlQuery = "SELECT * FROM adminTable WHERE username=@username AND password=@password;";
		SqlCommand command(sqlQuery, % sqlConn1);
		command.Parameters->AddWithValue("@username", username);
		command.Parameters->AddWithValue("@password", password);
		SqlDataReader^ reader = command.ExecuteReader();

		String^ sqlQuery1 = "SELECT * FROM userTable WHERE username=@username AND password=@password;";
		SqlCommand command1(sqlQuery1, % sqlConn);
		command1.Parameters->AddWithValue("@username", username);
		command1.Parameters->AddWithValue("@password", password);
		SqlDataReader^ reader1 = command1.ExecuteReader();


		if (reader->Read()) {
			user = gcnew User;
			user->id = reader->GetInt32(0);
			user->username = reader->GetString(1);
			user->password = reader->GetString(2); 


			AdminForm^ adminform = gcnew AdminForm();
			this->Hide();
			adminform->Show();



		}
		else if (reader1->Read()) {
			user = gcnew User;
			user->id = reader1->GetInt32(0);
			user->username = reader1->GetString(5);
			user->password = reader1->GetString(6);


			UserForm^ userform = gcnew UserForm;
			this->Hide();
			userform->Show();

		}
		else {
			MessageBox::Show("Email or Password is inccccrect");
		}

	}
	catch (Exception^ e) {
		MessageBox::Show("Bobo wala ka nakakonek sa Database");
	}

}


private: System::Void tbUsername_Click(System::Object^ sender, System::EventArgs^ e) {

	

		tbUsername->Text = "";

	
}
private: System::Void tbPassword_Click(System::Object^ sender, System::EventArgs^ e) {


		tbPassword->Text = "";

	
}
};
}
