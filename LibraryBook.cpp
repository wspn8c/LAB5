// Scott Peery
// 2/22/2016
// Lab #5

#include "LibraryBook.h"
#include <string>
using namespace std;

// Define LibraryBook functions here



LibraryBook::LibraryBook()// defualt, set all strings to blank and bool to false for checked out
{
	title = " ";
	author = " ";
	ISBN = " ";
	InOutValue = false;
}
LibraryBook::LibraryBook(string TempTitle, string TempAuthor, string TempISBN)
{
	title = TempTitle;
	author = TempAuthor;
	ISBN = TempISBN;
	InOutValue = false;

}
string LibraryBook::getTitle()
{
	return title;
}
string LibraryBook::getAuthor()
{
	return author;
}
string LibraryBook::getISBN()
{
	return ISBN;
}
bool LibraryBook::checkOut()
{
	return InOutValue=false;
}
bool LibraryBook::checkIn()
{
	return InOutValue=true;
}
bool LibraryBook::isCheckedOut()
{
	if (InOutValue == false)
		return InOutValue = true;
	else 
		return InOutValue = false;
}