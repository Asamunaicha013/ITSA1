#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int number;
    cin >> number;
    for(int i = 0; i < number; i++) {
        double m;
        cin >> m;
        double area = m * m;
        area = round(area * 10) / 10.0;
        cout << fixed << setprecision(1) << area << "\n";
    }
    return 0;
}
