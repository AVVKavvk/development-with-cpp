#ifndef USER_H
#define USER_H

#include <any>
#include <vector>
#include <string>

using namespace std;

struct User {
    int id;
    std::string name;
    std::string username;
    std::string email;
    std::string phone;
    std::string website;
};

vector<User> get_users();

#endif