#pragma once

#include "claimList.h"

namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ tblList;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ tbDateofTurnOver;
	private: System::Windows::Forms::TextBox^ tbDescription;
	private: System::Windows::Forms::TextBox^ tbStatus;
	private: System::Windows::Forms::TextBox^ tbDateReleased;
	private: System::Windows::Forms::TextBox^ tbOwner;




	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbRemarks;

	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ btnLogOut;
	private: System::Windows::Forms::Button^ btnClaimant;





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
			this->tblList = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbDateofTurnOver = (gcnew System::Windows::Forms::TextBox());
			this->tbDescription = (gcnew System::Windows::Forms::TextBox());
			this->tbStatus = (gcnew System::Windows::Forms::TextBox());
			this->tbDateReleased = (gcnew System::Windows::Forms::TextBox());
			this->tbOwner = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbRemarks = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnLogOut = (gcnew System::Windows::Forms::Button());
			this->btnClaimant = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblList))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tblList
			// 
			this->tblList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblList->Location = System::Drawing::Point(477, 167);
			this->tblList->Name = L"tblList";
			this->tblList->RowHeadersWidth = 62;
			this->tblList->RowTemplate->Height = 28;
			this->tblList->Size = System::Drawing::Size(1010, 515);
			this->tblList->TabIndex = 0;
			this->tblList->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::tblList_CellClick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(635, 34);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(223, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ADMIN";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1549, 146);
			this->panel1->TabIndex = 1;
			// 
			// tbDateofTurnOver
			// 
			this->tbDateofTurnOver->Location = System::Drawing::Point(227, 218);
			this->tbDateofTurnOver->Name = L"tbDateofTurnOver";
			this->tbDateofTurnOver->Size = System::Drawing::Size(208, 26);
			this->tbDateofTurnOver->TabIndex = 2;
			// 
			// tbDescription
			// 
			this->tbDescription->Location = System::Drawing::Point(227, 269);
			this->tbDescription->Name = L"tbDescription";
			this->tbDescription->Size = System::Drawing::Size(208, 26);
			this->tbDescription->TabIndex = 3;
			// 
			// tbStatus
			// 
			this->tbStatus->Location = System::Drawing::Point(227, 325);
			this->tbStatus->Name = L"tbStatus";
			this->tbStatus->Size = System::Drawing::Size(208, 26);
			this->tbStatus->TabIndex = 4;
			// 
			// tbDateReleased
			// 
			this->tbDateReleased->Location = System::Drawing::Point(227, 384);
			this->tbDateReleased->Name = L"tbDateReleased";
			this->tbDateReleased->Size = System::Drawing::Size(208, 26);
			this->tbDateReleased->TabIndex = 5;
			// 
			// tbOwner
			// 
			this->tbOwner->Location = System::Drawing::Point(227, 441);
			this->tbOwner->Name = L"tbOwner";
			this->tbOwner->Size = System::Drawing::Size(208, 26);
			this->tbOwner->TabIndex = 6;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(45, 222);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 22);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Date of turn over:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label3->Location = System::Drawing::Point(45, 273);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(143, 22);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Item Description:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label4->Location = System::Drawing::Point(45, 326);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(66, 22);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Status:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label5->Location = System::Drawing::Point(45, 388);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(134, 22);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Date Released:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label6->Location = System::Drawing::Point(45, 445);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 22);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Owner:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label7->Location = System::Drawing::Point(45, 496);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(86, 22);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Remarks:";
			// 
			// tbRemarks
			// 
			this->tbRemarks->Location = System::Drawing::Point(227, 492);
			this->tbRemarks->Name = L"tbRemarks";
			this->tbRemarks->Size = System::Drawing::Size(208, 26);
			this->tbRemarks->TabIndex = 15;
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnAdd->FlatAppearance->BorderSize = 0;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->ForeColor = System::Drawing::Color::White;
			this->btnAdd->Location = System::Drawing::Point(227, 552);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(92, 29);
			this->btnAdd->TabIndex = 16;
			this->btnAdd->Text = L"ADD";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &AdminForm::btnAdd_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(334, 552);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 29);
			this->button1->TabIndex = 17;
			this->button1->Text = L"UPDATE";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// btnLogOut
			// 
			this->btnLogOut->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnLogOut->FlatAppearance->BorderSize = 0;
			this->btnLogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogOut->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogOut->ForeColor = System::Drawing::Color::White;
			this->btnLogOut->Location = System::Drawing::Point(227, 652);
			this->btnLogOut->Name = L"btnLogOut";
			this->btnLogOut->Size = System::Drawing::Size(208, 30);
			this->btnLogOut->TabIndex = 18;
			this->btnLogOut->Text = L"Log Out";
			this->btnLogOut->UseVisualStyleBackColor = false;
			this->btnLogOut->Click += gcnew System::EventHandler(this, &AdminForm::btnLogOut_Click);
			// 
			// btnClaimant
			// 
			this->btnClaimant->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnClaimant->FlatAppearance->BorderSize = 0;
			this->btnClaimant->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClaimant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClaimant->ForeColor = System::Drawing::Color::White;
			this->btnClaimant->Location = System::Drawing::Point(227, 587);
			this->btnClaimant->Name = L"btnClaimant";
			this->btnClaimant->Size = System::Drawing::Size(208, 34);
			this->btnClaimant->TabIndex = 19;
			this->btnClaimant->Text = L"Claimants Informations";
			this->btnClaimant->UseVisualStyleBackColor = false;
			this->btnClaimant->Click += gcnew System::EventHandler(this, &AdminForm::btnClaimant_Click);
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1548, 724);
			this->Controls->Add(this->btnClaimant);
			this->Controls->Add(this->btnLogOut);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->tbRemarks);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbOwner);
			this->Controls->Add(this->tbDateReleased);
			this->Controls->Add(this->tbStatus);
			this->Controls->Add(this->tbDescription);
			this->Controls->Add(this->tbDateofTurnOver);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tblList);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblList))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		void populateTable() {

			try {
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT * FROM itemList";
				SqlDataReader^ reader;

				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				tblList->DataSource = dt;

				sqlConn.Close();
			}
			catch (Exception^ e) {

				MessageBox::Show("Failed to load data.");

			}
		
	}
	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {

		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM itemList";
			SqlDataReader^ reader;

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
			DataTable^ dt = gcnew DataTable();
			adapter->Fill(dt);
			tblList->DataSource = dt;

		}
		catch (Exception^ e) {

			MessageBox::Show("Not connected to database");

		}


	}

