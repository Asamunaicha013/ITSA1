#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, number;
    cin >> number;
    for(int i = 0; i < number; i++) {
        cin >> a;
        int soa = pow(a, 2);
        int coa = pow(a, 3);
        cout << a << " " << soa << " " << coa << "\n";
    }
    return 0;
}
