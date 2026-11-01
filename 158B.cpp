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
typedef long long ll;
typedef vector<int> vi;
typedef greater<int> comp;
typedef pair<int,int> pi;
#define pb push_back;
#define mp make_pair;
#define f first;
#define s second;
#define rep(i,a,b) for(int i = a; i<=b;i++)
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
// 8
// 2 3 4 4 2 1 3 1
// 5
// 1 2 4 3 3
int t,count1=0,count2=0,count3=0,count4=0; 
cin >> t;
int arr[t];
int cars = 0;
rep(i,0,t-1){
   cin >> arr[i];
   if(arr[i]==1)
      count1++; // 0
   else if(arr[i]==2)
      count2++; // 1
   else if(arr[i]==3)
      count3++; // 0
   else if(arr[i]==4)
      count4++; // 0
}
cars+=count4;
// cars = 1
while(count3 > 0 && count1 > 0)
{
   cars++;
   count3--;
   count1--;
   // cars = 2
}
// count3 will be 0 or count1 will be 0
while(count2 > 1)
{
cars++;
count2 = count2 - 2;
}
// count2 will be either 1 or 0
while(count3)
{
   cars++;
   count3--;
   // cars = 3;
}
while(count1>0)
{
   if(count2)
   {
      if(count1 >=2)
      {
         cars++;
         count2--;
         count1 = count1 - 2;
      }
      else
      {
         cars++;
         count1--;
         count2--;
      }
   }
   else{
      cars++;
      count1 = count1 - 4;
   }
}
while(count2)
{
   count2--;
   cars++;
}
cout << cars;
}