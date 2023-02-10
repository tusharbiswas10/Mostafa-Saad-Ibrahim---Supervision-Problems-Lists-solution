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



void solve(ll outnum) {
    
    ll n; cin>>n;
    vector<ll>v(100000000, 0);

   for(ll i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    v[x]++;
    v[y]--;
   }

   ll count=0, maxi=0;

   for(auto i: v){
    count+=i;
    maxi=max(maxi,count);
   }

   cout<<maxi<<endl;
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
