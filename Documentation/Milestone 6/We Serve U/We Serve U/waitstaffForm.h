#pragma once

namespace WeServeU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for waitstaffForm
	/// </summary>
	public ref class waitstaffForm : public System::Windows::Forms::Form
	{
	public:
		waitstaffForm(void)
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
		~waitstaffForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lbxTables;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnMarkAlertAsHandled;

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
			this->lbxTables = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnMarkAlertAsHandled = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbxTables
			// 
			this->lbxTables->FormattingEnabled = true;
			this->lbxTables->ItemHeight = 16;
			this->lbxTables->Location = System::Drawing::Point(12, 28);
			this->lbxTables->Name = L"lbxTables";
			this->lbxTables->Size = System::Drawing::Size(419, 356);
			this->lbxTables->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Tables";
			// 
			// btnMarkAlertAsHandled
			// 
			this->btnMarkAlertAsHandled->Location = System::Drawing::Point(437, 348);
			this->btnMarkAlertAsHandled->Name = L"btnMarkAlertAsHandled";
			this->btnMarkAlertAsHandled->Size = System::Drawing::Size(267, 36);
			this->btnMarkAlertAsHandled->TabIndex = 2;
			this->btnMarkAlertAsHandled->Text = L"Mark Alert As Handled";
			this->btnMarkAlertAsHandled->UseVisualStyleBackColor = true;
			// 
			// waitstaffForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 391);
			this->Controls->Add(this->btnMarkAlertAsHandled);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbxTables);
			this->Name = L"waitstaffForm";
			this->Text = L"waitstaffForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
