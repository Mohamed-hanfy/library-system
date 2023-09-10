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
        //Seters&&geters
        void setName(string name_);
        string getName() const;
        void setPassword(string password_);
        string getPassword()const;
        void setEmail(string email_);
        string getEmail()const;
        void setAge(int age_);
        int getAge() const;
        void setId(int id_);
        int getId()const;
        //

        void Display();
       // void operator=(const User& user);
        friend ostream& operator<<(ostream&output, const User&user);
        friend istream& operator>>(istream&intput, User&user);
    };

