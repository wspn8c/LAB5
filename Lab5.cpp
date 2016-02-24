// Scott Peery
// 2/22/2016
// Lab #5

#include "LibraryBook.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	// File stream variables
    ifstream finBooks("books.txt");
	ifstream finISBN("isbns.txt");
	ofstream fout("checkedout.txt");
	string TempTitle, TempAuthor, TempISBN;
	LibraryBook BooksArray[15];
	int index = 0;
	LibraryBook checker;
	int ISBNarray[100000000];
	

	// Check for file errors first
	if(!finBooks || !finISBN)
	{
		cout << "Error opening input files!\n";
		system("pause");
		return 1;
	}

	while (!finBooks.eof())
	{
		getline(finBooks,TempTitle); //read line 1
		getline(finBooks, TempAuthor);//read line 2
		getline(finBooks, TempISBN);// read line 3
		LibraryBook Book(TempTitle, TempAuthor, TempISBN); // put first 3 lines in book
		BooksArray[index] = Book;//assign book to array
		//cout << BooksArray[index].getTitle()<<"\t"<< BooksArray[index].getAuthor()<<"\t"<< BooksArray[index].getISBN() << endl;//test input value
		index++;
	}
	//cout << BooksArray[9].getTitle() << "\t" << BooksArray[9].getAuthor() << "\t" << BooksArray[9].getISBN()<<"\t"<<BooksArray[9].isCheckedOut() << endl; //testing output
	//system("pause");

	int count = 0;
	while (!finISBN.eof())//read in ISBNs
	{
		string number;
		finISBN >> number; //read in first ISBN
		

	}
	//fout << "Books checked out:\n";
	//fout << "------------------\n";
	//fout << "Title\t" << "Author\t" << "ISBN\n";


	// Close the files at the end
	finBooks.close();
	finISBN.close();
	fout.close();

    // End program
	return 0;
}
