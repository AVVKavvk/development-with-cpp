#include <iostream>
using namespace std;

template <typename T, typename U>

void printPair(T x, U y){
    cout<<x<<" "<<y<<endl;
}
int main(){

    printPair(10,20);
    printPair("Hello","World");
    return 0;
}