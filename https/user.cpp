#define CPPHTTPLIB_OPENSSL_SUPPORT 
#include "httplib.h"
#include <vector>
#include <string>
#include "nlohmann/json.hpp" // For JSON parsing
#include <iostream>
#include "user.h"

using namespace std;
using json = nlohmann::json;

vector<User> get_users() {
    vector<User> users;

    // Create HTTPS client (example: fetching from a fake API)
    httplib::SSLClient cli("jsonplaceholder.typicode.com"); // HTTPS host

    auto res = cli.Get("/users");

    
    // int status =res->status;
    // cout<<status<<endl;
    
    // auto body = res->body;
    // cout<<body<<endl;

    if(res && res->status == 200){
        auto body = res->body;
        auto data = json::parse(body);

        for (auto &u : data) {
        User user;
        user.id = u.value("id", 0);
        user.name = u.value("name", "");
        user.username = u.value("username", "");
        user.email = u.value("email", "");
        user.phone = u.value("phone", "");
        user.website = u.value("website", "");
        users.push_back(user);
    }
    }else{
        cerr << "Failed to fetch users. Error Code : " << (res ? res->status: 0) << endl;
    }
    return users;
}
