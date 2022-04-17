#pragma once
#include "isValidLogin.h";

using namespace System;
using namespace System::IO;

bool isValidChefLogin(String^ username, String^ password)
{
	StreamReader^ reader = gcnew StreamReader("chefLogin.txt");
	while (!reader->EndOfStream)
	{
		String^ ourLine = reader->ReadLine();
		if (ourLine->StartsWith(username))
		{
			if (ourLine->EndsWith(password))
			{
				return true;
			}
		}
	}
	return false;
}

bool isValidManagerLogin(String^ username, String^ password)
{
	StreamReader^ reader = gcnew StreamReader("managerLogin.txt");
	while (!reader->EndOfStream)
	{
		String^ ourLine = reader->ReadLine();
		if (ourLine->StartsWith(username))
		{
			if (ourLine->EndsWith(password))
			{
				return true;
			}
		}
	}
	return false;
}

bool isValidWaitstaffLogin(String^ username, String^ password)
{
	StreamReader^ reader = gcnew StreamReader("waitstaffLogin.txt");
	while (!reader->EndOfStream)
	{
		String^ ourLine = reader->ReadLine();
		if (ourLine->StartsWith(username))
		{
			if (ourLine->EndsWith(password))
			{
				return true;
			}
		}
	}
	return false;
}