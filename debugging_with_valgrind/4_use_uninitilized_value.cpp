#include <iostream>
using namespace std;


int main(){
    int size=5;
    int *a = new int[size];

    a[0]=1;
    a[1]=2;
    a[2]=3;
    a[3]=4;
    
    cout<<a[4]<<endl;
    return 0;
}