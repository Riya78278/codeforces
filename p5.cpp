// ) Battle of Arrays

    #include <iostream>
    using namespace std;
     
    void solve() {
        int n, m;
        cin >> n >> m;
        
        priority_queue<long long> alice, bob;
        
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            alice.push(x);
        }
        
        for (int i = 0; i < m; i++) {
            long long x;
            cin >> x;
            bob.push(x);
        }
        
        while (!alice.empty() && !bob.empty()) {
            // Alice's turn
            long long a_top = alice.top();
            long long b_top = bob.top();
            
            if (a_top >= b_top) {
                // Alice destroys Bob's largest
                bob.pop();
            } else {
                // Alice reduces Bob's largest
                bob.pop();
                bob.push(b_top - a_top);
            }
            
            if (bob.empty()) {
                cout << "Alice\n";
                return;
            }
            
            // Bob's turn
            a_top = alice.top();
            b_top = bob.top();
            
            if (b_top >= a_top) {
                // Bob destroys Alice's largest
                alice.pop();
            } else {
                // Bob reduces Alice's largest
                alice.pop();
                alice.push(a_top - b_top);
            }
            
            if (alice.empty()) {
                cout << "Bob\n";
                return;
            }
        }
        
        // Should not reach here if game ends properly
        if (alice.empty()) cout << "Bob\n";
        else cout << "Alice\n";
    }
     
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t;
        cin >> t;
        
        while (t--) {
            solve();
        }
        
        return 0;
    }