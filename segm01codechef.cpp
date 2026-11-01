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
  int t; cin >> t;
  while(t--)
  {
   string str; cin >> str;
   int count = 0;
   bool flag = false;
   int ans = 1;
   bool onefound = false;
   for(auto it : str)
   {
     if(it=='0' && count==0)
      continue;
     else if(it=='1' && count==0 && !flag){
      count=1;
      onefound = true;
     }
     else if(it=='0' && count==1){
      flag = true;
      count = 0;
     }
     else if(it=='1' && count==0 && flag)
     {
      ans = 0;
      break;
     }
   }
   if(ans && onefound)
      cout << "YES" << "\n";
   else
      cout << "NO" << "\n";
        }
  return 0;
}