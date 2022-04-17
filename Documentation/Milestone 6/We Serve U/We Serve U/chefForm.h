#pragma once

namespace WeServeU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for chefForm
	/// </summary>
	public ref class chefForm : public System::Windows::Forms::Form
	{
	public:
		chefForm(void)
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
		~chefForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lbxOrders;
	protected:
	private: System::Windows::Forms::Button^ btnSubmitOrder;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;

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
			this->lbxOrders = (gcnew System::Windows::Forms::ListBox());
			this->btnSubmitOrder = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lbxOrders
			// 
			this->lbxOrders->FormattingEnabled = true;
			this->lbxOrders->ItemHeight = 16;
			this->lbxOrders->Location = System::Drawing::Point(12, 28);
			this->lbxOrders->MultiColumn = true;
			this->lbxOrders->Name = L"lbxOrders";
			this->lbxOrders->Size = System::Drawing::Size(272, 308);
			this->lbxOrders->TabIndex = 0;
			// 
			// btnSubmitOrder
			// 
			this->btnSubmitOrder->Location = System::Drawing::Point(290, 278);
			this->btnSubmitOrder->Name = L"btnSubmitOrder";
			this->btnSubmitOrder->Size = System::Drawing::Size(220, 58);
			this->btnSubmitOrder->TabIndex = 1;
			this->btnSubmitOrder->Text = L"Submit Order";
			this->btnSubmitOrder->UseVisualStyleBackColor = true;
			this->btnSubmitOrder->Click += gcnew System::EventHandler(this, &chefForm::btnSubmitOrder_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"All Orders";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(290, 28);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(220, 244);
			this->textBox1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(287, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Current Order";
			// 
			// chefForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 361);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnSubmitOrder);
			this->Controls->Add(this->lbxOrders);
			this->Name = L"chefForm";
			this->Text = L"chefForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnSubmitOrder_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
