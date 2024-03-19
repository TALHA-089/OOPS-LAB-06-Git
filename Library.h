#pragma once
#include<vector>
#include "Books.h"

class Library
{
private:

	vector <Books> books;

public:

	void AddBook(string Title, string Author, int year)
	{
		Books newbook;
		newbook.setTitle(Title);
		newbook.setAuthor(Author);
		newbook.setPublicationYear(year);
		books.push_back(newbook);
		cout << "\n\nThe Book " << Title << " Successfully added to the Library." << endl;
	}
	
	void RemoveBook(string Title)
	{
		int BookCount = 0;

			for (auto it : books)
			{
				if (it.getTitle() == Title)
				{
					books.erase(books.begin() + BookCount);
					cout << "\n\nThe Book " << Title << " Successfully removed from the Library." << endl;
					return;
				}
				BookCount++;
			}
			cout << "\n\nBook " << Title << "does not exist in the Library." << endl;
			
	}

	void ListBooks()
	{
		int BookCount = 0;

		if (books.empty())
		{
			cout << "\n\nThe Library is Empty Right Now.\n\n";
		}
		else
		{
			for (auto it : books)
			{
				cout << "\n\n-----------------Book " << BookCount + 1 << "------------------------";
				cout << "\n\nTitle: " << it.getTitle() << endl;
				cout << "\nAuthor: " << it.getAuthor() << endl;
				cout << "\nPublication Year: " << it.getPublicationYear() << endl;
				BookCount++;
			}
		}
	}

	vector <Books> getBooks()
	{
		return books;
	}
};
