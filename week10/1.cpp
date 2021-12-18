#include <bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;
    vector<pair<int, pair<int, int>>> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].second.first;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first;
        arr[i].second.second = i + 1;
    }
    sort(arr.begin(), arr.end());
    int prev = -1;
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        if (arr[i].second.first > prev) {
            prev = arr[i].first;
            ans.push_back(arr[i].second.second);
        }
    }
    cout << "No. of non-conflicting activities: " << ans.size() << '\n';
    cout << "List of selected activities: ";
    for (auto &x : ans) {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}