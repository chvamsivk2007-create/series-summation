#include <iostream>
#include <math.h>
using namespace std;

int sum(int x, int n) {
    if (n == 0) {
        return 1;
    }

    return (sum(x, n - 1) + pow(x, n));
}

int main() {
    int x, n;

    cout << "Enter x value and no. of terms:" << endl;
    cin >> x >> n;

    cout << "Sum is: " << sum(x, n - 1);

    return 0;
}
