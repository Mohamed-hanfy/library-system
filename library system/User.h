#pragma once
#include <iostream>
#include<string>
using namespace std;
class User
{

    private:
        string name;
        int age;
        int id;
        string password;
        string email;
    public:
        static int count;
        User();
        User(string name, int age, string password, string email);
        User(const User&);
        bool operator==(const User& user);
        void setName(string name_);
        string getName() const;
        void setPassword(string password_);
        string getPassword()const;
        void setEmail(string email_);
        string getEmail()const;
        void setAge(int age_);
        int getAge();
        void setId(int id_);
        int getId();
        void Display();
        friend ostream& operator<<(ostream&, const User&);
        friend istream& operator>>(istream&, User&);
    };

