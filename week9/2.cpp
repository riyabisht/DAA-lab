#include <bits/stdc++.h>
using namespace std;
bool compare(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b) {
    return a.first.second * (1.0 / a.first.first) > b.first.second * (1.0 / b.first.first);
}
int main() {
    int n;
    cin >> n; // no of items
    int W[n], V[n];
    for (int i = 0; i < n; i++)
        cin >> W[i];
    for (int i = 0; i < n; i++)
        cin >> V[i];
    int k;
    cin >> k;

    vector<pair<pair<int, int>, int>> items;

    for (int i = 0; i < n; i++) {
        items.push_back(make_pair(make_pair(W[i], V[i]), i + 1));
    }
    sort(items.begin(), items.end(), compare);

    float profit = 0.00;
    vector<pair<int, int>> selected;

    for (int i = 0; i < n; i++) {
        if (items[i].first.first <= k) {
            selected.push_back({items[i].second, items[i].first.first});
            k -= items[i].first.first;
            profit += items[i].first.second;
        } else {

            profit += (k) * (items[i].first.second * (1.0 / items[i].first.first));
            selected.push_back({items[i].second, k});

            break;
        }
    }

    cout << "Maximum value::" << profit << endl;
    cout << "item weight::" << endl;
    for (auto i : selected) {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}