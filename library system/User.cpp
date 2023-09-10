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
bool User::operator==(const User& user)
{
	if (name != user.name || email != user.email || age != user.age || id != user.id) {
		return false;
	}
	return true;
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
	return email;
}
void User::setAge(int age_)
{
	age = age_;
}
int User::getAge() const
{
	return age;
}
void User::setId(int id_)
{
	id = id_;
}
int User::getId() const
{
	return id;
}
void User::Display()
{
	cout << "***************************" << '\n';
	cout << "Name --> " << name << '\n';
	cout << "Age --> " << age << '\n';
	cout << "ID --> " << id << '\n';
	cout << "Email --> " << email << '\n';
	cout << "***************************" << '\n';
}

ostream &operator<<(ostream&output, const User&user)
{
	output << "=========User " << user.getId() << " info=========" << '\n';
	output << "Name : " << user.getName();
	output << " | Age : " << user.getAge();
	output << " |Email : " << user.getEmail() << '\n';
	return output;
}


istream &operator>>(istream&input, User&user)
{
	cout << "Enter the user information in this order" << '\n';
	cout << "Name Age Email Password ";
	input >> user.name >> user.age >> user.email >> user.password;
	return input;
}
