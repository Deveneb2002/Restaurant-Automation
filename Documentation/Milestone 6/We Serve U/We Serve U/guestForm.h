#pragma once
#include "Menu.hpp"

namespace WeServeU {

	//using namespace System;
	using namespace System::IO;
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

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnPingWaitstaff;
	private: System::Windows::Forms::Button^ btnPrintReciept;
	private: System::Windows::Forms::ListView^ lvwMenu;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListView^ lvwOrder;


	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnPingWaitstaff = (gcnew System::Windows::Forms::Button());
			this->btnPrintReciept = (gcnew System::Windows::Forms::Button());
			this->lvwMenu = (gcnew System::Windows::Forms::ListView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lvwOrder = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(508, 6);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Order";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(508, 128);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Total:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(544, 125);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(235, 20);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(576, 148);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(203, 20);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(508, 150);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(69, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Order Status:";
			// 
			// btnPingWaitstaff
			// 
			this->btnPingWaitstaff->Location = System::Drawing::Point(9, 152);
			this->btnPingWaitstaff->Margin = System::Windows::Forms::Padding(2);
			this->btnPingWaitstaff->Name = L"btnPingWaitstaff";
			this->btnPingWaitstaff->Size = System::Drawing::Size(235, 46);
			this->btnPingWaitstaff->TabIndex = 8;
			this->btnPingWaitstaff->Text = L"Ping Waitstaff";
			this->btnPingWaitstaff->UseVisualStyleBackColor = true;
			this->btnPingWaitstaff->Click += gcnew System::EventHandler(this, &guestForm::btnPingWaitstaff_Click);
			// 
			// btnPrintReciept
			// 
			this->btnPrintReciept->Location = System::Drawing::Point(511, 171);
			this->btnPrintReciept->Margin = System::Windows::Forms::Padding(2);
			this->btnPrintReciept->Name = L"btnPrintReciept";
			this->btnPrintReciept->Size = System::Drawing::Size(267, 25);
			this->btnPrintReciept->TabIndex = 9;
			this->btnPrintReciept->Text = L"Print Reciept";
			this->btnPrintReciept->UseVisualStyleBackColor = true;
			this->btnPrintReciept->Click += gcnew System::EventHandler(this, &guestForm::btnPrintReciept_Click);
			// 
			// lvwMenu
			// 
			this->lvwMenu->FullRowSelect = true;
			this->lvwMenu->HideSelection = false;
			this->lvwMenu->Location = System::Drawing::Point(9, 23);
			this->lvwMenu->Margin = System::Windows::Forms::Padding(2);
			this->lvwMenu->MultiSelect = false;
			this->lvwMenu->Name = L"lvwMenu";
			this->lvwMenu->Size = System::Drawing::Size(496, 125);
			this->lvwMenu->TabIndex = 10;
			this->lvwMenu->UseCompatibleStateImageBehavior = false;
			this->lvwMenu->View = System::Windows::Forms::View::Details;
			this->lvwMenu->DoubleClick += gcnew System::EventHandler(this, &guestForm::lvwMenu_DoubleClick);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(248, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(256, 40);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Submit Order";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &guestForm::button1_Click);
			// 
			// lvwOrder
			// 
			this->lvwOrder->FullRowSelect = true;
			this->lvwOrder->HideSelection = false;
			this->lvwOrder->Location = System::Drawing::Point(509, 23);
			this->lvwOrder->Margin = System::Windows::Forms::Padding(2);
			this->lvwOrder->MultiSelect = false;
			this->lvwOrder->Name = L"lvwOrder";
			this->lvwOrder->Size = System::Drawing::Size(267, 98);
			this->lvwOrder->TabIndex = 12;
			this->lvwOrder->UseCompatibleStateImageBehavior = false;
			this->lvwOrder->View = System::Windows::Forms::View::Details;
			this->lvwOrder->SelectedIndexChanged += gcnew System::EventHandler(this, &guestForm::lvwOrder_SelectedIndexChanged);
			// 
			// guestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(787, 207);
			this->Controls->Add(this->lvwOrder);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lvwMenu);
			this->Controls->Add(this->btnPrintReciept);
			this->Controls->Add(this->btnPingWaitstaff);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"guestForm";
			this->Text = L"guestForm";
			this->Load += gcnew System::EventHandler(this, &guestForm::guestForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void guestForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LinkedList^ pOurMenu = gcnew LinkedList;
		//Read menu from file
		StreamReader^ reader = gcnew StreamReader("menu.txt");
		while (!reader->EndOfStream)
		{
			//Strings in std
			System::String^ ourLine = reader->ReadLine();
			//name
			int end = ourLine->IndexOf("\"");
			System::String^ ourName = ourLine->Substring(0,end);
			ourLine = ourLine->Remove(0, end + 1);
			//Description
			end = ourLine->IndexOf("\"");
			System::String^ ourDescription = ourLine->Substring(0, end);
			ourLine = ourLine->Remove(0, end + 2);
			//Price
			end = ourLine->IndexOf(" ");
			System::String^ tempString = ourLine->Substring(0, end);
			double ourPrice = System::Convert::ToDouble(tempString);
			ourLine = ourLine->Remove(0, end + 1);
			//Availibility
			if (ourLine == "Available")
			{
				pOurMenu->insertFront(ourName, ourDescription, ourPrice, true);
			}
			else
			{
				pOurMenu->insertFront(ourName, ourDescription, ourPrice, false);
			}

		}
		reader->Close();
		//Insert menu into listview
		lvwMenu->Columns->Add("Name");
		lvwMenu->Columns->Add("Description");
		lvwMenu->Columns->Add("Price", -2);

		Node^ pOurCurrentItem = pOurMenu->getHead();
		while (true)
		{
			if (pOurCurrentItem != nullptr)
			{
				if (pOurCurrentItem->getAvailability())
				{
					ListViewItem^ newItem = gcnew ListViewItem();

					newItem->Text = pOurCurrentItem->getName();

					newItem->SubItems->Add(pOurCurrentItem->getDescription());

					newItem->SubItems->Add(pOurCurrentItem->getPrice().ToString());

					lvwMenu->Items->Add(newItem);
				}
				pOurCurrentItem = pOurCurrentItem->getNext();
			}
			else
			{
				break;
			}
		}
		lvwMenu->Columns[0]->Width = -1;
		lvwMenu->Columns[1]->Width = -1;
	}

	private: System::Void btnPingWaitstaff_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btnPrintReciept_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void lvwOrder_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		auto selectedItems = lvwOrder->SelectedItems;
		while (selectedItems->Count > 0)
		{
			ListViewItem^ newItem = gcnew ListViewItem();
			newItem->Text = selectedItems[1]->Text; //May need to change depending on if index starts at 0 or not
			newItem->SubItems->Add(selectedItems[1]->SubItems);


		}
	}
};
}
