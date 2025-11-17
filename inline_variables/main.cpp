#include "global.h"
#include "function.h"
#include <iostream>
using namespace std;

int main(){

    global_variable+=10;
    update_value(10);
    cout<<"Global variable: "<<global_variable<<endl;
    return 0;
}