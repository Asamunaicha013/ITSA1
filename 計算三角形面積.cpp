#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    double area = m * n / 2.0;
    cout << "Triangle area:" << fixed << setprecision(1) << area;
    return 0;
}
