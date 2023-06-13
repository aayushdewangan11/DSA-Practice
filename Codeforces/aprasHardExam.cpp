#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int lastDigit;
    switch (n % 4) {
        case 0:
            lastDigit = 6;
            break;
        case 1:
            lastDigit = 8;
            break;
        case 2:
            lastDigit = 4;
            break;
        case 3:
            lastDigit = 2;
            break;
    }
    cout << lastDigit << endl;
    return 0;
}
 