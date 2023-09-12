#include "Book.h"
int Book::count = 0;
Book::Book()
{
	count++;
	title = "";
	isbn = "";
	category = "";
	averageRating = 0.0;
	id = count;
	numRates = 0;
	sumRates = 0.0;
	hasAuthor = false;
	User author;
	
}

Book::~Book()
{
	//delete author;
}

Book::Book(string title, string isbn, string category) :
	title(title), isbn(isbn), category(category)
{
	count++;
	id = count;
	averageRating = 0.0;
	numRates = 0;
	sumRates = 0.0;
}

Book::Book(const Book& book)
{
	title = book.title;
	isbn = book.isbn;
	id = book.id;
	category = book.category;
	//author = book.author;
	averageRating = book.averageRating;
	numRates = book.numRates;
	sumRates = book.sumRates;
	if (book.hasAuthor) {
		//author = new User;
		hasAuthor = true;
		setAuthor(book.author);
	}
}

void Book::setTitle(string title_)
{
	title = title_;
}

string Book::getTitle() const
{
	return title;
}

void Book::setIsbn(string isbn_)
{
	isbn = isbn_;
}

string Book::getIsbn() const
{
	return isbn;
}

int Book::getId() const
{
	return id;
}

void Book::setCategory(string category_)
{
	category = category_;
}

string Book::getCategory() const
{
	return category;
}

void Book::setAuthor(const User& user)
{
	hasAuthor = true;
	author = user;
}

User Book::getAuthor() const
{
	return author;
}

void Book::rateBook(double rating)
{
	numRates++;
	sumRates += rating;
	averageRating = sumRates / numRates;

}

double Book::getAverageRating() const
{
	return averageRating;
}

bool Book::operator==(const Book&book)
{
	return(title == book.title && isbn == book.isbn && id == book.id && category == book.category && averageRating == book.averageRating && author == book.author);
}

ostream& operator<<(ostream& output, const Book& book)
{
	cout << "=========Book " << book.getId() << " info=========" << '\n';
	output << "Title : " << book.title;
	output << " | isbn : " << book.isbn;
	output << " | Category : " << book.category;
	output << " | Avg Rating : " << book.averageRating << '\n';
	if (book.hasAuthor) {
		output <<" author  " <<'\n'<<(book.author);
	}
	cout << '\n';
	cout << "=============================" << '\n';
	return output;
}

istream& operator>>(istream& input, Book& book)
{
	cout << "Enter the book information in this order" << '\n';
	cout << " Title Isbn Category (Space sperated)";
	input >> book.title >> book.isbn >> book.category;
	return input;
}

