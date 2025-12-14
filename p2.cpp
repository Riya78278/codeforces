// Be Positive

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
            int zero=0;
            int neg=0;
            for(int i=0;i<n;i++){
                int x;
                cin>>x;
                if(x==0){
                    zero++;
                }
                else if(x==-1){
                    neg++;
                }
            }
            int ans=zero;
            if(neg %2 !=0){
                ans += 2;
            }
            cout<<ans<<endl;
        }
        return 0;
    }