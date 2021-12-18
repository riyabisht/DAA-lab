// This algorithm we are selecting a position and finding an element for that position
#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int c_comp = 0, C_swap = 0;
        for (int i = 0; i < n - 1; i++) {
            int k = i, j = i + 1;
            for (j; j < n; j++) {
                c_comp++;
                if (arr[k] > arr[j])
                    k = j;
            }
            C_swap++;
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
        }
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        cout << " No of comparision :: " << c_comp << endl;
        cout << " No of swaps :: " << C_swap << endl;
    }

    return 0;
}