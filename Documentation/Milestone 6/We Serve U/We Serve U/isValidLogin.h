#pragma once
#include "guestForm.h"
//using namespace System;
using namespace System::IO;

bool isValidChefLogin(System::String^ username, System::String^ password);
bool isValidManagerLogin(System::String^ username, System::String^ password);
bool isValidWaitstaffLogin(System::String^ username, System::String^ password);
bool isValidChef(System::String^ username);
bool isValidManager(System::String^ username);
bool isValidWaitStaff(System::String^ username);
