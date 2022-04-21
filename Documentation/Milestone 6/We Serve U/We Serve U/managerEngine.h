#pragma once
using namespace System;
using namespace System::IO;

void RegisterEmployee(String^ employee, String^ username, String^ password); // "waiter" OR "chef"
bool RemoveEmployee(String^ employee, String^ username);