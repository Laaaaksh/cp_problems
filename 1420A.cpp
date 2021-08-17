#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define mp                make_pair
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define f                 first
#define s                 second
#define pi                pair<int,int>
#define vi                vector<int>
#define vvi               vector<vi>
#define vb                vector<bool>
#define vvb               vector<vb>
#define rep(i,a,b)        for(int i=a;i<=b;i++)
#define repr(i,a,b)       for(int i=a;i>=b;i--)
#define mem1(a)           memset(a,-1,sizeof(a))
#define mem0(a)           memset(a,0,sizeof(a))
#define ppc               __builtin_popcount
#define ppcll             __builtin_popcountll


template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

const long long inf=1e18;
const int32_t M=1e9+7;
const char n1 = '\n';
const char space = ' ';
const int32_t MM=998244353;
const int N=50005;

struct DSU {
    int n;
    vi p;
    DSU(int N)
    {
        n = N;
        p.assign(n + 1,-1);
        for (int i = 0;i<=n;i++)p[i] = i;
    }
    int Find(int i)
    {
        if (p[i] == i)return i;
        return p[i] = Find(p[i]);
    }
    void Merge(int a,int b)
    {
        a = Find(a),b = Find(b);
        if (a != b)p[b] = a;
    }
};
void solve(){ 
    int n ; cin>> n;
    int arr[n];
    rep(i,0,n-1) cin >> arr[i];
    bool flag = true;
    rep(i,1,n-1)
    {
     if(arr[i] >=arr[i-1])
        flag = false;   
    }
    if(flag)
        cout << "NO" << n1;
    else
        cout << "YES" << n1;










    }
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0); 
    int t=1;
    cin>>t;
    while(t--) solve();
    return 0;
}
