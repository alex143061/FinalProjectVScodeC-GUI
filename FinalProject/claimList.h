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
	/// Summary for claimList
	/// </summary>
	public ref class claimList : public System::Windows::Forms::Form
	{
	public:
		claimList(void)
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
		~claimList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ cbStatus;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridView^ tblClaimList;

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
			this->cbStatus = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tblClaimList = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblClaimList))->BeginInit();
			this->SuspendLayout();
			// 
			// cbStatus
			// 
			this->cbStatus->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Suggest;
			this->cbStatus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->cbStatus->FormattingEnabled = true;
			this->cbStatus->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Not Claimed", L"Pending", L"Claimed" });
			this->cbStatus->Location = System::Drawing::Point(660, 655);
			this->cbStatus->Name = L"cbStatus";
			this->cbStatus->Size = System::Drawing::Size(167, 30);
			this->cbStatus->TabIndex = 25;
			this->cbStatus->SelectedIndexChanged += gcnew System::EventHandler(this, &claimList::cbStatus_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->label2->Location = System::Drawing::Point(587, 656);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(66, 22);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Status:";
			// 
			// btnUpdate
			// 
			this->btnUpdate->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->btnUpdate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUpdate->ForeColor = System::Drawing::Color::White;
			this->btnUpdate->Location = System::Drawing::Point(842, 648);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(165, 40);
			this->btnUpdate->TabIndex = 22;
			this->btnUpdate->Text = L"Update";
			this->btnUpdate->UseVisualStyleBackColor = false;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &claimList::btnUpdate_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(156)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(271, 40);
			this->label1->TabIndex = 21;
			this->label1->Text = L"Claim Requests";
			// 
			// tblClaimList
			// 
			this->tblClaimList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tblClaimList->Location = System::Drawing::Point(91, 68);
			this->tblClaimList->Name = L"tblClaimList";
			this->tblClaimList->RowHeadersWidth = 62;
			this->tblClaimList->RowTemplate->Height = 28;
			this->tblClaimList->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tblClaimList->Size = System::Drawing::Size(916, 545);
			this->tblClaimList->TabIndex = 20;
			// 
			// claimList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1088, 716);
			this->Controls->Add(this->cbStatus);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tblClaimList);
			this->Name = L"claimList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"claimList";
			this->Load += gcnew System::EventHandler(this, &claimList::claimList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tblClaimList))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void populateTable() {

			try {
				String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT * FROM claimRequests";
				SqlDataReader^ reader;

				SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
				DataTable^ dt = gcnew DataTable();
				adapter->Fill(dt);
				tblClaimList->DataSource = dt;

				sqlConn.Close();
			}
			catch (Exception^ e) {

				MessageBox::Show("Failed to load data.");

			}

		}
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {

		
		
	}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ currID = tblClaimList->Rows[tblClaimList->CurrentCell->RowIndex]->Cells[0]->Value->ToString();

	String^ status = cbStatus->Text;
	Windows::Forms::DialogResult dr = MessageBox::Show("Are you sure you want to update the status of this item ?", "Confirmation", MessageBoxButtons::YesNo);
	if (dr == Windows::Forms::DialogResult::Yes) {
		try {
			String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "UPDATE claimRequests SET status=@status WHERE Id = " + currID;
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@status", status);

			SqlDataReader^ reader = command.ExecuteReader();

			MessageBox::Show("Item succesfully updated.");

			sqlConn.Close();
			populateTable();

		}
		catch (Exception^ e) {

			MessageBox::Show("Not connected to database");

		}
	}
}
private: System::Void claimList_Load(System::Object^ sender, System::EventArgs^ e) {
 
	try {
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=myrestaurant;Integrated Security=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM claimRequests";
		SqlDataReader^ reader;

		SqlDataAdapter^ adapter = gcnew SqlDataAdapter(sqlQuery, connString);
		DataTable^ dt = gcnew DataTable();
		adapter->Fill(dt);
		tblClaimList->DataSource = dt;
		sqlConn.Close();

	}
	catch (Exception^ e) {

		MessageBox::Show("Not connected to database");

	}

}
private: System::Void cbStatus_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {



}
};
}
