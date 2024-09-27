#include <iostream>
using namespace std;

int step(int num) {
    if (num == 0) return 0;
    while (num % 2 == 0) {
        num /= 2;
    }
    return (num == 1) ? 1 : 0;
}

int main() {
    int num;
    cin >> num;

    if (step(num)) {
        cout << num << " is a power of two" << endl;
    } else {
        cout << num << "is not a power of two" << endl;
    }

    return 0;
}
