#pragma once

namespace WeServeU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for guestForm
	/// </summary>
	public ref class guestForm : public System::Windows::Forms::Form
	{
	public:
		guestForm(void)
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
		~guestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ lbxMenu;
	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ lbxOrder;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnPingWaitstaff;
	private: System::Windows::Forms::Button^ btnPrintReciept;

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
			this->lbxMenu = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbxOrder = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnPingWaitstaff = (gcnew System::Windows::Forms::Button());
			this->btnPrintReciept = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lbxMenu
			// 
			this->lbxMenu->FormattingEnabled = true;
			this->lbxMenu->ItemHeight = 16;
			this->lbxMenu->Location = System::Drawing::Point(12, 30);
			this->lbxMenu->Name = L"lbxMenu";
			this->lbxMenu->Size = System::Drawing::Size(342, 148);
			this->lbxMenu->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(360, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Order";
			// 
			// lbxOrder
			// 
			this->lbxOrder->FormattingEnabled = true;
			this->lbxOrder->ItemHeight = 16;
			this->lbxOrder->Location = System::Drawing::Point(360, 30);
			this->lbxOrder->Name = L"lbxOrder";
			this->lbxOrder->Size = System::Drawing::Size(196, 116);
			this->lbxOrder->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(360, 159);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Total:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(407, 156);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(149, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(450, 184);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(106, 22);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(360, 187);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Order Status:";
			// 
			// btnPingWaitstaff
			// 
			this->btnPingWaitstaff->Location = System::Drawing::Point(12, 187);
			this->btnPingWaitstaff->Name = L"btnPingWaitstaff";
			this->btnPingWaitstaff->Size = System::Drawing::Size(342, 56);
			this->btnPingWaitstaff->TabIndex = 8;
			this->btnPingWaitstaff->Text = L"Ping Waitstaff";
			this->btnPingWaitstaff->UseVisualStyleBackColor = true;
			// 
			// btnPrintReciept
			// 
			this->btnPrintReciept->Location = System::Drawing::Point(363, 212);
			this->btnPrintReciept->Name = L"btnPrintReciept";
			this->btnPrintReciept->Size = System::Drawing::Size(193, 31);
			this->btnPrintReciept->TabIndex = 9;
			this->btnPrintReciept->Text = L"Print Reciept";
			this->btnPrintReciept->UseVisualStyleBackColor = true;
			// 
			// guestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(577, 255);
			this->Controls->Add(this->btnPrintReciept);
			this->Controls->Add(this->btnPingWaitstaff);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbxOrder);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lbxMenu);
			this->Name = L"guestForm";
			this->Text = L"guestForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
