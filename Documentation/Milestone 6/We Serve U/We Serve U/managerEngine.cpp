#include "managerEngine.h"
#include <fstream>
#include <iostream>

using namespace System;
using namespace System::IO;
using namespace std;

void RegisterEmployee(String^ employee, String^ username, String^ password) // "waiter" OR "chef"
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

	String^ newData = username + " " + password;
	writer->WriteLine(newData);
	writer->Close();
}

bool RemoveEmployee(String^ employee, String^ username)
{
	bool userFound = false;
	String^ builder = "";
	String^ currentLine;
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