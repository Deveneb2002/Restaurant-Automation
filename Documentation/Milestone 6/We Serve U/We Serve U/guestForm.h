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
		bool isReadOnly;

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
	private: System::Windows::Forms::Button^ btnSubmitOrder;

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
			this->btnSubmitOrder = (gcnew System::Windows::Forms::Button());
			this->lvwOrder = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(40, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Menu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(676, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Order";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(676, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Total:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(723, 154);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(314, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(766, 182);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(271, 22);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(676, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Order Status:";
			// 
			// btnPingWaitstaff
			// 
			this->btnPingWaitstaff->Location = System::Drawing::Point(346, 191);
			this->btnPingWaitstaff->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPingWaitstaff->Name = L"btnPingWaitstaff";
			this->btnPingWaitstaff->Size = System::Drawing::Size(326, 52);
			this->btnPingWaitstaff->TabIndex = 8;
			this->btnPingWaitstaff->Text = L"Ping Waitstaff";
			this->btnPingWaitstaff->UseVisualStyleBackColor = true;
			this->btnPingWaitstaff->Click += gcnew System::EventHandler(this, &guestForm::btnPingWaitstaff_Click);
			// 
			// btnPrintReciept
			// 
			this->btnPrintReciept->Location = System::Drawing::Point(12, 191);
			this->btnPrintReciept->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnPrintReciept->Name = L"btnPrintReciept";
			this->btnPrintReciept->Size = System::Drawing::Size(325, 52);
			this->btnPrintReciept->TabIndex = 9;
			this->btnPrintReciept->Text = L"Print Reciept";
			this->btnPrintReciept->UseVisualStyleBackColor = true;
			this->btnPrintReciept->Click += gcnew System::EventHandler(this, &guestForm::btnPrintReciept_Click);
			// 
			// lvwMenu
			// 
			this->lvwMenu->FullRowSelect = true;
			this->lvwMenu->HideSelection = false;
			this->lvwMenu->Location = System::Drawing::Point(12, 28);
			this->lvwMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lvwMenu->MultiSelect = false;
			this->lvwMenu->Name = L"lvwMenu";
			this->lvwMenu->Size = System::Drawing::Size(660, 153);
			this->lvwMenu->TabIndex = 10;
			this->lvwMenu->UseCompatibleStateImageBehavior = false;
			this->lvwMenu->View = System::Windows::Forms::View::Details;
			this->lvwMenu->SelectedIndexChanged += gcnew System::EventHandler(this, &guestForm::lvwMenu_SelectedIndexChanged);
			// 
			// btnSubmitOrder
			// 
			this->btnSubmitOrder->Location = System::Drawing::Point(679, 210);
			this->btnSubmitOrder->Margin = System::Windows::Forms::Padding(4);
			this->btnSubmitOrder->Name = L"btnSubmitOrder";
			this->btnSubmitOrder->Size = System::Drawing::Size(358, 33);
			this->btnSubmitOrder->TabIndex = 11;
			this->btnSubmitOrder->Text = L"Submit Order";
			this->btnSubmitOrder->UseVisualStyleBackColor = true;
			this->btnSubmitOrder->Click += gcnew System::EventHandler(this, &guestForm::button1_Click);
			// 
			// lvwOrder
			// 
			this->lvwOrder->FullRowSelect = true;
			this->lvwOrder->HideSelection = false;
			this->lvwOrder->Location = System::Drawing::Point(679, 28);
			this->lvwOrder->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->lvwOrder->MultiSelect = false;
			this->lvwOrder->Name = L"lvwOrder";
			this->lvwOrder->Size = System::Drawing::Size(358, 120);
			this->lvwOrder->TabIndex = 12;
			this->lvwOrder->UseCompatibleStateImageBehavior = false;
			this->lvwOrder->View = System::Windows::Forms::View::Details;
			this->lvwOrder->SelectedIndexChanged += gcnew System::EventHandler(this, &guestForm::lvwOrder_SelectedIndexChanged);
			// 
			// guestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1049, 250);
			this->Controls->Add(this->lvwOrder);
			this->Controls->Add(this->btnSubmitOrder);
			this->Controls->Add(this->lvwMenu);
			this->Controls->Add(this->btnPrintReciept);
			this->Controls->Add(this->btnPingWaitstaff);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"guestForm";
			this->Text = L"guestForm";
			this->Load += gcnew System::EventHandler(this, &guestForm::guestForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void guestForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->isReadOnly = false;
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


		lvwOrder->Columns->Add("Name");
		lvwOrder->Columns->Add("Description");
		lvwOrder->Columns->Add("Price", -2);
	}

	private: System::Void btnPingWaitstaff_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void btnPrintReciept_Click(System::Object^ sender, System::EventArgs^ e) {

	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->isReadOnly = true;
	}

	private: System::Void lvwOrder_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->isReadOnly)
		{
			lvwOrder->SelectedItems->Clear();
			lvwMenu->SelectedItems->Clear();
		}
		else
		{
		ListView::SelectedIndexCollection^ ourIndices = lvwOrder->SelectedIndices;
		for each (int var in ourIndices)
		{
			lvwOrder->Items->RemoveAt(var);
		}
		lvwOrder->Columns[0]->Width = -1;
		lvwOrder->Columns[1]->Width = -1;
		lvwMenu->SelectedItems->Clear();
		}
	}
	private: System::Void lvwMenu_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->isReadOnly)
		{
			lvwOrder->SelectedItems->Clear();
			lvwMenu->SelectedItems->Clear();
		}
		else
		{
		ListView::SelectedListViewItemCollection^ ourIndices = lvwMenu->SelectedItems;
		for each (ListViewItem ^ var in ourIndices)
		{
			ListViewItem^ newItem = ((ListViewItem^)(var->Clone()));
			lvwOrder->Items->Add(newItem);
		}
		lvwOrder->Columns[0]->Width = -1;
		lvwOrder->Columns[1]->Width = -1;
		lvwMenu->SelectedItems->Clear();
		}
	}
};
}
