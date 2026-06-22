#include <iostream>
#include <string>

using namespace std;

int main() {
    char star[6];
    cin >> star;
    
    for(int i = 0; i < 5; i++) {
        int n = star[i] - '0';

        for(int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
