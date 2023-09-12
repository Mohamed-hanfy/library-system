#pragma once
#include<iostream>
#include<string>
#include"User.h"
using namespace std;
class Book
{
private:
		string title;
		string isbn;
		string category;
		int id;
		int numRates;
		double sumRates;
		double averageRating;
		bool hasAuthor;

		User author;
public:
		static int count;
		Book();
		~Book();
		Book(string title, string isbn, string category);
		Book(const Book&);
		void setTitle(string title_);
		string getTitle() const;
		void setIsbn(string isbn_);
		string getIsbn() const;
		int getId() const;
		void setCategory(string category_);
		string getCategory()const;
		void setAuthor(const User& user);
		User getAuthor() const;
		void rateBook(double rating);
		double getAverageRating() const;
		bool operator==(const Book&book);
		friend ostream& operator<<(ostream& output, const Book& book);
		friend istream& operator>>(istream& input, Book& book);
};

