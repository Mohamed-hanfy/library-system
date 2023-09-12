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
		void addBook(const Book&book); 
		Book* searchBook(string name);
		Book* searchBook(int id);
		void deleteBook(int id); 
		Book getTheHighestRatedBook();
		void getBooksForUser(const User& user); 
		Book& operator[] (int idx);
	 	friend ostream& operator<<(ostream& output, const BookList& booklist);
		~BookList();
	};

