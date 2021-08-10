// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : A

  // n<=10^6 - O(nlogn)

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

const ld Pi = acos(-1);
const int inf = 1e9;
const int mod = 1e9 + 7;


int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
// #endif
/* Code begins here */
ld t; cin >> t;
while(t--)
{
 ll n ; cin >> n;
 ll arr[n];
 for(ll i = 0 ; i < n ; i++)
 	cin >> arr[i];
 sort(arr,arr + n);
 ld sum1 = 0.0;
 ld sum2 = 0.0;
 ll count = 0;
  for(ll i = 0 ; i < n - 1 ; i++){
 	sum1 = sum1 + (long double) arr[i];	
 	count++;
  }
  sum1 = (ld) sum1 / (ld)count;
  sum2 = arr[n-1];
  ld sum = (ld) sum1 + sum2;
  cout << setprecision(7) << sum << "\n";
}
	return 0;
}