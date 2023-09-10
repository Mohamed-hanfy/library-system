#include "UserList.h"

UserList::UserList()
{
	capacity = 0;
	usersCount = 0;
	 
}

UserList::UserList(int capacity):capacity(capacity)
{   
	capacity += capacity + 5;
	users = new User[capacity];
	usersCount = 0;

}

void UserList::addUser(User& user)
{
	users[usersCount] = user;
	usersCount++;
}

User* UserList::searchUser(string name)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i].getName() == name) {
			return &users[i];
		}
	}
	return nullptr;
}

User* UserList::searchUser(int id)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i].getId() == id) {
			return &users[i];
		}
	}
	return nullptr;
	return nullptr;
}
