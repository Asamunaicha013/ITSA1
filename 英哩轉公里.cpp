#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int kilm;
    cin >> kilm;
    
    double k = kilm * 1.6;
    cout << "km=" << fixed << setprecision(1) << k << "\n";
    
    return 0;
}
