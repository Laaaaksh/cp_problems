// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : (__Name__)
/* n<=10 - O(n!) 
   n<=20 - O(2^n)
   n<=500 - O(n^3)
   n<=5000 - O(n^2)
   n<=10^6 - O(nlogn) and O(n)
   n is large - O(1) or O(log(n))*/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define pb push_back;
#define mp make_pair;
#define f first;
#define s second;
#define rep(i,a,b) for(int i = a; i<=b;i++)
typedef tree<int, null_type, less<int>, rb_tree_tag,
             tree_order_statistics_node_update>
    indexed_set;
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
// string x;
// getline(cin,x);
// while(cin >> x)
// random_shuffle(v.begin(),v.end());
// {

// }
// int128_t temp;
int t;
cin >> t;
if(t<=3)
	cout << "NO";
else if(t%2)
	cout << "NO" ;
// if any remainder is coming in t%2 then print NO
else 
	cout << "YES";
return 0;
}