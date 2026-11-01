// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : digit sum
/* Approximate Time Complexity of the code
   n<=10 - O(n!) 
   n<=20 - O(2^n)
   n<=500 - O(n^3)
   n<=5000 - O(n^2)
   n<=10^6 - O(nlogn) and O(n)
   n is large - O(1) or O(log(n))*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef long double ld;

#define pb push_back;
#define mp make_pair;
#define pp pop_back;
#define f first;
#define s second;
#define rep(i,a,b) for(int i = a; i<=b;i++)
#define replong(i,a,b) for(ll i=a;i<=b;i++)

const ld Pi = acos(-1);
const int inf = 1e9;
const int mod = 1e9 + 7;
void solve(){
  ll n,ans=-1; cin >> n;
  vector<ll> arr(n);
  replong(i,0,n-1) cin >> arr[i];
  replong(i,1,n-1) ans = max(ans,arr[i]*arr[i-1]);
  cout << ans << "\n";
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
// #endif

/*..............begin..............*/
ll t; cin>>t;
while(t--)
{
  solve();
}
//..............end.........//
return 0;
}