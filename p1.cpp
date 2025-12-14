 //Unconventional Pairs
 #include <iostream>
    using namespace std;
     
    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t;
        cin>>t;
        
        while(t--){
            int n;
            cin>>n;
            
            vector<long long>arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
            sort(arr.begin(),arr.end());
            
            long long ans=0;
            for(int i=0;i<n;i+=2){
                ans=max(ans,abs(arr[i]-arr[i+1]));
            }
            cout<<ans<<endl;
        }
        return 0;
    }