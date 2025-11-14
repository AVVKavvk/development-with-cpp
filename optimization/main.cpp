#include <vector>
#include <iostream>
using namespace std;

int main(){
    auto nums_vector = 1<<28;
    // cout<<nums_vector<<endl;

    vector<int> nums(nums_vector);

    for(auto it:nums){
        auto val = it%20;
    }
    return 0;
}