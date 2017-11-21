//Implementation file of administrator.h
#include "stdafx.h"
#include "administrator.h"

//Adding the method Login1() to namespace Tregea
namespace Tregea
{
	 bool Administrator::Login1(string adminName, string adminPassword)
	{
		 if ((adminName == "Samuel") && (adminPassword == "friday"))
		 {
			cout << "Access granted!" << endl;
			return true;
		 }
		else
		{
			cout << "Not a admin." << endl;
			return false;
		}
	}
	
}
