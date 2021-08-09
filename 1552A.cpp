// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : subsequence permutation
/* n<=10 - O(n!) 
   n<=20 - O(2^n)
   n<=500 - O(n^3)
   n<=5000 - O(n^2)
   n<=10^6 - O(nlogn) and O(n)
   n is large - O(1) or O(log(n))*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int,int> pi;
// #define pb push_back;
// #define mp make_pair;
// #define f first;
// #define s second;
// random_shuffle(v.begin(),v.end());
#define rep(i,a,b) for(int i = a; i<=b;i++)
bool iscontain(string s, string t)
{

}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
// #ifndef ONLINE_JUDGE

//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
// #endif
// string x;
// getline(cin,x);
// while(cin >> x)
// {

// }
// int128_t temp;
  int testCases,n; string s,t;
  cin >> testCases;
  while(testCases--){cin >> n; cin >> s;
  	int count = 0;
  	t = s; sort(t.begin(),t.end());
  	rep(i,0,n-1)
  	{
  		if(s[i]!=t[i]) count ++;
  	}
  	cout << count << "\n";

  }
  return 0;
}