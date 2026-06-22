#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int cost;
    cin >> cost;
    
    if (cost < 800) {
        cout << fixed << setprecision(1) << cost * 0.9;
    }
    else if (cost >= 800 && cost < 1500) {
        cout << fixed << setprecision(1) << cost * 0.9 * 0.9;
    }
    else {
        cout << fixed << setprecision(1) << cost * 0.9 * 0.79;
    }
    
    return 0;
}
