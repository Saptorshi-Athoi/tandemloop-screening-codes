#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Input value of n: ";
    cin >> n;
    int val = (n % 2 == 0) ? n - 1 : n;     //setting the limit as per 'n'

    for (int i = 1; i <= val * 2; i += 2) {
        cout << i;
        if (i + 2 <= val * 2) cout << ", ";
    }
    cout << endl;
    return 0;
}
