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


class Member : public User
{
public:
    bool status;

    Member(string nama, string email, bool status)
        : User(nama, email)
    {
        this->status = status;
    }

    void showProfile()
    {
        cout << "ID     : " << id << endl;
        cout << "Nama   : " << nama << endl;
        cout << "Email  : " << email << endl;
        cout << "Status : ";

        if (status)
            cout << "Aktif" << endl;
        else
            cout << "Nonaktif" << endl;
    }

    void setStatus(bool status)
    {
        this->status = status;
    }

    bool getStatus()
    {
        return status;
    }
};
