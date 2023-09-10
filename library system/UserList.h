#pragma once
#include <iostream>
#include<string>
#include"User.h"
#include"Book.h"
using namespace std;
 
class UserList
{
private:
        User* users;
        int capacity;
        int usersCount;
public:
        UserList();
        UserList(int capacity);
        void addUser(User& user);
        User* searchUser(string name);
        User* searchUser(int id);
        void deleteUser(int);
        friend ostream& operator<<(ostream&, const UserList&);
        ~UserList();
};
