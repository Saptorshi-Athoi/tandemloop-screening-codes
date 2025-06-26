#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    map<int, int> count;
    for (int i = 1; i <= 9; ++i) count[i] = 0;

    for (int num : nums) {
        for (int i = 1; i <= 9; ++i) {
            if (num % i == 0) count[i]++;
        }
    }

    cout << "\nMultiples count:\n";
    for (int i = 1; i <= 9; ++i) {
        cout << i << ": " << count[i] << endl;
    }

    return 0;
}
