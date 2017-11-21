//Header file to security.cpp
#pragma once
#ifndef SECURE_H
#define SECURE_H

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

namespace Tregea
{
	class Security
	{
	
	public:
		static int validate(string username, string password);
	};

}

#endif