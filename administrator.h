//Header file to administrator.cpp
#pragma once
#ifndef ADMIN_H
#define ADMIN_H

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

namespace Tregea
{
	class Administrator
	{
	public:
		 bool Login1(string adminName, string adminPassword);
	};
}

#endif // !ADMIN.H