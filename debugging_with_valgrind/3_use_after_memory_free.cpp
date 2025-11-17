#include <iostream>
using namespace std;

int main(){
    int size=1<<10;
    int *a = new int[size];

    // code


    delete []a;
    cout<<a[0]<<endl;
    return 0;
}