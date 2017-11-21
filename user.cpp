//Implementation file of user.h
#include "stdafx.h"
#include "user.h"

//Adding the method Login2() to namespace Tregea
namespace Tregea
{
	bool User::Login2(string username, string userpassword)
	{
		if ((username == "Samuel") && (userpassword == "friday"))//Admin information
		{
			cout << "Access granted!" << endl;
			return true;
		}
		if ((username == "abbott") && (userpassword == "monday"))
		{
			cout << "Access granted!" << endl;
			return true;
		}
		if ((username == "costello") && (userpassword == "tuesday"))
		{
			cout << "Access granted!" << endl;
			return true;
		}
		else
		{
			cout << "Please enter a valid user." << endl;
			return false;
		}
	}
}