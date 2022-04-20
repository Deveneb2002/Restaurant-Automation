#pragma once
#include "guestForm.h"
using namespace System;
using namespace System::IO;

bool isValidChefLogin(String^ username, String^ password);
bool isValidManagerLogin(String^ username, String^ password);
bool isValidWaitstaffLogin(String^ username, String^ password);