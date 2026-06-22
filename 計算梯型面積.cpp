#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m, n, h;
    cin >> m >> n >> h;
    double area = (m + n) * h / 2.0;
    cout << "Trapezoid area:" << fixed << setprecision(1) << area;
    return 0;
}
