#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main() {
    vector<int> nums = {1, 2, 8, 9, 12, 46, 76, 82, 15, 20, 30};
    map<int, int> countMap;

    for (int i = 1; i <= 9; i++) {
        int count = 0;
        for (int num : nums) {
            if (num % i == 0)
                count++;
        }
        countMap[i] = count;
    }

    cout << "{ ";
    for (auto it = countMap.begin(); it != countMap.end(); ++it) {
        cout << it->first << ": " << it->second;
        if (next(it) != countMap.end())
            cout << ", ";
    }
    cout << " }" << endl;

    return 0;
}
