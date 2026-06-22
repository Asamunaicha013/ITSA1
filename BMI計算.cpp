#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double height, weight;
    cin >> weight >> height;
    height = height / 100.0;
    double BMI = weight / (height * height);
    cout << fixed << setprecision(2) << BMI << endl;
    return 0;
}
