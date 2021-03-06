// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : pizzaforces.cpp
/* n<=10 - O(n!) 
   n<=20 - O(2^n)
   n<=500 - O(n^3)
   n<=5000 - O(n^2)
   n<=10^6 - O(nlogn) and O(n)
   n is large - O(1) or O(log(n))
   random_shuffle(v.begin(),v.end());*/

#include<bits/stdc++.h>
using namespace std;
/*------------------------------------*/
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define pb push_back;
#define mp make_pair;
#define f first;
#define s second;
#define rep(i,a,b) for(int i = a; i<=b;i++)
/*------------------------------------*/

int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
// string x;
// getline(cin,x);

/*CODE BEGINS HERE*/
ll t;
cin >> t;
while(t--)
{
   ll n;
   cin >> n;
   cout << (max(6LL,n+1)/2)*5 << "\n";
}
return 0;
 
}