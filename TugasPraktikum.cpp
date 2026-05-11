#include <iostream>
#include <string>
using namespace std;

class User
{
public:
    static int globalId;
    int id;
    string nama;
    string email;

    User(string nama, string email)
    {
        this->nama = nama;
        this->email = email;
        id = generateId();
    }

    int generateId()
    {
        return ++globalId;
    }
};

int User::globalId = 0;
