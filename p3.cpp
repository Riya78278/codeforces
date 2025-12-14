// MEX rose

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
            int k;
            cin>>k;
            int numk=0;
            vector<int>freq(n+1,0);
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                freq[x]++;
            }
            int missing=0;
            for(int i=0;i<k;i++){
                if(freq[i]==0){
                    missing++;
                }
            }
            cout<<max(missing,freq[k])<<endl;
            
        }
        return 0;
    }