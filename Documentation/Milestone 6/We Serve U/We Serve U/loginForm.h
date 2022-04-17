#pragma once
#include "guestForm.h"
#include "chefForm.h"
#include "managerForm.h"
#include "waitstaffForm.h"
#include "isValidLogin.h"

namespace WeServeU {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Button^ btnContinueAsGuest;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbxUsername;
	private: System::Windows::Forms::TextBox^ tbxPassword;

	protected:

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
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->btnContinueAsGuest = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbxUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbxPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(3, 85);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(293, 23);
			this->btnLogin->TabIndex = 0;
			this->btnLogin->Text = L"Log In";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &loginForm::btnLogin_Click);
			// 
			// btnContinueAsGuest
			// 
			this->btnContinueAsGuest->Location = System::Drawing::Point(3, 56);
			this->btnContinueAsGuest->Name = L"btnContinueAsGuest";
			this->btnContinueAsGuest->Size = System::Drawing::Size(293, 23);
			this->btnContinueAsGuest->TabIndex = 1;
			this->btnContinueAsGuest->Text = L"Continue As Guest";
			this->btnContinueAsGuest->UseVisualStyleBackColor = true;
			this->btnContinueAsGuest->Click += gcnew System::EventHandler(this, &loginForm::btnContinueAsGuest_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password:";
			// 
			// tbxUsername
			// 
			this->tbxUsername->Location = System::Drawing::Point(79, 0);
			this->tbxUsername->Name = L"tbxUsername";
			this->tbxUsername->Size = System::Drawing::Size(217, 22);
			this->tbxUsername->TabIndex = 4;
			// 
			// tbxPassword
			// 
			this->tbxPassword->Location = System::Drawing::Point(79, 28);
			this->tbxPassword->Name = L"tbxPassword";
			this->tbxPassword->Size = System::Drawing::Size(217, 22);
			this->tbxPassword->TabIndex = 5;
			this->tbxPassword->UseSystemPasswordChar = true;
			this->tbxPassword->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &loginForm::Enter);
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(304, 117);
			this->Controls->Add(this->tbxPassword);
			this->Controls->Add(this->tbxUsername);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnContinueAsGuest);
			this->Controls->Add(this->btnLogin);
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::String::IsNullOrEmpty(tbxUsername->Text) || System::String::IsNullOrEmpty(tbxPassword->Text))
		{
			MessageBox::Show("Please input a username and password", "Login Error");
		}
		else
		{
			if (isValidChefLogin(tbxUsername->Text, tbxPassword->Text))
			{
				WeServeU::chefForm newForm;
				this->Hide();
				while (newForm.ShowDialog().ToString() != "Cancel")
				{
				}
				this->Show();
			}
			else if (isValidManagerLogin(tbxUsername->Text, tbxPassword->Text))
			{
				WeServeU::managerForm newForm;
				this->Hide();
				while (newForm.ShowDialog().ToString() != "Cancel")
				{
				}
				this->Show();
			}
			else if (isValidWaitstaffLogin(tbxUsername->Text, tbxPassword->Text))
			{
				WeServeU::waitstaffForm newForm;
				this->Hide();
				while (newForm.ShowDialog().ToString() != "Cancel")
				{
				}
				this->Show();
			}
			else
			{
				MessageBox::Show("Invalid username and password", "Login Error");
			}
		}
	}
	private: System::Void btnContinueAsGuest_Click(System::Object^ sender, System::EventArgs^ e) {
		WeServeU::guestForm newForm;
		this->Hide();
		while (newForm.ShowDialog().ToString() != "Cancel")
		{
		}
		this->Show();
		//newForm.Show();
		//Application::Run(% newForm);
	}
	private: System::Void Enter(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == 13)
		{
			btnLogin_Click(sender, e);
		}
	}
};
}
