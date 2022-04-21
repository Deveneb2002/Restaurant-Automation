#pragma once
#include "editMenuEngine.h"
namespace WeServeU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for editMenuForm
	/// </summary>
	public ref class editMenuForm : public System::Windows::Forms::Form
	{
	public:
		editMenuForm(void)
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
		~editMenuForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::TextBox^ tbItemDetail1;
	protected:

	private: System::Windows::Forms::Label^ lbItemDetail1;

	private: System::Windows::Forms::TextBox^ tbItemName;
	private: System::Windows::Forms::Label^ lbItemName;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnRemoveItem;
	private: System::Windows::Forms::Button^ btnAddItem;
	private: System::Windows::Forms::Button^ btnDone;
	private: System::Windows::Forms::Label^ lbEditMenu;
	private: System::Windows::Forms::Button^ btnSetItemName;

	private: System::Windows::Forms::Button^ btnSetItemPrice;

	private: System::Windows::Forms::Button^ btnSetItemDescription;
	private: System::Windows::Forms::Button^ btnSetItemAvailability;



	private: System::Windows::Forms::TextBox^ tbItemDetail2;
	private: System::Windows::Forms::Label^ lbItemDetail2;


	private: System::Windows::Forms::Label^ lbItemDetail3;
	private: System::Windows::Forms::Button^ btnYes;
	private: System::Windows::Forms::Button^ btnNo;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;


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
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->tbItemDetail1 = (gcnew System::Windows::Forms::TextBox());
			this->lbItemDetail1 = (gcnew System::Windows::Forms::Label());
			this->tbItemName = (gcnew System::Windows::Forms::TextBox());
			this->lbItemName = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnSetItemName = (gcnew System::Windows::Forms::Button());
			this->btnSetItemPrice = (gcnew System::Windows::Forms::Button());
			this->btnSetItemDescription = (gcnew System::Windows::Forms::Button());
			this->btnSetItemAvailability = (gcnew System::Windows::Forms::Button());
			this->btnRemoveItem = (gcnew System::Windows::Forms::Button());
			this->btnAddItem = (gcnew System::Windows::Forms::Button());
			this->btnDone = (gcnew System::Windows::Forms::Button());
			this->lbEditMenu = (gcnew System::Windows::Forms::Label());
			this->tbItemDetail2 = (gcnew System::Windows::Forms::TextBox());
			this->lbItemDetail2 = (gcnew System::Windows::Forms::Label());
			this->lbItemDetail3 = (gcnew System::Windows::Forms::Label());
			this->btnYes = (gcnew System::Windows::Forms::Button());
			this->btnNo = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnBack
			// 
			this->btnBack->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnBack->Location = System::Drawing::Point(12, 715);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(241, 53);
			this->btnBack->TabIndex = 18;
			this->btnBack->Text = L"Back to Main";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &editMenuForm::btnBack_Click);
			// 
			// tbItemDetail1
			// 
			this->tbItemDetail1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbItemDetail1->Location = System::Drawing::Point(36, 431);
			this->tbItemDetail1->Name = L"tbItemDetail1";
			this->tbItemDetail1->Size = System::Drawing::Size(635, 31);
			this->tbItemDetail1->TabIndex = 17;
			// 
			// lbItemDetail1
			// 
			this->lbItemDetail1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lbItemDetail1->AutoSize = true;
			this->lbItemDetail1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbItemDetail1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lbItemDetail1->Location = System::Drawing::Point(29, 368);
			this->lbItemDetail1->Name = L"lbItemDetail1";
			this->lbItemDetail1->Size = System::Drawing::Size(185, 39);
			this->lbItemDetail1->TabIndex = 16;
			this->lbItemDetail1->Text = L"Description";
			// 
			// tbItemName
			// 
			this->tbItemName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbItemName->Location = System::Drawing::Point(36, 322);
			this->tbItemName->Name = L"tbItemName";
			this->tbItemName->Size = System::Drawing::Size(635, 31);
			this->tbItemName->TabIndex = 15;
			// 
			// lbItemName
			// 
			this->lbItemName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lbItemName->AutoSize = true;
			this->lbItemName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbItemName->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lbItemName->Location = System::Drawing::Point(29, 258);
			this->lbItemName->Name = L"lbItemName";
			this->lbItemName->Size = System::Drawing::Size(174, 39);
			this->lbItemName->TabIndex = 14;
			this->lbItemName->Text = L"Item name";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				100)));
			this->tableLayoutPanel1->Controls->Add(this->btnSetItemName, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->btnSetItemPrice, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->btnSetItemDescription, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->btnSetItemAvailability, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->btnRemoveItem, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->btnAddItem, 0, 0);
			this->tableLayoutPanel1->Font = (gcnew System::Drawing::Font(L"Trebuchet MS", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel1->Location = System::Drawing::Point(124, 202);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(465, 402);
			this->tableLayoutPanel1->TabIndex = 10;
			// 
			// btnSetItemName
			// 
			this->btnSetItemName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSetItemName->BackColor = System::Drawing::Color::Yellow;
			this->btnSetItemName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSetItemName->Location = System::Drawing::Point(3, 333);
			this->btnSetItemName->Name = L"btnSetItemName";
			this->btnSetItemName->Size = System::Drawing::Size(459, 66);
			this->btnSetItemName->TabIndex = 5;
			this->btnSetItemName->Text = L"Set item name";
			this->btnSetItemName->UseVisualStyleBackColor = false;
			// 
			// btnSetItemPrice
			// 
			this->btnSetItemPrice->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSetItemPrice->BackColor = System::Drawing::Color::Yellow;
			this->btnSetItemPrice->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSetItemPrice->Location = System::Drawing::Point(3, 267);
			this->btnSetItemPrice->Name = L"btnSetItemPrice";
			this->btnSetItemPrice->Size = System::Drawing::Size(459, 60);
			this->btnSetItemPrice->TabIndex = 4;
			this->btnSetItemPrice->Text = L"Set Item price";
			this->btnSetItemPrice->UseVisualStyleBackColor = false;
			// 
			// btnSetItemDescription
			// 
			this->btnSetItemDescription->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSetItemDescription->BackColor = System::Drawing::Color::Yellow;
			this->btnSetItemDescription->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSetItemDescription->Location = System::Drawing::Point(3, 201);
			this->btnSetItemDescription->Name = L"btnSetItemDescription";
			this->btnSetItemDescription->Size = System::Drawing::Size(459, 60);
			this->btnSetItemDescription->TabIndex = 3;
			this->btnSetItemDescription->Text = L"Set item description";
			this->btnSetItemDescription->UseVisualStyleBackColor = false;
			// 
			// btnSetItemAvailability
			// 
			this->btnSetItemAvailability->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnSetItemAvailability->BackColor = System::Drawing::Color::Yellow;
			this->btnSetItemAvailability->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSetItemAvailability->Location = System::Drawing::Point(3, 135);
			this->btnSetItemAvailability->Name = L"btnSetItemAvailability";
			this->btnSetItemAvailability->Size = System::Drawing::Size(459, 60);
			this->btnSetItemAvailability->TabIndex = 2;
			this->btnSetItemAvailability->Text = L"Set item availability";
			this->btnSetItemAvailability->UseVisualStyleBackColor = false;
			// 
			// btnRemoveItem
			// 
			this->btnRemoveItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnRemoveItem->BackColor = System::Drawing::Color::Yellow;
			this->btnRemoveItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRemoveItem->Location = System::Drawing::Point(3, 69);
			this->btnRemoveItem->Name = L"btnRemoveItem";
			this->btnRemoveItem->Size = System::Drawing::Size(459, 60);
			this->btnRemoveItem->TabIndex = 1;
			this->btnRemoveItem->Text = L"Remove Item";
			this->btnRemoveItem->UseVisualStyleBackColor = false;
			this->btnRemoveItem->Click += gcnew System::EventHandler(this, &editMenuForm::btnRemoveItem_Click);
			// 
			// btnAddItem
			// 
			this->btnAddItem->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnAddItem->BackColor = System::Drawing::Color::Yellow;
			this->btnAddItem->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAddItem->Location = System::Drawing::Point(3, 3);
			this->btnAddItem->Name = L"btnAddItem";
			this->btnAddItem->Size = System::Drawing::Size(459, 60);
			this->btnAddItem->TabIndex = 0;
			this->btnAddItem->Text = L"Add item";
			this->btnAddItem->UseVisualStyleBackColor = false;
			this->btnAddItem->Click += gcnew System::EventHandler(this, &editMenuForm::btnAddItem_Click);
			// 
			// btnDone
			// 
			this->btnDone->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnDone->Location = System::Drawing::Point(453, 715);
			this->btnDone->Name = L"btnDone";
			this->btnDone->Size = System::Drawing::Size(241, 53);
			this->btnDone->TabIndex = 12;
			this->btnDone->Text = L"Done";
			this->btnDone->UseVisualStyleBackColor = true;
			this->btnDone->Click += gcnew System::EventHandler(this, &editMenuForm::btnDone_Click);
			// 
			// lbEditMenu
			// 
			this->lbEditMenu->AutoSize = true;
			this->lbEditMenu->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEditMenu->Location = System::Drawing::Point(27, 36);
			this->lbEditMenu->Name = L"lbEditMenu";
			this->lbEditMenu->Size = System::Drawing::Size(213, 50);
			this->lbEditMenu->TabIndex = 11;
			this->lbEditMenu->Text = L"Edit Menu";
			// 
			// tbItemDetail2
			// 
			this->tbItemDetail2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->tbItemDetail2->Location = System::Drawing::Point(36, 534);
			this->tbItemDetail2->Name = L"tbItemDetail2";
			this->tbItemDetail2->Size = System::Drawing::Size(635, 31);
			this->tbItemDetail2->TabIndex = 20;
			// 
			// lbItemDetail2
			// 
			this->lbItemDetail2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lbItemDetail2->AutoSize = true;
			this->lbItemDetail2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbItemDetail2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lbItemDetail2->Location = System::Drawing::Point(29, 471);
			this->lbItemDetail2->Name = L"lbItemDetail2";
			this->lbItemDetail2->Size = System::Drawing::Size(89, 39);
			this->lbItemDetail2->TabIndex = 19;
			this->lbItemDetail2->Text = L"Price";
			// 
			// lbItemDetail3
			// 
			this->lbItemDetail3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->lbItemDetail3->AutoSize = true;
			this->lbItemDetail3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbItemDetail3->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->lbItemDetail3->Location = System::Drawing::Point(29, 582);
			this->lbItemDetail3->Name = L"lbItemDetail3";
			this->lbItemDetail3->Size = System::Drawing::Size(279, 39);
			this->lbItemDetail3->TabIndex = 21;
			this->lbItemDetail3->Text = L"Is item available \?";
			// 
			// btnYes
			// 
			this->btnYes->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->btnYes->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnYes->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnYes->Location = System::Drawing::Point(3, 3);
			this->btnYes->Name = L"btnYes";
			this->btnYes->Size = System::Drawing::Size(308, 45);
			this->btnYes->TabIndex = 0;
			this->btnYes->Text = L"Yes";
			this->btnYes->UseVisualStyleBackColor = false;
			this->btnYes->Click += gcnew System::EventHandler(this, &editMenuForm::btnYes_Click);
			// 
			// btnNo
			// 
			this->btnNo->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnNo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.875F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNo->Location = System::Drawing::Point(317, 3);
			this->btnNo->Name = L"btnNo";
			this->btnNo->Size = System::Drawing::Size(308, 45);
			this->btnNo->TabIndex = 1;
			this->btnNo->Text = L"No";
			this->btnNo->UseVisualStyleBackColor = false;
			this->btnNo->Click += gcnew System::EventHandler(this, &editMenuForm::btnNo_Click);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->btnNo, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->btnYes, 0, 0);
			this->tableLayoutPanel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tableLayoutPanel2->Location = System::Drawing::Point(43, 647);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 1;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(628, 51);
			this->tableLayoutPanel2->TabIndex = 22;
			// 
			// editMenuForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(706, 814);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->lbItemDetail3);
			this->Controls->Add(this->tbItemDetail2);
			this->Controls->Add(this->lbItemDetail2);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->tbItemDetail1);
			this->Controls->Add(this->lbItemDetail1);
			this->Controls->Add(this->tbItemName);
			this->Controls->Add(this->lbItemName);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->btnDone);
			this->Controls->Add(this->lbEditMenu);
			this->Name = L"editMenuForm";
			this->Text = L"editMenuForm";
			this->Load += gcnew System::EventHandler(this, &editMenuForm::editMenuForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void editMenuForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->resetScreen();
	}
