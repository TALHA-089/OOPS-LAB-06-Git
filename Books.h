#pragma once
#include<iostream>
using namespace std;

class Books
{
private:

	string Title;
	string Author;
	int Publication_year;

public:

	void setTitle(const string Title)
	{
		this->Title = Title;
	}

	void setAuthor(const string Author)
	{
		this->Author = Author;
	}

	void setPublicationYear(const int year)
	{
		this->Publication_year = year;
	}


	string getTitle()
	{
		return Title;
	}

	string getAuthor()
	{
		return Author;
	}

	int getPublicationYear()
	{
		return Publication_year;
	}

};