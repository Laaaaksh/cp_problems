// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : bobby prize
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

ll h, w, n;
cin >> h >> w >> n;
vector<vector<ll>> vec(h,vector<ll>(w));
for(ll i = 0 ; i < n ; i++)
{
   ll a,b;
   cin >> a >> b;
   vec[a-1][b-1] = i + 1;
}
ll row[h] = {0};
ll col[w] = {0};
for(ll i = 0 ; i < h ; i++)
{
   ll count = 0;
   for(ll j = 0 ; j < w ; j++)
   {
       col[j] += (vec[i][j] != 0);     
       count += (vec[i][j] != 0); 
   }
   row[i] = count;
} 
ll one = -1;
ll two = -1;
ll number = 0;
unordered_map<ll,pair<ll,ll>> maps;
for(ll rowno = 0 ; rowno < h ; rowno++)
{
   if(row[rowno]==0)
      continue;
   one++;
   for(ll colno = 0 ; colno < w ; colno++)
   {
      if(col[colno] == 0)
         continue;
      two++;
      if(vec[rowno][colno]!=0)
      {
         ll val = vec[rowno][colno];
         maps.insert({val,{one+1,two+1}});
      }
   }
   two = -1;
}
for(ll it = 0 ; it < n ; it++)
   cout << maps[it+1].first << " " << maps[it+1].second << "\n";
return 0; 
}