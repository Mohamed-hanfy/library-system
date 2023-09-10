
#include <iostream>
#include"User.h"
#include"Book.h"
int main()
{
	User u1, u2, u3;
	cin >> u1 >> u2 >> u3;
	cout << "============================" << '\n';
	Book b1, b2, b3;
	cin >> b1 >> b2 >> b3;

	b1.setAuthor(u1);
	b2.rateBook(2);
	b2.rateBook(2.5);
	b3.setAuthor(u3);
	cout << b1 << b2 << b3;
	
}
