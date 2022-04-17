#pragma once

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
	private: System::Windows::Forms::Button^ btnRegisterEmployee;
	protected:
	private: System::Windows::Forms::Button^ btnDeleteEmployee;
	private: System::Windows::Forms::Button^ btnEditMenu;
	private: System::Windows::Forms::Button^ btnSeeAnalytics;

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
			this->btnRegisterEmployee = (gcnew System::Windows::Forms::Button());
			this->btnDeleteEmployee = (gcnew System::Windows::Forms::Button());
			this->btnEditMenu = (gcnew System::Windows::Forms::Button());
			this->btnSeeAnalytics = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnRegisterEmployee
			// 
			this->btnRegisterEmployee->Location = System::Drawing::Point(12, 82);
			this->btnRegisterEmployee->Name = L"btnRegisterEmployee";
			this->btnRegisterEmployee->Size = System::Drawing::Size(182, 29);
			this->btnRegisterEmployee->TabIndex = 0;
			this->btnRegisterEmployee->Text = L"Register Employee";
			this->btnRegisterEmployee->UseVisualStyleBackColor = true;
			// 
			// btnDeleteEmployee
			// 
			this->btnDeleteEmployee->Location = System::Drawing::Point(12, 117);
			this->btnDeleteEmployee->Name = L"btnDeleteEmployee";
			this->btnDeleteEmployee->Size = System::Drawing::Size(182, 29);
			this->btnDeleteEmployee->TabIndex = 1;
			this->btnDeleteEmployee->Text = L"Delete Employee";
			this->btnDeleteEmployee->UseVisualStyleBackColor = true;
			// 
			// btnEditMenu
			// 
			this->btnEditMenu->Location = System::Drawing::Point(12, 12);
			this->btnEditMenu->Name = L"btnEditMenu";
			this->btnEditMenu->Size = System::Drawing::Size(182, 29);
			this->btnEditMenu->TabIndex = 2;
			this->btnEditMenu->Text = L"Edit Menu";
			this->btnEditMenu->UseVisualStyleBackColor = true;
			// 
			// btnSeeAnalytics
			// 
			this->btnSeeAnalytics->Location = System::Drawing::Point(12, 47);
			this->btnSeeAnalytics->Name = L"btnSeeAnalytics";
			this->btnSeeAnalytics->Size = System::Drawing::Size(182, 29);
			this->btnSeeAnalytics->TabIndex = 3;
			this->btnSeeAnalytics->Text = L"See Analytics";
			this->btnSeeAnalytics->UseVisualStyleBackColor = true;
			// 
			// managerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(209, 159);
			this->Controls->Add(this->btnSeeAnalytics);
			this->Controls->Add(this->btnEditMenu);
			this->Controls->Add(this->btnDeleteEmployee);
			this->Controls->Add(this->btnRegisterEmployee);
			this->Name = L"managerForm";
			this->Text = L"managerForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
