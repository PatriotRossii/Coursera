#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n; cin >> n;
    vector<bool> binary;

    while(n / 2 != 0) {
        binary.push_back(n % 2);
        n /= 2;
    }
    binary.push_back(n % 2);

    for(auto it = binary.rbegin(); it != binary.rend(); ++it) {
        cout << *it;
    }
}