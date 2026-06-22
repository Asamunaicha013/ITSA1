#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    
    int sum = 0;
    for(int i = 6; i < a; i += 6) {
        if(i % 12 == 0) {
            continue;
        }
        else {
            sum += i;
        }
    }
    
    cout << sum;
    
    return 0;
}
