#pragma once

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for RegistrationForm
	/// </summary>
	public ref class RegistrationForm : public System::Windows::Forms::Form
	{
	public:
		RegistrationForm(void)
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
		~RegistrationForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ tbLastName;


	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ tbFirstName;

	private: System::Windows::Forms::TextBox^ tbStudentId;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ tbUminEmail;

	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::TextBox^ tbConfirm;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ btnCreate;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegistrationForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->btnCreate = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->tbConfirm = (gcnew System::Windows::Forms::TextBox());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->tbUminEmail = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbStudentId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->linkLabel1);
			this->panel1->Controls->Add(this->btnCreate);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->panel9);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->panel7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(580, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(548, 725);
			this->panel1->TabIndex = 0;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->linkLabel1->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->linkLabel1->Location = System::Drawing::Point(20, 667);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(54, 22);
			this->linkLabel1->TabIndex = 16;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Login";
			// 
			// btnCreate
			// 
			this->btnCreate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnCreate->FlatAppearance->BorderSize = 0;
			this->btnCreate->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCreate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreate->ForeColor = System::Drawing::Color::White;
			this->btnCreate->Location = System::Drawing::Point(308, 648);
			this->btnCreate->Margin = System::Windows::Forms::Padding(0);
			this->btnCreate->Name = L"btnCreate";
			this->btnCreate->Size = System::Drawing::Size(210, 40);
			this->btnCreate->TabIndex = 15;
			this->btnCreate->Text = L"Create Account";
			this->btnCreate->UseVisualStyleBackColor = false;
			this->btnCreate->Click += gcnew System::EventHandler(this, &RegistrationForm::btnCreate_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label8->Location = System::Drawing::Point(28, 533);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 22);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Confirm Password";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(28, 438);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(89, 22);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Password";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(28, 342);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(92, 22);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Username";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(28, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(150, 22);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Umindanao Email";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(255, 180);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(96, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Last Name";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(28, 180);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 22);
			this->label3->TabIndex = 9;
			this->label3->Text = L"First Name";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(28, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 22);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Student ID";
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel9->Controls->Add(this->tbConfirm);
			this->panel9->Location = System::Drawing::Point(29, 562);
			this->panel9->Name = L"panel9";
			this->panel9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel9->Size = System::Drawing::Size(492, 40);
			this->panel9->TabIndex = 7;
			// 
			// tbConfirm
			// 
			this->tbConfirm->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->tbConfirm->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbConfirm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbConfirm->Location = System::Drawing::Point(4, 8);
			this->tbConfirm->Name = L"tbConfirm";
			this->tbConfirm->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbConfirm->Size = System::Drawing::Size(485, 23);
			this->tbConfirm->TabIndex = 0;
			this->tbConfirm->UseSystemPasswordChar = true;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel8->Controls->Add(this->tbPassword);
			this->panel8->Location = System::Drawing::Point(29, 468);
			this->panel8->Name = L"panel8";
			this->panel8->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel8->Size = System::Drawing::Size(492, 40);
			this->panel8->TabIndex = 6;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbPassword->Location = System::Drawing::Point(4, 8);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbPassword->Size = System::Drawing::Size(485, 23);
			this->tbPassword->TabIndex = 0;
			this->tbPassword->UseSystemPasswordChar = true;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel7->Controls->Add(this->tbUsername);
			this->panel7->Location = System::Drawing::Point(29, 374);
			this->panel7->Name = L"panel7";
			this->panel7->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel7->Size = System::Drawing::Size(492, 40);
			this->panel7->TabIndex = 5;
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbUsername->Location = System::Drawing::Point(4, 8);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbUsername->Size = System::Drawing::Size(485, 23);
			this->tbUsername->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel6->Controls->Add(this->tbUminEmail);
			this->panel6->Location = System::Drawing::Point(29, 291);
			this->panel6->Name = L"panel6";
			this->panel6->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel6->Size = System::Drawing::Size(492, 40);
			this->panel6->TabIndex = 4;
			// 
			// tbUminEmail
			// 
			this->tbUminEmail->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->tbUminEmail->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUminEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbUminEmail->Location = System::Drawing::Point(4, 8);
			this->tbUminEmail->Name = L"tbUminEmail";
			this->tbUminEmail->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbUminEmail->Size = System::Drawing::Size(485, 23);
			this->tbUminEmail->TabIndex = 0;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel5->Controls->Add(this->tbLastName);
			this->panel5->Location = System::Drawing::Point(256, 209);
			this->panel5->Name = L"panel5";
			this->panel5->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel5->Size = System::Drawing::Size(265, 40);
			this->panel5->TabIndex = 3;
			// 
			// tbLastName
			// 
			this->tbLastName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->tbLastName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbLastName->Location = System::Drawing::Point(4, 8);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbLastName->Size = System::Drawing::Size(258, 23);
			this->tbLastName->TabIndex = 0;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel3->Controls->Add(this->tbFirstName);
			this->panel3->Location = System::Drawing::Point(29, 209);
			this->panel3->Name = L"panel3";
			this->panel3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel3->Size = System::Drawing::Size(206, 40);
			this->panel3->TabIndex = 2;
			// 
			// tbFirstName
			// 
			this->tbFirstName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->tbFirstName->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbFirstName->Location = System::Drawing::Point(4, 8);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbFirstName->Size = System::Drawing::Size(199, 23);
			this->tbFirstName->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->panel2->Controls->Add(this->tbStudentId);
			this->panel2->Location = System::Drawing::Point(29, 132);
			this->panel2->Name = L"panel2";
			this->panel2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->panel2->Size = System::Drawing::Size(206, 40);
			this->panel2->TabIndex = 1;
			// 
			// tbStudentId
			// 
			this->tbStudentId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(236)),
				static_cast<System::Int32>(static_cast<System::Byte>(236)));
			this->tbStudentId->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbStudentId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->tbStudentId->Location = System::Drawing::Point(4, 8);
			this->tbStudentId->Name = L"tbStudentId";
			this->tbStudentId->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbStudentId->Size = System::Drawing::Size(199, 23);
			this->tbStudentId->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Location = System::Drawing::Point(120, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(320, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registration Form";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-36, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 725);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// RegistrationForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1128, 724);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel1);
			this->Name = L"RegistrationForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegistrationForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
private: System::Void btnCreate_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ studentId = this->tbStudentId->Text;
	String^ firstName = this->tbFirstName->Text;
	String^ lastName = this->tbLastName->Text;
	String^ uminEmail = this->tbUminEmail->Text;
	String^ username = this->tbUsername->Text;
	String^ password = this->tbPassword->Text;
	String^ confirm = this->tbConfirm->Text;

	if (firstName->Length == 0 || lastName->Length == 0 || uminEmail->Length == 0 || studentId->Length == 0) {
		MessageBox::Show("Please enter complete details.");
		return;

	}
	if (password != confirm) {

		MessageBox::Show("Password did not matched!");

	}
	else {

		Windows::Forms::DialogResult dr = MessageBox::Show("Are your sure you want to register?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dr == Windows::Forms::DialogResult::Yes) {

			try {
				String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "INSERT INTO userTable (studentID, firstName, lastName, email, username, password) VALUES (@studentId, @firstName, @lastName, @email, @username, @password)";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@studentId", studentId);
				command.Parameters->AddWithValue("@firstName", firstName);
				command.Parameters->AddWithValue("@lastName", lastName);
				command.Parameters->AddWithValue("@email", uminEmail);
				command.Parameters->AddWithValue("@username", username);
				command.Parameters->AddWithValue("@password", password);

				SqlDataReader^ reader = command.ExecuteReader();


				MessageBox::Show("Account Successfully Registered.");


			}
			catch (Exception^ e) {
				MessageBox::Show("Database Connection Failed.");
			}
		}
	}
}
private: System::Void btnReturn_Click(System::Object^ sender, System::EventArgs^ e) {

	
	

}
};
}
