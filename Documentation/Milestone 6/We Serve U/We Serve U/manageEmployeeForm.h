#pragma once
#include "isValidLogin.h"
#include "managerEngine.h"

namespace WeServeU {

	//using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for manageEmployeeForm
	/// </summary>
	public ref class manageEmployeeForm : public System::Windows::Forms::Form
	{
	public:
		manageEmployeeForm(void)
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
		~manageEmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lbManageEmployees;
	protected:


	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnRemove;

	private: System::Windows::Forms::Button^ btnRegister;

	private: System::Windows::Forms::Button^ btnDone;

	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ btnWaitStaff;
	private: System::Windows::Forms::Button^ btnChef;
	private: System::Windows::Forms::Label^ lbEmployeeName;
	private: System::Windows::Forms::TextBox^ tbEmployeeName;
	private: System::Windows::Forms::Label^ lbEmployeePass;
	private: System::Windows::Forms::TextBox^ tbEmployeePass;
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
			this->lbManageEmployees = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnRemove = (gcnew System::Windows::Forms::Button());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->btnDone = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnChef = (gcnew System::Windows::Forms::Button());
			this->btnWaitStaff = (gcnew System::Windows::Forms::Button());
			this->lbEmployeeName = (gcnew System::Windows::Forms::Label());
			this->tbEmployeeName = (gcnew System::Windows::Forms::TextBox());
			this->lbEmployeePass = (gcnew System::Windows::Forms::Label());
			this->tbEmployeePass = (gcnew System::Windows::Forms::TextBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// lbManageEmployees
			// 
			this->lbManageEmployees->AutoSize = true;
			this->lbManageEmployees->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbManageEmployees->Location = System::Drawing::Point(21, 25);
			this->lbManageEmployees->Name = L"lbManageEmployees";
			this->lbManageEmployees->Size = System::Drawing::Size(431, 50);
			this->lbManageEmployees->TabIndex = 0;
			this->lbManageEmployees->Text = L"Managage employees";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnRemove, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnRegister, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(51, 215);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(599, 149);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// btnRemove
			// 
			this->btnRemove->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRemove->BackColor = System::Drawing::Color::Yellow;
			this->btnRemove->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemove->Location = System::Drawing::Point(3, 77);
			this->btnRemove->Name = L"btnRemove";
			this->btnRemove->Size = System::Drawing::Size(593, 69);
			this->btnRemove->TabIndex = 1;
			this->btnRemove->Text = L"remove employees";
			this->btnRemove->UseVisualStyleBackColor = false;
			this->btnRemove->Click += gcnew System::EventHandler(this, &manageEmployeeForm::btnRemove_Click);
			// 
			// btnRegister
			// 
			this->btnRegister->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRegister->BackColor = System::Drawing::Color::Yellow;
			this->btnRegister->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRegister->Location = System::Drawing::Point(3, 3);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(593, 68);
			this->btnRegister->TabIndex = 0;
			this->btnRegister->Text = L"regsiter employees";
			this->btnRegister->UseVisualStyleBackColor = false;
			this->btnRegister->Click += gcnew System::EventHandler(this, &manageEmployeeForm::btnRegister_Click);
			// 
			// btnDone
			// 
			this->btnDone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnDone->Location = System::Drawing::Point(429, 714);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(241, 53);
			this->btnDone->TabIndex = 2;
			this->btnDone->Text = L"Done";
			this->btnDone->UseVisualStyleBackColor = true;
			this->btnDone->Click += gcnew System::EventHandler(this, &manageEmployeeForm::btnDone_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->btnChef, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnWaitStaff, 0, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(30, 260);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(643, 46);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// btnChef
			// 
			this->btnChef->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnChef->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->btnChef->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnChef->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnChef->Location = System::Drawing::Point(324, 3);
			this->btnChef->Name = L"btnChef";
			this->btnChef->Size = System::Drawing::Size(316, 40);
			this->btnChef->TabIndex = 1;
			this->btnChef->Text = L"chef";
			this->btnChef->UseVisualStyleBackColor = false;
			this->btnChef->Click += gcnew System::EventHandler(this, &manageEmployeeForm::btnChef_Click);
			// 
			// btnWaitStaff
			// 
			this->btnWaitStaff->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnWaitStaff->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->btnWaitStaff->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnWaitStaff->Location = System::Drawing::Point(3, 3);
			this->btnWaitStaff->Name = L"btnWaitStaff";
			this->btnWaitStaff->Size = System::Drawing::Size(315, 40);
			this->btnWaitStaff->TabIndex = 0;
			this->btnWaitStaff->Text = L"wait staff";
			this->btnWaitStaff->UseVisualStyleBackColor = false;
			this->btnWaitStaff->Click += gcnew System::EventHandler(this, &manageEmployeeForm::btnWaitStaff_Click);
			// 
			// lbEmployeeName
			// 
			this->lbEmployeeName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lbEmployeeName->AutoSize = true;
			this->lbEmployeeName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmployeeName->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lbEmployeeName->Location = System::Drawing::Point(28, 352);
			this->lbEmployeeName->Name = L"lbEmployeeName";
			this->lbEmployeeName->Size = System::Drawing::Size(250, 39);
			this->lbEmployeeName->TabIndex = 5;
			this->lbEmployeeName->Text = L"employee name";
			// 
			// tbEmployeeName
			// 
			this->tbEmployeeName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbEmployeeName->Location = System::Drawing::Point(35, 416);
			this->tbEmployeeName->Name = L"tbEmployeeName";
			this->tbEmployeeName->Size = System::Drawing::Size(635, 31);
			this->tbEmployeeName->TabIndex = 6;
			// 
			// lbEmployeePass
			// 
			this->lbEmployeePass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lbEmployeePass->AutoSize = true;
			this->lbEmployeePass->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEmployeePass->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lbEmployeePass->Location = System::Drawing::Point(28, 494);
			this->lbEmployeePass->Name = L"lbEmployeePass";
			this->lbEmployeePass->Size = System::Drawing::Size(308, 39);
			this->lbEmployeePass->TabIndex = 7;
			this->lbEmployeePass->Text = L"employee password";
			// 
			// tbEmployeePass
			// 
			this->tbEmployeePass->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbEmployeePass->Location = System::Drawing::Point(35, 557);
			this->tbEmployeePass->Name = L"tbEmployeePass";
			this->tbEmployeePass->Size = System::Drawing::Size(635, 31);
			this->tbEmployeePass->TabIndex = 8;
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->Location = System::Drawing::Point(37, 714);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(241, 53);
			this->btnBack->TabIndex = 9;
			this->btnBack->Text = L"Back to Main";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &manageEmployeeForm::btnBack_Click);
			// 
			// manageEmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 814);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->tbEmployeePass);
			this->Controls->Add(this->lbEmployeePass);
			this->Controls->Add(this->tbEmployeeName);
			this->Controls->Add(this->lbEmployeeName);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btnDone);
			this->Controls->Add(this->lbManageEmployees);
			this->Name = L"manageEmployeeForm";
			this->Text = L"manageEmployeeForm";
			this->Load += gcnew System::EventHandler(this, &manageEmployeeForm::manageEmployeeForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void manageEmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->btnDone->Hide();
		this->tableLayoutPanel2->Hide();
		this->lbEmployeeName->Hide();
		this->tbEmployeeName->Hide();
		this->lbEmployeePass->Hide();
		this->tbEmployeePass->Hide();
	}
    
    private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->tableLayoutPanel1->Hide();
		this->btnDone->Show();
		this->btnDone->Text = L"Register";
		this->lbManageEmployees->Text = L"Register employees";
		this->tableLayoutPanel2->Show();
		this->lbEmployeeName->Show();
		this->tbEmployeeName->Show();
		this->lbEmployeePass->Show();
		this->tbEmployeePass->Show();
		this->btnBack->Text = "Back";
		this->lbEmployeePass->Show();
		this->tbEmployeePass->Show();


	}
    private: System::Void btnRemove_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->tableLayoutPanel1->Hide();
		this->btnDone->Show();
		this->lbManageEmployees->Text = "Remove employees";
		this->tableLayoutPanel2->Show();
		this->lbEmployeeName->Show();
		this->tbEmployeeName->Show();
		this->lbEmployeePass->Show();
		this->tbEmployeePass->Show();
		this->btnBack->Text = L"Back";
		this->btnDone->Text = L"Remove";
		this->lbEmployeePass->Hide();
		this->tbEmployeePass->Hide();

    }
