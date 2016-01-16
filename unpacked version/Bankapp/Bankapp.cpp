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
#include<fstream>
using namespace std;
int main()
{
	for (int column = 0; column < 90; ++column)
	{
		cout << "*";
	}
	cout << "\n";
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	cout << "Welcome to LeBank Personal Currency Management System\n" << endl;
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	for (int column = 0; column < 90; ++column)
	{
		cout << "*";
	}
	cout << "\n";
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	cout << "This is a simple software that allows anyone to keep track of how much money they may" << endl;
	cout << "have in the procession at one time, down to the individual bills. This will allow for" << endl;
	cout << "a better overview of how much money you currently have in your piggy bank at home or" << endl;
	cout << "anywhere else. This software will also eliminate the task of recounting money when" << endl;
	cout << "you forgot how much you have at one time.\n" << endl;
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	for (int column = 0; column < 90; ++column)
	{
		cout << "-";
	}
	cout << "\n";
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	cout << "Disclaimer: This software has very low security protocol in place to keep the data" << endl;
	cout << "that it handles from unwanted eyes.So please take secondary precautions if you are" << endl;
	cout << "going to use this software in a commercial environment. There is no support for this" << endl;
	cout << "software, this software is as is. The developer of this software is not responsible" << endl;
	cout << "for any damages caused. USE AT YOUR OWN RISK.\n" << endl;
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	for (int column = 0; column < 90; ++column)
	{
		cout << "-";
	}
	cout << "\n";
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	
	cout << "Version 1.0\n" << endl;
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	for (int column = 0; column < 90; ++column)
	{
		cout << "*";
	}
	cout << "\n";
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
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
	cout << "Name: ";    
	getline(cin, name);

	ofstream myfile;
	myfile.open("Login.txt", ios::app);
	myfile << name << endl;
	myfile.close();

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
	
	ofstream myfilelogin;
	myfilelogin.open("loginlog.txt", ios::app);
	
	string phillip;
		if (name != "phillip")
		{
			cout << "Authentication Failed\n";
			Sleep(2000);
			system("cls");
			cout << "The program will now end\n";
			exit(0);
		}
		else
		{
			cout << "Authentication Complete\n";
			Sleep(1000);
		}
	myfilelogin.close();
	
	system("cls");
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	for (int column = 0; column < 90; ++column)
	{
		cout << "*";
	}
	cout << "\n";
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/
	const string USERNAME = "sierra";
	const string PASSWORD = "716715";
	string username, password;
	cout << "Enter Username: ";
	cin >> username;

	ofstream myfile1;
	myfile1.open("user_bank.txt", ios::app);
	myfile1 << username << endl;
	myfile1.close();
	/*-----------------------------------------------------------------------------------------------------------------------------------------------------*/

	if (username.length() < 0)
	{
		cout << "Invalid Username\n";
		exit(0);
	}
	else
	{
		cout << "Enter Password: ";
		cin >> password;

		ofstream myfile;
		myfile.open("pass_bank.txt", ios::app);
		myfile << password << endl;
		myfile.close();

		if (password.length() < 0)
		{
			cout << "Invalid Password\n";
			exit(0);
		}
		else
		{
			if (username == USERNAME && password == PASSWORD)
			{
				system("cls");
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
				
				cout << "Welcome " << name;
				Sleep(1000);
				system("cls");

				string input,input1;
				cout << "Would you like to check current values? [y/n]\n";
				cin >> input;

				if (input == "y") 
				{
					system("cls");
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

					string line;
					ifstream myfile("databank.txt");
					if (myfile.is_open())
					{
						while (getline(myfile, line))
						{
							cout << line << '\n';
						}
						myfile.close();
					}
					else cout << "unable to open file error '001'\n";  //this code works, but i feel like it should not??? whats going on!!!!

					string update;
					cout << "Would you like to go to the next option? [y/n]\n";
					cin >> update;

					if (update == "y")
					{
						cout << "\n";
					}
					else if (update == "n")
					{
						cout << "Thank you for using Lebank App\n";
						exit(0);
					}
				}
				else if(input=="n")
				{
					cout <<" \n";
				
				}
				cout << "Would you like to update current values? [y/n]\n";
				cin >> input1;

				if (input1 == "y")
				{
					cout << " \n";

					system("cls");

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

					system("cls");

					string line1;
					cout << "How many 1 dollar bills do you have?\n";
					cin >> line1;

					string line2;
					cout << "How many 2 dollar bills do you have?\n";
					cin >> line2;

					string line3;
					cout << "How many 5 dollar bills do you have?\n";
					cin >> line3;

					string line4;
					cout << "How many 10 dollar bills do you have?\n";
					cin >> line4;

					string line5;
					cout << "How many 20 dollar bills do you have?\n";
					cin >> line5;

					string line6;
					cout << "How many 50 dollar bills do you have?\n";
					cin >> line6;

					string line7;
					cout << "How many 100 dollar bills do you have?\n";
					cin >> line7;

					ofstream myfile("databank.txt");
					if (myfile.is_open())
					{
						myfile << "$1:" << line1<<"\n";
						myfile << "$2:" << line2<<"\n";
						myfile << "$5:" <<line3<<"\n";
						myfile << "$10:"<<line4<<"\n";
						myfile << "$20:"<<line5<<"\n";
						myfile << "$50:"<<line6<<"\n";
						myfile << "$100:"<<line7<<"\n";
						myfile.close();
						cout << "The values have been updated\n";
						cout << "Thank you for using LB\n";
						Sleep(2000);
						cout << "The program will now end\n";
						return 0;
					}
					else cout << "Unable to open file";

					//this can be where the readstream go
					//read save text file logic
				}
				else if (input1=="n")
				{
					system("cls");
					cout << "Those were the only option\nThank you for using LB\n";
					Sleep(2000);
					system("cls");
					cout << "The program will now end\n";
					exit(0);
				}

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