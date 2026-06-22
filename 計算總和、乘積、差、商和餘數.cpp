#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    cout << a << "+" << b << "=" << a + b << "\n";
    cout << a << "*" << b << "=" << a * b << "\n";
    cout << a << "-" << b << "=" << a - b << "\n";
    
    if (a < 0) {
        cout << a << "/" << b << "=" << (a / b) - 1 << "..." << a - b * ((a / b) - 1) << "\n";
    }
    else {
        cout << a << "/" << b << "=" << a / b << "..." << a - b * (a / b) << "\n";
    }
    
    return 0;
}
