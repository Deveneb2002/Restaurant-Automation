#include "editMenuEngine.h"

// return true if the item is present in the file
bool isItemPresentInFile(String^ name)
{
	bool userFound = false;
	System::String^ builder = "";
	System::String^ currentLine;

	StreamReader^ reader = gcnew StreamReader("menu.txt");

	if (!reader)
		return false;

	while (!reader->EndOfStream)
	{
		currentLine = reader->ReadLine() + "\n";
		if (currentLine->StartsWith(name))
		{
			userFound = true;
		}
	}

	reader->Close();
	return userFound;
}

bool addItemToFile(String^ name, String^ descrip, double price, bool avail)
{
	StreamWriter^ writer = gcnew StreamWriter("menu.txt", true);

	// file cannot be opened
	if(!writer)
		return false;

	writer->Write(name);
	writer->Write(" \"");
	writer->Write(descrip);
	writer->Write("\" ");
	writer->Write(price.ToString());
	writer->Write(" ");
	if (avail)
		writer->WriteLine("Available");
	else
		writer->WriteLine("NotAvailable");

	writer->Close();
	return true;
}

bool removeItemFromFile(String^ name)
{
	bool userFound = false;
	System::String^ builder = "";
	System::String^ currentLine;

	StreamReader^ reader = gcnew StreamReader("menu.txt");

	if (!reader)
		return false;

	while (!reader->EndOfStream)
	{
		currentLine = reader->ReadLine() + "\n";
		if (!currentLine->StartsWith(name))
		{
			builder = builder + currentLine;
		}
		else
		{
			userFound = true;
		}
	}

	reader->Close();
	StreamWriter^ writer = gcnew StreamWriter("menu.txt");

	writer->Write(builder);
	writer->Close();
	reader->Close();
	return userFound;
}

//StreamReader^ reader = gcnew StreamReader("menu.txt");
//String^ ourLine = reader->ReadLine();
//
//String^ tempPortion;
//bool isDescription = false;
//for (int i = 0; i < ourLine->Length; i++)
//{
//	// deal with the desription
//	if (ourLine[i] == '"')
//	{
//		isDescription = true;
//	}
//
//	if (isDescription = true && ourLine[i] != '"')
//	{
//		isDescription = true;
//	}
//
//	if (isDescription = true && ourLine[i] == '"')
//	{
//		isDescription = false;
//	}
//
//}
//return true;
