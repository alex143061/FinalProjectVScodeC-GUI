#pragma once
#include "ClaimRequestForm.h"
namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for ClaimItemForm
	/// </summary>
	public ref class ClaimItemForm : public System::Windows::Forms::Form
	{
	public:
		ClaimItemForm(void)
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
		~ClaimItemForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbStudentId;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbFullName;

	private: System::Windows::Forms::Button^ btnSubmit;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbUminEmail;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPhoneNumber;





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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbStudentId = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbFullName = (gcnew System::Windows::Forms::TextBox());
			this->btnSubmit = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbUminEmail = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPhoneNumber = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Location = System::Drawing::Point(12, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 40);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Claim Item";
			// 
			// tbStudentId
			// 
			this->tbStudentId->Location = System::Drawing::Point(245, 117);
			this->tbStudentId->Name = L"tbStudentId";
			this->tbStudentId->Size = System::Drawing::Size(269, 26);
			this->tbStudentId->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(42, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 22);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Student ID:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(45, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 22);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Full Name:";
			// 
			// tbFullName
			// 
			this->tbFullName->Location = System::Drawing::Point(245, 165);
			this->tbFullName->Name = L"tbFullName";
			this->tbFullName->Size = System::Drawing::Size(269, 26);
			this->tbFullName->TabIndex = 12;
			// 
			// btnSubmit
			// 
			this->btnSubmit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSubmit->ForeColor = System::Drawing::Color::White;
			this->btnSubmit->Location = System::Drawing::Point(349, 351);
			this->btnSubmit->Name = L"btnSubmit";
			this->btnSubmit->Size = System::Drawing::Size(165, 40);
			this->btnSubmit->TabIndex = 14;
			this->btnSubmit->Text = L"Submit Request";
			this->btnSubmit->UseVisualStyleBackColor = false;
			this->btnSubmit->Click += gcnew System::EventHandler(this, &ClaimItemForm::btnSubmit_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(42, 264);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(155, 22);
			this->label4->TabIndex = 16;
			this->label4->Text = L"Umindanao Email:";
			// 
			// tbUminEmail
			// 
			this->tbUminEmail->Location = System::Drawing::Point(245, 260);
			this->tbUminEmail->Name = L"tbUminEmail";
			this->tbUminEmail->Size = System::Drawing::Size(269, 26);
			this->tbUminEmail->TabIndex = 15;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(45, 213);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 22);
			this->label5->TabIndex = 18;
			this->label5->Text = L"Phone Number:";
			// 
			// tbPhoneNumber
			// 
			this->tbPhoneNumber->Location = System::Drawing::Point(245, 209);
			this->tbPhoneNumber->Name = L"tbPhoneNumber";
			this->tbPhoneNumber->Size = System::Drawing::Size(269, 26);
			this->tbPhoneNumber->TabIndex = 17;
			// 
			// ClaimItemForm
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
			this->Name = L"ClaimItemForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ClaimItemForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSubmit_Click(System::Object^ sender, System::EventArgs^ e) {


			String^ studentId = tbStudentId->Text;
			String^ fullName = tbFullName->Text;
			String^ phoneNumber = tbPhoneNumber->Text;
			String^ uminEmail = tbUminEmail->Text;
			String^ status = "Pending";


			if (studentId->Length == 0 || fullName->Length == 0 || uminEmail->Length == 0 || phoneNumber->Length == 0) {
				MessageBox::Show("Please enter complete details.");
				return;

			}
				Windows::Forms::DialogResult dr = MessageBox::Show("Are you sure you want to submit request?", "Confirmation", MessageBoxButtons::YesNo);
				if (dr == Windows::Forms::DialogResult::Yes) {

					try {
						String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=myrestaurant;Integrated Security=True";
						SqlConnection sqlConn(connString);
						sqlConn.Open();

						String^ sqlQuery = "INSERT INTO claimRequests (studentId, fullName, phoneNumber, umindanaoEmail, status) VALUES (@studentId, @fullName, @phonenumber, @UminEmail, @status)";
						SqlCommand command(sqlQuery, % sqlConn);
						command.Parameters->AddWithValue("@studentId", studentId);
						command.Parameters->AddWithValue("@fullName", fullName);
						command.Parameters->AddWithValue("@phonenumber", phoneNumber);
						command.Parameters->AddWithValue("@uminEmail", uminEmail);
						command.Parameters->AddWithValue("@status", status);
					

						SqlDataReader^ reader = command.ExecuteReader();


						MessageBox::Show("Claim Request Submitted.");

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
