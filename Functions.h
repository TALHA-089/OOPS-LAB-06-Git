#pragma once
#include<string>
#include "Library.h"

void User_interface(Library& library);
void Handle_UserInterface(int choice, Library& library);

void User_interface(Library& library)
{
	cout << "\n\n---------------Main Menu--------------------\n\n";
	cout << "1. Add Book\n";
	cout << "2. Remove Book\n";
	cout << "3. List Books\n";
	cout << "4. Exit\n";
	cout << "\nEnter your choice: ";
	int choice = 0;
	cin >> choice;
	cin.ignore();

	Handle_UserInterface(choice, library);

}

void Handle_UserInterface(int choice, Library& library)
{
	if (choice == 1)
	{
		string Title;
		string Author;
		int year = 0;
		cout << "\n\nEnter the Title of the book: ";
		getline(cin, Title);
		cout << "\n\nEnter the Author of the book: ";
		getline(cin, Author);
		cout << "\n\nEnter the Publication year: ";
		cin >> year;
		cin.ignore();

		library.AddBook(Title, Author, year);
	}
	else if (choice == 2)
	{
		if (library.getBooks().empty())
		{
			cout << "\n\nThe Library is Empty Right now.\nTry Adding a Book First.";
		}
		else
		{
			cout << "\n\nEnter the Title of the book you want to Remove: ";
			string Title;
			getline(cin, Title);
			library.RemoveBook(Title);
		}
	}
	else if (choice == 3)
	{
		library.ListBooks();
	}
	else
	{
		cout << "\n\nGood Bye!" << endl;
		cout << endl << endl;
		system("pause>0");
		exit(0);
	}
}