private: System::Void btnDone_Click(System::Object^ sender, System::EventArgs^ e) 
{
	bool passEntering = false;

	if (System::String::IsNullOrEmpty(tbEmployeeName->Text))
	{
		if (btnDone->Text == "Register")
		{
			MessageBox::Show("Please input a username and password");
		}
		else // remove mode
		{
			passEntering = true;
		}
	}
	else if (System::String::IsNullOrEmpty(tbEmployeePass->Text))
	{
		if (lbManageEmployees->Text == "Register employees")
		{
			MessageBox::Show("Please input a username and password");
		}
		else // remove mode
		{
			passEntering = true;
		}
	}
	else // register mode
	{
		passEntering = true;
	}


	if (passEntering)
	{
		// If the entered user credentials are is saved on the system
		if (isValidChef(tbEmployeeName->Text) || isValidManager(tbEmployeeName->Text) || isValidWaitStaff(tbEmployeeName->Text))
		{
			// if it is in the register mode
			if (btnDone->Text == "Register")
			{
				MessageBox::Show("There is an existing user with these credentials");

			}
			else // remove employees
			{
				// if the wait staff option is selected
				if (this->btnChef->BackColor == System::Drawing::SystemColors::GradientInactiveCaption)
				{
					RemoveEmployee("chef", tbEmployeeName->Text);
					MessageBox::Show("Chef user removed successfully");
				}
				else
				{
					RemoveEmployee("waiter", tbEmployeeName->Text);
					MessageBox::Show("Wait staff user removed successfully");
				}
			}
		}
		else
		{
			// if it is in the register mode
			if (btnDone->Text == "Register")
			{
				// if the wait staff option is selected
				if (this->btnWaitStaff->BackColor == System::Drawing::SystemColors::GradientInactiveCaption)
				{
					RegisterEmployee("waiter", tbEmployeeName->Text, tbEmployeePass->Text);
					MessageBox::Show("Wait staff user added successfully");
				}
				else
				{
					RegisterEmployee("chef", tbEmployeeName->Text, tbEmployeePass->Text);
					MessageBox::Show("Chef user added successfully");
				}
			}
			else // remove employess
			{
				throw gcnew System::Exception("User not found!");
			}
		}
	}
	// If the entered user credentials are not saved on the system
	else
	{
		MessageBox::Show("One or more boxes are missing values");
	}
	// reset text boxes
	this->tbEmployeeName->Text = "";
	this->tbEmployeePass->Text = "";
}
private: System::Void btnWaitStaff_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// if the wait staff option is not selected
	if (this->btnWaitStaff->BackColor != System::Drawing::SystemColors::GradientInactiveCaption)
	{
		this->btnWaitStaff->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
		this->btnChef->BackColor = System::Drawing::SystemColors::ButtonHighlight;
	}
	else
	{
		// If the button is selected, do nothing
	}
}
private: System::Void btnChef_Click(System::Object^ sender, System::EventArgs^ e) 
{
	// if the wait staff option is not selected
	if (this->btnChef->BackColor != System::Drawing::SystemColors::GradientInactiveCaption)
	{
		this->btnChef->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
		this->btnWaitStaff->BackColor = System::Drawing::SystemColors::ButtonHighlight;
	}
	else
	{
		// If the button is selected, do nothing
	}
}
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (btnBack->Text == "Back")
	{
		this->lbManageEmployees->Text = "Managage employees";
		this->tableLayoutPanel1->Show();
		this->btnDone->Hide();
		this->tableLayoutPanel2->Hide();
		this->lbEmployeeName->Hide();
		this->tbEmployeeName->Hide();
		this->lbEmployeePass->Hide();
		this->tbEmployeePass->Hide();
		this->btnBack->Text = "Back to Menu";
	}
	else // Back to main
	{
		this->Hide();
	}
}
};
}
