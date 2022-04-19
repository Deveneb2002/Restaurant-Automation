#include "loginForm.h"


using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
void main()
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