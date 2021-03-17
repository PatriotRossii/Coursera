#include <iostream>
#include <string>

using namespace std;

int main() {
    string line;
    getline(cin, buffer);

    int encounter = 0;
    for(auto i = 0; i < line.size(); ++i) {
        if(buffer[i] == 'f') {
            if(++encounter == 2) {
                cout << i;
            }
        }
    }
    if(encounter == 1) {
        cout << -1;
    } else if(encounter == 0) {
        cout << -2;
    }
}