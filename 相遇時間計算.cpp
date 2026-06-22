#include <iostream>
#include <cmath>   
#include <iomanip> 

using namespace std;

int main() {
    double m;
    cin >> m;
    double n = m / 23.8 * 100.0;
    // 使用 fixed 和 setprecision(0) 
    cout << fixed << setprecision(0) << ceil(n) << "\n";
    
    return 0;
}
