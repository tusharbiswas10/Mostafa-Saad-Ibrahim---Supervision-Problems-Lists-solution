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


const ll N = 1e5 + 5;

ll n, m;

void solve(ll outnum) {

	// sort the array add the largest value of the pair in sum
    ll n; cin>>n;
    vector<ll>v;

    for(ll i=0;i<2*n;i++){
        ll x; cin>>x;
        v.pb(x);
    }

    SORT(v);
    ll sum=0;
    for(ll i=0;i<2*n;i=i+2){
        sum+=v[i];
        
    }
   cout<<sum<<endl;
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
