#include <iostream>

using namespace std;

int main() {
    int number;
    long long a;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cin >> a;

        if (a > 31) {
            cout << "Value of more than 31\n";
        } else {
            long long b = 1LL << a;
            cout << b << "\n";
        }
    }
    return 0;
}
