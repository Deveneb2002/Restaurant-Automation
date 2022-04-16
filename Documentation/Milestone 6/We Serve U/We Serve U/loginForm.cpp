#include "loginForm.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	WeServeU::loginForm newForm;
	//newForm.Show();
	while (newForm.ShowDialog() != DialogResult::Cancel)
	{

	};
	//Application::Run(% newForm);
}
