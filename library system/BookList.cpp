#include "BookList.h"
#include <cassert>

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
	books[booksCount].setId(booksCount + 1);
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

Book BookList::getTheHighestRatedBook()
{
	double highest_rate = -1.0;
	int indx = 0;
	for (int i = 0; i < booksCount; i++)
	{
		highest_rate = max(highest_rate, books[i].getAverageRating());

	}
	for (int i = 0; i < booksCount; i++)
	{
		if (books[i].getAverageRating() == highest_rate) {
			indx = i;
			break;
		}
	}
	return books[indx];
}

void BookList::getBooksForUser(const User& user)
{
	bool f = false;
	for (int i = 0; i < booksCount; i++)
	{
		if(books[i].getAuthor() ==user){
			cout << books[i];
			f = true;
		}
	}
	if (f == 1) {
		cout<<"There are no books by this author";
	}
}

Book& BookList::operator[](int idx)
{
	assert(idx<0||idx>=booksCount);

	return books[idx];
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
