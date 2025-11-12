#include <iostream>
using namespace std;

template <typename T>
void print(T x){
    cout<<x<<endl;
}

template <typename U>
U add(U a, U b){
    return a+b;
}

int main(){
    
    print(10);
    print("Hello");

    cout<<add(10,20)<<endl;
    cout<<add(10.23,20.23)<<endl;
    cout<<add(string("Hello"),string("World"))<<endl;
    return 0;
}