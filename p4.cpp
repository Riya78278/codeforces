// A and B

    #include <iostream>
    using namespace std;
     
    long long calc(const vector<int>& pos) {
        int k = pos.size();
        if (k == 0) return 0;
     
        int mid = k / 2;
        long long res = 0;
     
        for (int i = 0; i < k; i++) {
            res += llabs(pos[i] - pos[mid] - (i - mid));
        }
        return res;
    }
     
    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
     
        int t;
        cin >> t;
     
        while (t--) {
            int n;
            string s;
            cin >> n >> s;
     
            vector<int> a, b;
            for (int i = 0; i < n; i++) {
                if (s[i] == 'a') a.push_back(i);
                else b.push_back(i);
            }
     
            cout << min(calc(a), calc(b)) << '\n';
        }
     
        return 0;
    }