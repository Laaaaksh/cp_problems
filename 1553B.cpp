// @author: Laksh Sadhwani
// Github : https://github.com/Laaaaksh
// Code : next round
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
   int t; cin >> t;
   while(t--)
   {
      string s,t; cin >> s >> t;
      bool f = false;
      for(int i = 0 ; i < s.size(); i++)
      {
         string s1 = s.substr(0,i+1);
         string s2 = s.substr(0,i);
         reverse(s2.begin(),s2.end());
         s1+=s2;
         if(s1.find(t)!=-1)
         {
            f = true;
            break;
         }
      }
      if(f) 
         cout << "YES";
      else 
         cout << "NO";
      cout << "\n";
   }
   return 0;
}