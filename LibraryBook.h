// Scott Peery
// 2/22/2016
// Lab #5

// Ensure class isn't added more than once
#ifndef LIBRARYBOOK_H
#define LIBRARYBOOK_H

#include <string>
using namespace std;

class LibraryBook
{
public:
	LibraryBook();// defualt, set all strings to blank and bool to false for checked out
	LibraryBook(string TempTitle, string TempAuthor, string TempISBN);
	string getTitle();
	string getAuthor();
	string getISBN();
	bool checkOut();
	bool checkIn();
	bool isCheckedOut();

private:
	string title;
	string author;
	string ISBN;
	bool InOutValue;

};

// This matches #ifndef at beginning of the file, so leave it in
#endif