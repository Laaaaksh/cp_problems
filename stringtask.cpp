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
using namespace std;
#define rep(i,a,b) for(int i = a; i<=b;i++);
bool isVowel(char s)
{
	s = tolower(s);
	if(s=='a' || s=='e' || s=='i' || s=='i' || s=='u')
		return true;
	return false;
}
int main()
{
ios::sync_with_stdio(0);
cin.tie(0);
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
string x;
// getline(cin,x);
// while(cin >> x)
// random_shuffle(v.begin(),v.end());
// {

// }
// int128_t temp;
cin >> x;
string res;s
int n = x.size();
for(int i = 0 ; i < n ; i++)
{
	if(isVowel(x[i]))
		i++;
	else
	{
		res = res + '.' + tolower(x[i]);	
	}
}
cout << res;
return 0;
}