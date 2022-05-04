#include "manageEmployeeEngine.h"
#include <fstream>
#include <iostream>

//using namespace System;
using namespace System::IO;
using namespace std;

void RegisterEmployee(System::String^ employee, System::String^ username, System::String^ password) // "waiter" OR "chef"
{
	StreamWriter^ writer;
	if (employee == "waiter")
	{
		writer = gcnew StreamWriter("waitstaffLogin.txt", true);
	}
	else // chef
	{
		writer = gcnew StreamWriter("chefLogin.txt", true);
	}

	System::String^ newData = username + " " + password;
	writer->WriteLine(newData);
	writer->Close();
}

bool RemoveEmployee(System::String^ employee, System::String^ username)
{
	bool userFound = false;
	System::String^ builder = "";
	System::String^ currentLine;
	StreamReader^ reader;

	if (employee == "waiter")
	{
		reader = gcnew StreamReader("waitstaffLogin.txt");
	}
	else // chef
	{
		reader = gcnew StreamReader("chefLogin.txt");
	}

	while (!reader->EndOfStream)
	{
		currentLine = reader->ReadLine() + "\n";
		if (!currentLine->StartsWith(username))
		{
			builder = builder + currentLine;
		}
		else
		{
			userFound = true;
		}
	}

	reader->Close();
	StreamWriter^ writer;
	if (employee == "waiter")
	{
		writer = gcnew StreamWriter("waitstaffLogin.txt");
	}
	else // chef
	{
		writer = gcnew StreamWriter("chefLogin.txt");
	}

	writer->Write(builder);
	writer->Close();
	reader->Close();
	return userFound;
}