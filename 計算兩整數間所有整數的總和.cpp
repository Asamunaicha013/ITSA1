#include <iostream>

using namespace std;

int main() {
    int number, start, end, sum;
    cin >> number;
    for(int i = 0; i < number; i++) {
        cin >> start >> end;
        if(start > end) {
            sum = (start + end) * (start - end + 1) / 2;
        }
        else {
            sum = (start + end) * (end - start + 1) / 2;
        }
        cout << sum << "\n";
    }
    return 0;
}