private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {


	String^ dateofTurnOver = this->tbDateofTurnOver->Text;
	String^ itemDescription = this->tbDescription->Text;
	String^ status = this->tbStatus->Text;
	String^ dateReleased = this->tbDateReleased->Text;
	String^ owner = this->tbOwner->Text;
	String^ remarks = this->tbRemarks->Text;

	if (dateofTurnOver->Length == 0 || itemDescription->Length == 0 || status->Length == 0 || dateReleased->Length == 0) {
		MessageBox::Show("Please enter complete details.");
		return;
	}

	Windows::Forms::DialogResult dr = MessageBox::Show("Are you sure you want to add the item ?", "Confirmation", MessageBoxButtons::YesNo);
	if (dr == Windows::Forms::DialogResult::Yes) {
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO itemList (dateofTurnOver, itemDescription, status,  dateReleased, ownersName, remarks) VALUES (@dateofTurnOver, @itemDescription, @status, @dateReleased, @ownersName, @remarks)";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@dateofTurnOver", dateofTurnOver);
			command.Parameters->AddWithValue("@itemDescription", itemDescription);
			command.Parameters->AddWithValue("@status", status);
			command.Parameters->AddWithValue("@dateReleased", dateReleased);
			command.Parameters->AddWithValue("@ownersName", owner);
			command.Parameters->AddWithValue("@remarks", remarks);

			SqlDataReader^ reader = command.ExecuteReader();


			MessageBox::Show("Item added to list of items.");

			tbDateofTurnOver->Text = "";
			tbDescription->Text = "";
			tbStatus->Text = "";
			tbDateReleased->Text = "";
			tbOwner->Text = "";
			tbRemarks->Text = "";

			try {

				String^ sqlQuery = "SELECT * FROM itemList";
				SqlDataReader^ reader;

				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				tblList->DataSource = dt;

			}
			catch (Exception^ e) {

				MessageBox::Show("Not connected to database");

			}

		}
		catch (Exception^ e) {
			MessageBox::Show("Database Connection Failed.");
		}
	}
}
private: System::Void btnLogOut_Click(System::Object^ sender, System::EventArgs^ e) {
		
	Windows::Forms::DialogResult dr = MessageBox::Show("Are you sure you want to exit?", "Confirmation", MessageBoxButtons::YesNo);
	if (dr == Windows::Forms::DialogResult::Yes) {
		this->Close();
	}
}


	private: System::Void btnClaimant_Click(System::Object^ sender, System::EventArgs^ e) {
			
		claimList^ claim = gcnew claimList();
		claim->Show();
		

	}
private: System::Void tblList_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	String^ currID = tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		tbDateofTurnOver->Text = "";
		tbDescription->Text = "";
		tbStatus->Text = "";
		tbDateReleased->Text = "";
		tbOwner->Text = "";
		tbRemarks->Text = "";

		String^ sqlQuery = "SELECT * FROM itemList";

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);

		String^ DateofturnOver = dt->Rows[0]->ItemArray[1]->ToString();
		tbDateofTurnOver->Text = DateofturnOver;

		tbDateofTurnOver->Text = tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[1]->Value->ToString();;
		tbDescription->Text =  tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[2]->Value->ToString();
		tbStatus->Text = tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[3]->Value->ToString();
		tbDateReleased->Text = tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[4]->Value->ToString();
		tbOwner->Text = tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[5]->Value->ToString();
		tbRemarks->Text = tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[6]->Value->ToString();


	}
	catch (Exception^ e) {

	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currID = tblList->Rows[tblList->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ dateofTurnOver = this->tbDateofTurnOver->Text;
	String^ itemDescription = this->tbDescription->Text;
	String^ status = this->tbStatus->Text;
	String^ dateReleased = this->tbDateReleased->Text;
	String^ owner = this->tbOwner->Text;
	String^ remarks = this->tbRemarks->Text;

	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "UPDATE itemList SET dateOfTurnOver=@dateofTurnOver, itemDescription=@itemDescription, status=@status, dateReleased=@dateReleased, ownersName=@ownersName, remarks=@remarks WHERE Id = " + currID;
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@dateofTurnOver", dateofTurnOver);
		command.Parameters->AddWithValue("@itemDescription", itemDescription);
		command.Parameters->AddWithValue("@status", status);
		command.Parameters->AddWithValue("@dateReleased", dateReleased);
		command.Parameters->AddWithValue("@ownersName", owner);
		command.Parameters->AddWithValue("@remarks", remarks);

		SqlDataReader^ reader = command.ExecuteReader();

		MessageBox::Show("Item succesfully updated.");
		
		sqlConn.Close();
		populateTable();
	}
	catch (Exception^ e) {

		MessageBox::Show("Database connection failed.");

	}
}
};
}
