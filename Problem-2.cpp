#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Series: ";
    for (int i = 1; i <= n * 2; i += 2) {
        cout << i;
        if (i < n * 2 - 1)
            cout << ", ";
    }

    cout << endl;
    return 0;
}
