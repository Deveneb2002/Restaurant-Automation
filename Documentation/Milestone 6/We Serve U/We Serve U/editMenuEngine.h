#pragma once
#include "Menu.hpp"
using namespace System::IO;
using namespace System;

bool isItemPresentInFile(String^ name);
bool addItemToFile(String^ name, String^ descrip, double price, bool avail);
bool removeItemFromFile(String^ name);
