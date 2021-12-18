#include <iostream>
#include <vector>
using namespace std;
int binary_search(int a[], int n, int key) {
    int L_b = 0;
    int U_b = n - 1;
    while (U_b >= L_b) {
        int mid = (U_b + L_b) / 2;

        if (a[mid] == key)
            return mid;

        else if (key < a[mid])
            U_b = mid - 1;

        else
            L_b = mid + 1;
    }

    return -1;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int key;
        cin >> key;

        int index = binary_search(a, n, key);

        if (index == -1)
            cout << "key not present" << endl;
        else {

            int U_b = index;
            while (a[U_b + 1] == key && U_b + 1 < n) {
                U_b++;
            }

            int L_b = index;

            while (a[L_b - 1] == key && L_b - 1 >= 0) {
                L_b--;
            }

            cout << key << "-" << abs(U_b - L_b) + 1 << endl;
        }
    }
    return 0;
}
