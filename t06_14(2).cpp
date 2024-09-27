#include <iostream>
using namespace std;

int step(int num) {
    return (num > 0) && ((num & (num - 1)) == 0) ? 1 : 0;
}

int main() {
    int num;
    cin >> num;

    if (step(num)) {
        cout << num << "is a power of two" << endl;
    } else {
        cout << num << "is not a power of two" << endl;
    }

    return 0;
}
