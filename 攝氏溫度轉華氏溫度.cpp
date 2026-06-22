#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    float a, b;
    cin >> a;
    b = a * 9 / 5 + 32;
    cout << fixed << setprecision(1) << b << "\n";
    
    return 0;
}
