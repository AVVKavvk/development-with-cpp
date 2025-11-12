#include <iostream>
#include <vector>
#include <any>
using namespace std;

template <typename T>
void show(T u){
    cout<<"Generic : "<<u<<endl;
}

template <>
void show<string>(string s){
    cout<<"String : "<<s<<endl;
}

template <>
void show(vector<any> v){
    cout<<"Vector : "<<any_cast<string>(v[0])<<endl;

}

int main(){

    show(10);
    show(10.12);
    show(true);
    show("Hello");
    show(vector<any>{"Hello"});
    return 0;
}


