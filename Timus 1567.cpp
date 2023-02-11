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
	map<char,int> mp;
	mp['a']=1;mp['b']=2;mp['c']=3;mp['d']=1;mp['e']=2;mp['f']=3;
	mp['g']=1;mp['h']=2;mp['i']=3;mp['j']=1;mp['k']=2;mp['l']=3;
	mp['m']=1;mp['n']=2;mp['o']=3;mp['p']=1;mp['q']=2;mp['r']=3;
	mp['s']=1;mp['t']=2;mp['u']=3;mp['v']=1;mp['w']=2;mp['x']=3;
	mp['y']=1;mp['z']=2;mp['.']=1;mp[',']=2;mp['!']=3;mp[' ']=1;

	string s; getline(cin, s);
	ll sum=0;
	for(ll i=0;i<s.length();i++){
		char x=s.at(i);
		sum+=mp[x];
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
