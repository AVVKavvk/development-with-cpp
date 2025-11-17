#include <iostream>
using namespace std;

int main(){
    int size=1<<10;
    int * a= new int[size];

    // working code


    delete []a;
    delete []a;
    return 0;
}