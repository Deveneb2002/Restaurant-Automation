#pragma once
#include "isValidLogin.h";

//using namespace System;
using namespace System::IO;

bool isValidChefLogin(System::String^ username, System::String^ password)
{
	StreamReader^ reader = gcnew StreamReader("chefLogin.txt");
	while (!reader->EndOfStream)
	{
	System::String^ ourLine = reader->ReadLine();
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

bool isValidManagerLogin(System::String^ username, System ::String^ password)
{
	StreamReader^ reader = gcnew StreamReader("managerLogin.txt");
	while (!reader->EndOfStream)
	{
		System::String^ ourLine = reader->ReadLine();
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

bool isValidWaitstaffLogin(System::String^ username, System::String^ password)
{
	StreamReader^ reader = gcnew StreamReader("waitstaffLogin.txt");
	while (!reader->EndOfStream)
	{
		System::String^ ourLine = reader->ReadLine();
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

bool isValidChef(System::String^ username)
{
	StreamReader^ reader = gcnew StreamReader("chefLogin.txt");
	System::String^ ourLine;

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

bool isValidManager(System::String^ username)
{
	StreamReader^ reader = gcnew StreamReader("managerLogin.txt");
	System::String^ ourLine;

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

bool isValidWaitStaff(System::String^ username)
{
	StreamReader^ reader = gcnew StreamReader("waitstaffLogin.txt");
	System::String^ ourLine;

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
