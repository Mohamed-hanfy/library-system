
#include <iostream>
#include"User.h"
#include"Book.h"
#include"UserList.h"
#include"BookList.h"
int main()
{
	UserList u(5);
	User u1, u2, u3;
	u.addUser(u1);
	u.addUser(u2);
	u.addUser(u3);
	u.deleteUser(2);
	cout << u;

	
}
