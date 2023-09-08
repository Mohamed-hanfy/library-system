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
	id = user.id;
}
//seters&&geters
void User::setName(string name_)
{
	name = name_;
}
string User::getName() const
{
	return name;
}
void User::setPassword(string password_)
{
	password = password_;
}
string User::getPassword() const
{
	return password;
}
void User::setEmail(string email_)
{
	email = email_;
}
string User::getEmail() const
{
	return string();
}
void User::setAge(int age_)
{
	age = age_;
}
int User::getAge()
{
	return age;
}
void User::setId(int id_)
{
	id = id_;
}
int User::getId()
{
	return id;
}
void User::Display()
{
}


