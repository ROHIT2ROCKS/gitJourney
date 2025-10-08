#include <iostream>
#include <vector>

using namespace std;

void display_vector(vector<int> arr) {
    for (auto i : arr) {
        cout << i <<" ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    display_vector(arr);
    return 1;
}