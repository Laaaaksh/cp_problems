// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : B
/* Approximate Time Complexity of the code
   n<=10 - O(n!) 
   n<=20 - O(2^n)
   n<=500 - O(n^3)
   n<=5000 - O(n^2)
   n<=10^6 - O(nlogn) and O(n)
   n is large - O(1) or O(log(n))*/
//cout.flush()
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

string first = "The streak is broken!";
string second = "The streak lives still in our heart!";
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
// #endif
/* Code begins here */
ll t; cin >> t;
while(t--)
{
  ll n,k;
  cin >> n >> k;
  ll arr[n];
  for(ll i = 0 ; i < n ; i++)
    cin >> arr[i];
  if(k > n){cout << "No" << "\n"; continue;}
  // sort(arr,arr+n);
  ll count = 1;
  for(ll i = 0 ; i < n-1 ; i++)
  {
    if(arr[i+1] == arr[i] + 1)
      continue;
    else if(arr[i+1]==arr[i]-1)
      continue;
    else
      count++;
  }
  // cout << count << "----";
  if(count<=k)
    cout << "Yes" << "\n";
  else
    cout << "No" << "\n";
}
  return 0;
}