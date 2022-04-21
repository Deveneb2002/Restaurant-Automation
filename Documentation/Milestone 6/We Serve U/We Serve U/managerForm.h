#pragma once
#include "managerEngine.h"
#include "manageEmployeeForm.h"
namespace WeServeU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for managerForm
	/// </summary>
	public ref class managerForm : public System::Windows::Forms::Form
	{
	public:
		managerForm(void)
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
		~managerForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnManageEmployee;
	protected:

	protected:

	private: System::Windows::Forms::Button^ btnEditMenu;
	private: System::Windows::Forms::Button^ btnSeeAnalytics;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ lbManager;

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
			this->btnManageEmployee = (gcnew System::Windows::Forms::Button());
			this->btnEditMenu = (gcnew System::Windows::Forms::Button());
			this->btnSeeAnalytics = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->lbManager = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnManageEmployee
			// 
			this->btnManageEmployee->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnManageEmployee->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnManageEmployee->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnManageEmployee->Location = System::Drawing::Point(4, 91);
			this->btnManageEmployee->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnManageEmployee->Name = L"btnManageEmployee";
			this->btnManageEmployee->Size = System::Drawing::Size(534, 76);
			this->btnManageEmployee->TabIndex = 0;
			this->btnManageEmployee->Text = L"Manage Employees";
			this->btnManageEmployee->UseVisualStyleBackColor = false;
			this->btnManageEmployee->Click += gcnew System::EventHandler(this, &managerForm::btnManageEmployee_Click);
			// 
			// btnEditMenu
			// 
			this->btnEditMenu->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnEditMenu->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnEditMenu->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditMenu->Location = System::Drawing::Point(4, 5);
			this->btnEditMenu->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnEditMenu->Name = L"btnEditMenu";
			this->btnEditMenu->Size = System::Drawing::Size(534, 76);
			this->btnEditMenu->TabIndex = 2;
			this->btnEditMenu->Text = L"Edit Menu";
			this->btnEditMenu->UseVisualStyleBackColor = false;
			// 
			// btnSeeAnalytics
			// 
			this->btnSeeAnalytics->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSeeAnalytics->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnSeeAnalytics->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSeeAnalytics->Location = System::Drawing::Point(4, 177);
			this->btnSeeAnalytics->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->btnSeeAnalytics->Name = L"btnSeeAnalytics";
			this->btnSeeAnalytics->Size = System::Drawing::Size(534, 77);
			this->btnSeeAnalytics->TabIndex = 3;
			this->btnSeeAnalytics->Text = L"See Analytics";
			this->btnSeeAnalytics->UseVisualStyleBackColor = false;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->btnEditMenu, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnManageEmployee, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnSeeAnalytics, 0, 2);
			this->tableLayoutPanel1->Location = System::Drawing::Point(77, 497);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 3;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(542, 259);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// lbManager
			// 
			this->lbManager->AutoSize = true;
			this->lbManager->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbManager->Location = System::Drawing::Point(18, 28);
			this->lbManager->Name = L"lbManager";
			this->lbManager->Size = System::Drawing::Size(293, 50);
			this->lbManager->TabIndex = 5;
			this->lbManager->Text = L"Manager page";
			// 
			// managerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 814);
			this->Controls->Add(this->lbManager);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"managerForm";
			this->Text = L"managerForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnManageEmployee_Click(System::Object^ sender, System::EventArgs^ e)
	{
		WeServeU::manageEmployeeForm newForm;
		newForm.ShowDialog();
	}
};
}
