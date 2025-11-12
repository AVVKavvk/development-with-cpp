#include <iostream>
#include <any>
#include "user.h"

using namespace std;
int main(){

    cout<<"Hello from main"<<endl;
    vector<User>users = get_users();
    for (auto user:users){
        cout<<"********************************\n";
        cout<<"ID: " << user.id << endl;
        cout<<"Name: " << user.name << endl;
        cout<<"Username: " << user.username << endl;
        cout<<"Email: " << user.email << endl;
        cout<<"Phone: " << user.phone << endl;
        cout<<"Website: " << user.website << endl;
    }
    return 0;
}