private: System::Void btnAddItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->resetScreen();

	this->tableLayoutPanel1->Hide();
	this->lbEditMenu->Text = "Add Item";

	this->lbItemName->Show();

	this->lbItemDetail1->Show();
	this->lbItemDetail1->Text = "Item description";

	this->lbItemDetail2->Show();
	this->lbItemDetail2->Text = "Item price";

	this->lbItemDetail3->Show();
	this->lbItemDetail3->Text = "Item availability";

	this->tbItemName->Show();
	this->tbItemDetail1->Show();
	this->tbItemDetail2->Show();

	this->btnYes->Show();
	this->btnNo->Show();

	this->btnDone->Show();
	this->btnBack->Text = "Back";

}
private: System::Void btnRemoveItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->resetScreen();

	this->tableLayoutPanel1->Hide();
	this->lbEditMenu->Text = "Remove Item";

	this->lbItemName->Show();
	this->tbItemName->Show();

	this->btnDone->Show();
	this->btnBack->Text = "Back";
}
private: System::Void resetScreen()
{
	resetFieldsText();
	this->lbEditMenu->Show();
	this->tableLayoutPanel1->Show();
	this->lbItemName->Hide();
	this->lbItemDetail1->Hide();
	this->lbItemDetail2->Hide();
	this->lbItemDetail3->Hide();
	this->tbItemName->Hide();
	this->tbItemDetail1->Hide();
	this->tbItemDetail2->Hide();
	this->btnDone->Hide();
	this->btnYes->Hide();
	this->btnNo->Hide();
	this->btnBack->Text = "Back to Main";
}
private: System::Void resetFieldsText()
{
	this->tbItemName->Text = "";
	this->tbItemDetail1->Text = "";
	this->tbItemDetail2->Text = "";
}
private: System::Void btnDone_Click(System::Object^ sender, System::EventArgs^ e) 
{
	bool isProcessCompleted = false;
	
	// check if it is on Add item screen
	if (this->lbEditMenu->Text == "Add Item")
	{
		// For add item all field must be filled by the user
		if (System::String::IsNullOrEmpty(tbItemName->Text) || System::String::IsNullOrEmpty(tbItemDetail1->Text)
			|| System::String::IsNullOrEmpty(this->tbItemDetail2->Text))
		{
			throw gcnew System::Exception("All fields must be filled!");
		}
		else // All fields are filled with data at this point
		{
			// check if the item is already saved on the system
			if (isItemPresentInFile(this->tbItemName->Text))
			{
				throw gcnew System::Exception("This item is already added!");
				resetFieldsText();
			}
			else
			{
				if (this->btnYes->BackColor == System::Drawing::SystemColors::ControlLightLight)
				{
					isProcessCompleted = addItemToFile(this->tbItemName->Text, this->tbItemDetail1->Text, System::Convert::ToDouble(this->tbItemDetail2->Text), false);
				}
				else
				{
					isProcessCompleted = addItemToFile(this->tbItemName->Text, this->tbItemDetail1->Text, System::Convert::ToDouble(this->tbItemDetail2->Text), true);

				}

				if (isProcessCompleted)
				{
					MessageBox::Show("Item is added to menu successfully");
					resetFieldsText();
				}
				else
				{
					throw gcnew System::Exception("Process is not completed !!");
				}
			}
		}
	}
	// check if it is on Remove item screen
	else if (this->lbEditMenu->Text == "Remove Item")
	{
		// For remove item name field must be filled
		if (System::String::IsNullOrEmpty(tbItemName->Text))
		{
			throw gcnew System::Exception("You need to enter the item name!");
		}
		else // name field is filled with data at this point
		{
			// check if the item is saved on the system
			if (isItemPresentInFile(this->tbItemName->Text))
			{
				isProcessCompleted = removeItemFromFile(this->tbItemName->Text);

				if (isProcessCompleted)
				{
					MessageBox::Show("Item is removed from menu successfully");
					resetFieldsText();
				}
				else
				{
					throw gcnew System::Exception("Process is not completed !!");
				}
			}
			else
			{
				throw gcnew System::Exception("Item not found!");
				resetFieldsText();
			}
		}
	}

}
private: System::Void btnYes_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->btnYes->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
	this->btnNo->BackColor = System::Drawing::SystemColors::ControlLightLight;
}

private: System::Void btnNo_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->btnNo->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
	this->btnYes->BackColor = System::Drawing::SystemColors::ControlLightLight;
}

private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) 
{
	if (this->lbEditMenu->Text == "Edit Menu")
	{
		this->Hide();
	}
	else
	{
		this->resetScreen();
	}
}
};
}
