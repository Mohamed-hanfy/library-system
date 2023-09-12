#pragma once
#include<iostream>
#include<string>
#include "Book.h"
#include"User.h"
#include"UserList.h"
using namespace std;
class BookList
{
private:
		Book* books;
		int capacity;
		int booksCount;
public:
		BookList();
		BookList(int capacity);
		void addBook(const Book&book); // at the end of the array.
		Book* searchBook(string name);
		Book* searchBook(int id);
		void deleteBook(int id); //delete a book
		Book getTheHighestRatedBook();
		void getBooksForUser(const User&); // get all books of this author
		Book& operator[] (int);
		friend ostream& operator<<(ostream& output, const BookList& booklist); //to display all books
		~BookList();
	};

