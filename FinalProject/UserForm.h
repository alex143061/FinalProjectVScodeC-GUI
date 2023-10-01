#pragma once

#include "claimform.h"
namespace FinalProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for UserForm
	/// </summary>
	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
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
		~UserForm()
		{
			if (components)
			{
				delete components;
			}
		}




	public: void searchData(String^ valueToFind) {

		try {
			
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM itemList";
			SqlDataReader^ reader;

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
			DataTable^ dt = gcnew DataTable();
			DataView^ dv = gcnew DataView(dt);
			dv->RowFilter = "SELECT * FROM itemList WHERE dateOfTurnOver '" + tbSearchBox;
			tblList->DataSource = dv;
			adapter->Fill(dt);
			tblList->DataSource = dt;
			
		}
		catch (Exception^ e) {

			MessageBox::Show("Not connected to database");

		}
	}
	
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ tblList;
	private: System::Windows::Forms::TextBox^ tbSearchBox;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnBack;






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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tblList = (gcnew System::Windows::Forms::DataGridView());
			this->tbSearchBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblList))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1374, 146);
			this->panel1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(585, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(297, 69);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome!";
			// 
			// tblList
			// 
			this->tblList->AllowUserToAddRows = false;
			this->tblList->AllowUserToDeleteRows = false;
			this->tblList->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tblList->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::DisplayedCells;
			this->tblList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblList->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->tblList->Location = System::Drawing::Point(565, 166);
			this->tblList->Name = L"tblList";
			this->tblList->RowHeadersWidth = 62;
			this->tblList->RowTemplate->Height = 28;
			this->tblList->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblList->Size = System::Drawing::Size(690, 515);
			this->tblList->TabIndex = 3;
			// 
			// tbSearchBox
			// 
			this->tbSearchBox->Location = System::Drawing::Point(210, 235);
			this->tbSearchBox->Name = L"tbSearchBox";
			this->tbSearchBox->Size = System::Drawing::Size(269, 26);
			this->tbSearchBox->TabIndex = 4;
			this->tbSearchBox->TextChanged += gcnew System::EventHandler(this, &UserForm::tbSearchBox_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(50, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 22);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Search by Date:";
			// 
			// btnBack
			// 
			this->btnBack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnBack->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnBack->ForeColor = System::Drawing::Color::White;
			this->btnBack->Location = System::Drawing::Point(54, 348);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(165, 40);
			this->btnBack->TabIndex = 24;
			this->btnBack->Text = L"Claim";
			this->btnBack->UseVisualStyleBackColor = false;
			this->btnBack->Click += gcnew System::EventHandler(this, &UserForm::btnBack_Click);
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1378, 724);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbSearchBox);
			this->Controls->Add(this->tblList);
			this->Controls->Add(this->panel1);
			this->Name = L"UserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserForm";
			this->Load += gcnew System::EventHandler(this, &UserForm::UserForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		private: DataTable^  dt = gcnew DataTable();
	private: System::Void UserForm_Load(System::Object^ sender, System::EventArgs^ e) {


		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			
			sqlConn.Open();

			String^ sqlQuery = "SELECT * FROM itemList";
			SqlCommand command(sqlQuery, % sqlConn);
			SqlDataReader^ reader = command.ExecuteReader();
			

			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
			
			adapter->Fill(dt);
			tblList->DataSource = dt;


		}
		catch (Exception^ e) {

			MessageBox::Show("Not connected to database");

		}
	}

	private: System::Void tbSearchBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		  
		String^ searchTerm = tbSearchBox->Text;

		DataView^ dv = dt->DefaultView;
		dv->RowFilter = String::Format("dateOfTurnOver LIKE '%{0}%'", searchTerm);
		dv->RowFilter = String::Format("itemDescription LIKE '%{0}%'", searchTerm);
		dv->RowFilter = String::Format("status LIKE '%{0}%'", searchTerm);
		tblList->DataSource = dv->ToTable();

	   }

private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

	claimform^ claimForm = gcnew claimform;
	claimForm->Show();
}



};
}
