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
	/// Summary for claimform
	/// </summary>
	public ref class claimform : public System::Windows::Forms::Form
	{
	public:
		claimform(void)
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
		~claimform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label5;
	protected:
	private: System::Windows::Forms::TextBox^ tbPhoneNumber;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbUminEmail;
	private: System::Windows::Forms::Button^ btnSubmit;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbFullName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbStudentId;
	private: System::Windows::Forms::Label^ label1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbUminEmail = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbFullName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbStudentId = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(71, 240);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 22);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Phone Number:";
			// 
			// tbPhoneNumber
			// 
			this->tbPhoneNumber->Location = System::Drawing::Point(271, 236);
			this->tbPhoneNumber->Name = L"tbPhoneNumber";
			this->tbPhoneNumber->Size = System::Drawing::Size(269, 26);
			this->tbPhoneNumber->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(68, 291);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 22);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Umindanao Email:";
			// 
			// tbUminEmail
			// 
			this->tbUminEmail->Location = System::Drawing::Point(271, 287);
			this->tbUminEmail->Name = L"tbUminEmail";
			this->tbUminEmail->Size = System::Drawing::Size(269, 26);
			this->tbUminEmail->TabIndex = 25;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::Color::White;
			this->btnSubmit->Location = System::Drawing::Point(375, 378);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(165, 40);
			this->btnSubmit->TabIndex = 24;
			this->btnSubmit->Text = L"Submit Request";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &claimform::btnSubmit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(71, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 22);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Full Name:";
			// 
			// tbFullName
			// 
			this->tbFullName->Location = System::Drawing::Point(271, 192);
			this->tbFullName->Name = L"tbFullName";
			this->tbFullName->Size = System::Drawing::Size(269, 26);
			this->tbFullName->TabIndex = 22;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(68, 148);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 22);
			this->label2->TabIndex = 21;
			this->label2->Text = L"Student ID:";
			// 
			// tbStudentId
			// 
			this->tbStudentId->Location = System::Drawing::Point(271, 144);
			this->tbStudentId->Name = L"tbStudentId";
			this->tbStudentId->Size = System::Drawing::Size(269, 26);
			this->tbStudentId->TabIndex = 20;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Location = System::Drawing::Point(18, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 40);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Claim Item";
			// 
			// claimform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 464);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbPhoneNumber);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbUminEmail);
			this->Controls->Add(this->btnSubmit);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbFullName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbStudentId);
			this->Controls->Add(this->label1);
			this->Name = L"claimform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"claimform";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ studentId = this->tbStudentId->Text;
		String^ fullName = this->tbFullName->Text;
		String^ phoneNumber = this->tbPhoneNumber->Text;
		String^ uminEmail = this->tbUminEmail->Text;
		String^ status = "Pending";

		if (studentId->Length == 0 || fullName->Length == 0 || phoneNumber->Length == 0 || uminEmail->Length == 0) {
			MessageBox::Show("Please enter complete details.");
			return;

		}

		Windows::Forms::DialogResult dr = MessageBox::Show("Are your sure you want to register?", "Confirmation Message", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (dr == Windows::Forms::DialogResult::Yes) {

			try {
				String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "INSERT INTO claimRequests (studentId, fullName, phoneNumber, umindanaoEmail, status) VALUES (@studentId, @fullName, @phoneNumber, @uminEmail, @status)";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@studentId", studentId);
				command.Parameters->AddWithValue("@fullName", fullName);
				command.Parameters->AddWithValue("@phoneNumber", phoneNumber);
				command.Parameters->AddWithValue("@uminEmail", uminEmail);
				command.Parameters->AddWithValue("@status", status);

				SqlDataReader^ reader = command.ExecuteReader();


				MessageBox::Show("Account Successfully Registered.");

				tbStudentId->Text = "";
				tbFullName->Text = "";
				tbPhoneNumber->Text = "";
				tbUminEmail->Text = "";

			}
			catch (Exception^ e) {
				MessageBox::Show("Database Connection Failed.");
			}
		}
	}
	};
	}
