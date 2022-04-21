#pragma once
#include "Menu.hpp"
#include <msclr\marshal_cppstd.h>

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
	private: System::Windows::Forms::ListBox^ lbxOrder;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnPingWaitstaff;
	private: System::Windows::Forms::Button^ btnPrintReciept;
	private: System::Windows::Forms::ListView^ lvwMenu;

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
			this->lbxOrder = (gcnew System::Windows::Forms::ListBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnPingWaitstaff = (gcnew System::Windows::Forms::Button());
			this->btnPrintReciept = (gcnew System::Windows::Forms::Button());
			this->lvwMenu = (gcnew System::Windows::Forms::ListView());
			this->SuspendLayout();
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
			this->label2->Location = System::Drawing::Point(678, 7);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Order";
			// 
			// lbxOrder
			// 
			this->lbxOrder->FormattingEnabled = true;
			this->lbxOrder->ItemHeight = 16;
			this->lbxOrder->Location = System::Drawing::Point(678, 28);
			this->lbxOrder->Name = L"lbxOrder";
			this->lbxOrder->Size = System::Drawing::Size(359, 116);
			this->lbxOrder->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(678, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(41, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Total:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(725, 154);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(312, 22);
			this->textBox1->TabIndex = 5;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(768, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(269, 22);
			this->textBox2->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(678, 185);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Order Status:";
			// 
			// btnPingWaitstaff
			// 
			this->btnPingWaitstaff->Location = System::Drawing::Point(12, 187);
			this->btnPingWaitstaff->Name = L"btnPingWaitstaff";
			this->btnPingWaitstaff->Size = System::Drawing::Size(660, 56);
			this->btnPingWaitstaff->TabIndex = 8;
			this->btnPingWaitstaff->Text = L"Ping Waitstaff";
			this->btnPingWaitstaff->UseVisualStyleBackColor = true;
			// 
			// btnPrintReciept
			// 
			this->btnPrintReciept->Location = System::Drawing::Point(681, 210);
			this->btnPrintReciept->Name = L"btnPrintReciept";
			this->btnPrintReciept->Size = System::Drawing::Size(356, 31);
			this->btnPrintReciept->TabIndex = 9;
			this->btnPrintReciept->Text = L"Print Reciept";
			this->btnPrintReciept->UseVisualStyleBackColor = true;
			// 
			// lvwMenu
			// 
			this->lvwMenu->FullRowSelect = true;
			this->lvwMenu->HideSelection = false;
			this->lvwMenu->Location = System::Drawing::Point(12, 28);
			this->lvwMenu->MultiSelect = false;
			this->lvwMenu->Name = L"lvwMenu";
			this->lvwMenu->Size = System::Drawing::Size(660, 153);
			this->lvwMenu->TabIndex = 10;
			this->lvwMenu->UseCompatibleStateImageBehavior = false;
			this->lvwMenu->View = System::Windows::Forms::View::Details;
			// 
			// guestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1049, 255);
			this->Controls->Add(this->lvwMenu);
			this->Controls->Add(this->btnPrintReciept);
			this->Controls->Add(this->btnPingWaitstaff);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lbxOrder);
			this->Controls->Add(this->label1);
			this->Name = L"guestForm";
			this->Text = L"guestForm";
			this->Load += gcnew System::EventHandler(this, &guestForm::guestForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void guestForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LinkedList* pOurMenu = new LinkedList;
		//Read menu from file
		StreamReader^ reader = gcnew StreamReader("menu.txt");
		while (!reader->EndOfStream)
		{
			//Strings in std
			std::string ourLine = msclr::interop::marshal_as<std::string>(reader->ReadLine());
			//name
			int end = ourLine.find("\"");
			string ourName = ourLine.substr(0, end);
			ourLine.erase(0, end + 1);
			//Description
			end = ourLine.find("\"");
			string ourDescription = ourLine.substr(0, end);
			ourLine.erase(0, end + 2);
			//Price
			end = ourLine.find(" ");
			string tempString = ourLine.substr(0, end);
			double ourPrice = std::stod(tempString);
			ourLine.erase(0, end + 1);
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
		//Insert menu into listview
		lvwMenu->Columns->Add("Name");
		lvwMenu->Columns->Add("Description");
		lvwMenu->Columns->Add("Price", -2);

		Node* pOurCurrentItem = pOurMenu->getHead();
		while (true)
		{
			if (pOurCurrentItem != nullptr)
			{
				if (pOurCurrentItem->getAvailability())
				{
					ListViewItem^ newItem = gcnew ListViewItem();

					System::String^ ourName = gcnew System::String(pOurCurrentItem->getName().c_str());
					newItem->Text = ourName;

					System::String^ ourDescription = gcnew System::String(pOurCurrentItem->getDescription().c_str());
					newItem->SubItems->Add(ourDescription);

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
	};
}
