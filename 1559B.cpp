#include"bits/stdc++.h"
using namespace std;
#define int               long long
#define pb                push_back
#define ppb               pop_back
#define pf                push_front
#define ppf               pop_front
#define all(x)            (x).begin(),(x).end()
#define uniq(v)           (v).erase(unique(all(v)),(v).end())
#define sz(x)             (int)((x).size())
#define f                 first
#define s                 second
#define pii               pair<int,int>
#define rep(i,a,b)        for(int i=a;i<b;i++)
#define repr(i,a,b)        for(int i=a;i>=b;i--)
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
const int32_t MM=998244353;
const int N=50005;

void solve(){ 
	int n; cin >> n;
	string str; cin >> str;
	int p = -1;
	rep(i,0,N){
		if(str[i]!='?'){
			p=i;
			break;
		}
	}
	if(p==-1)
	{
		// we didn't get any character
		int i = 0;
		while(i<n)
		{
			if(i & 1)
				str[i]='R';
			else
				str[i]= 'B';
		}
		cout << str << n1;
		return;
	}
	repr(i,p-1,0)
	{
		if(str[i+1]=='B')
			str[i] = 'R';
		else
			str[i] = 'B';
	}
	rep(i,p+1,n)
	{
		if(str[i]!='?') continue;
		else if(str[i-1]=='B')
			str[i]='R';
		else
			str[i] = 'B';
	}
    cout << str << n1;
	}
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);	
	int t=1;
	cin>>t;
	while(t--) solve();
	return 0;
}
