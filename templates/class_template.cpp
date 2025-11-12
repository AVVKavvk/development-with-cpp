#include <iostream>

using namespace std;

template <typename T>
class Box{
    T value;
    public:
    Box(T v): value(v) {}
    void show(){
        cout<<"Value is :" <<value<<endl;
    }
};

int main(){
    Box<int> b1(10);
    Box<string> b2("Vipin");

    b1.show();
    b2.show();
    return 0;
}