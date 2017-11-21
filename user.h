//Header file to user.cpp
#pragma once
#ifndef USER_H
#define USER_H

#include "stdafx.h"
#include <iostream>
#include <string>


using namespace std;

namespace Tregea
{
	class User
	{
	public:
		static bool Login2(string username, string userpassword);
	};
}

#endif // !USER.H