#include <iostream>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    long long half = (n + 1) / 2; // Count of odd numbers

    if (k <= half) {
        // k-th number is an odd number
        cout << 2 * k - 1 << endl;
    } else {
        // k-th number is an even number
        cout << 2 * (k - half) << endl;
    }

    return 0;
}
