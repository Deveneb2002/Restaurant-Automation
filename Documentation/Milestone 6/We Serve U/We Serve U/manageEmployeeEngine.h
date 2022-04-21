#pragma once
//using namespace System;
using namespace System::IO;

void RegisterEmployee(System::String^ employee, System::String^ username, System::String^ password); // "waiter" OR "chef"
bool RemoveEmployee(System::String^ employee, System::String^ username);