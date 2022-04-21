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
				reader->Close();
				return true;
			}
		}
	}
	reader->Close();
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
				reader->Close();
				return true;
			}
		}
	}
	reader->Close();
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
				reader->Close();
				return true;
			}
		}
	}
	reader->Close();
	return false;
}

bool isValidChef(String^ username)
{
	StreamReader^ reader = gcnew StreamReader("chefLogin.txt");
	String^ ourLine;

	while (!reader->EndOfStream)
	{
		ourLine = reader->ReadLine();
		if (ourLine->StartsWith(username))
		{
			reader->Close();
			return true;
		}
	}
	reader->Close();
	return false;
}

bool isValidManager(String^ username)
{
	StreamReader^ reader = gcnew StreamReader("managerLogin.txt");
	String^ ourLine;

	while (!reader->EndOfStream)
	{
		ourLine = reader->ReadLine();
		if (ourLine->StartsWith(username))
		{
			reader->Close();
			return true;
		}
	}

	reader->Close();
	return false;
}

bool isValidWaitStaff(String^ username)
{
	StreamReader^ reader = gcnew StreamReader("waitstaffLogin.txt");
	String^ ourLine;

	while (!reader->EndOfStream)
	{
		ourLine = reader->ReadLine();
		if (ourLine->StartsWith(username))
		{
			reader->Close();
			return true;
		}
	}

	reader->Close();
	return false;
}
