#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int limit = (n % 2 == 0) ? n - 1 : n;

    cout << "Series: ";
    for (int i = 1; i <= limit * 2; i += 2) {
        cout << i;
        if (i < limit * 2 - 1)
            cout << ", ";
    }

    cout << endl;
    return 0;
}
