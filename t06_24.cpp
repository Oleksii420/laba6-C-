#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int youngest = -1;
    for (int i = 0; i < 32; ++i) {
        if (num & (1 << i)) {
            youngest = i;
            break;
        }
    }

    int oldest = -1;
    for (int i = 31; i >= 0; --i) {
        if (num & (1 << i)) {
            oldest = i;
            break;
        }
    }

    if (youngest != -1 && oldest != -1) {
        cout << "youngest " << youngest << endl;
        cout << "oldest " << oldest << endl;
    } else {
        return 1;
    }

    return 0;
}
