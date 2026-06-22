#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if(a > 0) {
        cout << "正數";
    }
    else if(a == 0) {
        cout << "0";
    }
    else {
        cout << "負數";
    }
    return 0;
}
