
#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
#include <sstream>
#include <Windows.h>
#include <conio.h>
#include <limits>
#include <cctype>
#include <vector>
#include <map>


using namespace std;

int main()
{

	cout << "Welcome to LeBank Personal Currency Management System\n" << endl;

	cout << "This is a simple software that allows anyone to keep track of how much money they may" << endl;
	cout << "have in the procession at one time, down to the individual bills. This will allow for" << endl;
	cout << "a better overview of how much money you currently have in your piggy bank at home or" << endl;
	cout << "anywhere else. This software will also eliminate the task of recounting money when" << endl;
	cout << "you forgot how much you have at one time.\n" << endl;

	cout << "Disclaimer: This software has very low security protocol in place to keep the data" << endl;
	cout << "that it handles from unwanted eyes.So please take secondary precautions if you are" << endl;
	cout << "going to use this software in a commercial environment. There is no support for this" << endl;
	cout << "software, this software is as is. The developer of this software is not responsible" << endl;
	cout << "for any damages caused. USE AT YOUR OWN RISK.\n" << endl;

	cout << "Version 1.0\n" << endl;

	char type;
	while (true) {
		cout << "Do you want to use this program? [y/n]" << endl;
		cin >> type;
		if (type == 'y') {
			break;
		}
		else if (type == 'n') {
			exit(0);
		}
	}

	system("cls");

	printf("Executing");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");

	string DEBUG;
	//cout << "name:\n";    // I don't know why i need two cin?
	getline(cin, DEBUG);

	string name;
	cout << "Name: ";    // there needs to be a logic to stop if the user puts nothing or something wrong
	getline(cin, name);

	system("cls");

	printf("Authenticating");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	
	system("cls");

	const string USERNAME = "Sierra";
	const string PASSWORD = "716715";
	string username, password;
	cout << "Enter Username: ";
	cin >> username;
	if (username.length() < 4)
	{
		cout << "Invalid Username\n";
		exit(0);
	}
	else
	{
		cout << "Enter Password: ";
		cin >> password;
		if (password.length() < 6)
		{
			cout << "Invalid Password\n";
			exit(0);
		}
		else
		{
			if (username == USERNAME && password == PASSWORD)
			{
				cout << "Access Granted" << endl;
				Sleep(1000);
				system("cls");

				printf("Checking LDAP");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".\n");
				system("cls");

				printf("Initializing");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".\n");
				system("cls");

				cout << "Hello " << name << endl;
				Sleep(500);

				printf("Pulling Resources");
				Sleep(1000);
				printf(".");
				Sleep(1000);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".\n");
				system("cls");

				//login logic needed
				printf("Loading Data");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".\n");
				system("cls");

				//this can be where the data entry goes?

				printf("Opening main data files");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".\n");

				//this can be where the readstream go
				//read save text file logic
			
			}
			else
			{
				cout << "Access Denied" << endl;
				exit(0);
			}
		}
	}
	return 0;
}