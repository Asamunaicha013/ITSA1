#include <iostream>
#include <iomanip> // 引入 iomanip 以控制小數位數

using namespace std;

int main() {
    int kilm;
    cin >> kilm;
    
    double k = kilm * 1.6;
    
    // 使用 fixed 和 setprecision(1) 來達到 printf("km=%.1f") 的效果
    cout << "km=" << fixed << setprecision(1) << k << "\n";
    
    return 0;
}
