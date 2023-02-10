#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb emplace_back
#define mp make_pair
#define F first
#define S second
#define SORT(a) sort(a.begin(),a.end());
#define RSORT(a) sort(a.begin(),a.end(), greater<int>());
#define endl "\n";
template<typename T>
inline T gcd(T a, T b){T c;while (b){c = b;b = a % b;a = c;}return a;}
ll int_sqrt (long long x) {long long ans = 0;for (ll k = 1LL << 30; k != 0; k /= 2) {if ((ans + k) * (ans + k) <= x) {ans += k;}}return ans;}

const ll N = 1e5 + 5;



void solve(ll outnum) {
	// cumulative sum query

    ll n; cin>>n;
    vector<ll> store, cSum(n+1);
    for(ll i=0;i<n;i++){
        ll x; cin>>x;
        store.pb(x);
       // cout<<x;
    }

    cSum[0]=store[0];

    for(ll i=1;i<n;i++){
        cSum[i]=cSum[i-1]+store[i];
    }



    ll q; cin>>q;
    for(int i=0;i<q;i++){
        ll l,r; cin>>l>>r;

        if(l==0){
          cout<<cSum[r]<<endl;  
        } 
        else{
            cout<<cSum[r]-cSum[l-1]<<endl;
        }
    }
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  ll testcase=1;
 // ll testcase; cin>>testcase;
  for(ll iii=0;iii<testcase;iii++){
    
        solve(iii+1);

  }
  // int t = 1;
  // // cin >> t;
  // while (t--) {
    
  // }
  return 0;
}
