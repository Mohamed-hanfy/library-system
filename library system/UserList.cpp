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
	users[usersCount].setId(usersCount + 1);
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
}

void UserList::deleteUser(int id)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i].getId() == id) {
			while (i<usersCount-1)
			{
				users[i] = users[i + 1]; 
				i++;
			}
			
		}
		usersCount--;
		break;
	}
}

UserList::~UserList()
{
	delete[] users;
}

ostream& operator<<(ostream& output, const UserList& userlist)
{
	for (int i = 0; i < userlist.usersCount; i++)
	{
		output << userlist.users[i]<<" ";
	}
	return output;
}
