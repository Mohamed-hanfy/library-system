#include "User.h"
int User::count = 0;
User::User()
{
	count++;
	name = "";
	age = 0;
	password = "";
	email = "";
	id = count;

}

User::User(string name, int age, string password, string email):
	name(name),age(age),password(password),email(email)
{
	count++;
	id = count;
}

User::User(const User&user)
{
	name = user.name;
	age = user.age;
	password = user.password;
	email = user.password;
}
