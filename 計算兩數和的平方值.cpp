#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, number;
    cin >> number;
    for(int i = 0; i < number; i++) {
        cin >> a >> b;
        int sum = a + b;
        int sumof = pow(sum, 2);
        cout << sumof << "\n";
    }
    return 0;
}
