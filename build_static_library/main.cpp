
#include <iostream>
#include "add.h"
#include "multiply.h"
using namespace std;

int main(){

    int add_result = add(2, 3);
    int multiply_result = multiply(2, 3);
    cout <<"Add:" << add_result << endl;
    cout <<"Multiply:"<< multiply_result << endl;
    return 0;
}