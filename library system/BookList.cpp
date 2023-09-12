#include "BookList.h"

BookList::BookList()
{
	capacity = 0;
	booksCount = 0;
}

BookList::BookList(int capacity):capacity(capacity)
{
	booksCount = 0;
	capacity += capacity/2;
	books = new Book[capacity];
}

void BookList::addBook(const Book&book)
{
	books[booksCount++] = book; 
}

Book* BookList::searchBook(string name)
{
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getTitle() == name) {
			return &books[i];
		}
	}
	return nullptr;
}

Book* BookList::searchBook(int id)
{
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getId() == id) {
			return &books[i];
		}
	}
	return nullptr;
}

void BookList::deleteBook(int id)
{
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getId() == id) {
			while (i<booksCount-1)
			{
				books[i] == books[i + 1];
				i++;
			}
			booksCount--;
			break;
		}
	}
}

BookList::~BookList()
{
	delete[]books;
	books = nullptr;
}

ostream& operator<<(ostream& output, const BookList& booklist)
{
	for (int i = 0; i < booklist.booksCount; i++)
	{
		output << booklist.books[i];
	}
	return output;
}
