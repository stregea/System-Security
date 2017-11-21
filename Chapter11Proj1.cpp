/**
*	Name: Samuel Tregea
*	Professor: Jeffrey Howard
*	Date: 21 November 2017
*	
*	Description: Using separate files, this program imitates a security system with a given administrator, and two given users. 
*			     This program has 3 header classes and 3 implmentation classes, along with the mainfuntion() being in the main method.
*				 One class with validate if whether or not a user exists, one will validate the user, and one will validate the administrator.
*				 The program will prompt user to input a username and a password, after the validation process, the program will prompt the user
*				 If they would like to re-enter their username and password. If they respond with 'n', the program will end.
*
*
**/


#include "stdafx.h"
#include "security.h"
#include "user.h"
#include "administrator.h"



//Adding the function to the namespace Tregea library
namespace Tregea
{
	void mainfunction();
}

//Defining mainfunction()
namespace Tregea
{
	void mainfunction()
	{
		
		/*
		*	Creating objects from other classes
		*/
		Security secure;
		Administrator admin;
		User user;


		/*
		*	Data members that will be used to gain user information
		*/
		string username;
		string password;
		char ans;

		cout << "This program is a mock program imitating a log in system.\n" << endl;



		cout << "\tUsing separate files, this program imitates a security system with a given administrator, and two given users.";
		cout << "\n\tThis program has 3 header classes and 3 implmentation classes,";
		cout << "\n\talong with the mainfuntion() being in the main method.";
		cout << "\n\tOne class with validate if whether or not a user exists, one will validate the user, ";
		cout << "\n\tand one will validate the administrator.";
		cout << "\n\tThe program will prompt user to input a username and a password";
		cout << "\n\tAfter the validation process, the program will prompt the user";
		cout << "\n\tif they would like to re-enter their username and password.";
		cout << "\n\tIf they respond with 'y' or 'Y', the program will continue, else it will end.";
		cout << endl;
		
		do
		{
			cout << "\nEnter your username" << endl;
			cin >> username;
			cout << "Enter your Password" << endl;
			cin >> password;
			cout << "\nSystem: ";
			secure.validate(username, password);
			cout << "Admin: ";
			admin.Login1(username, password);
			cout << "User: ";
			user.Login2(username, password);
			cout << "\nEnter again? y/n" << endl;
			cin >> ans;

		} while (ans == 'y' || ans == 'Y');
		cout << "\nGood-bye!"<<endl;
		
	}
}


/*/
*	Main Method
**/
using namespace Tregea;

int main()
{
	mainfunction();
	return 0;
}

//Given users:
//admin: Samuel
//adminPass: friday

//user1: abbott
//user1Pass: monday

//user2: costello
//user2Pass: tuesday