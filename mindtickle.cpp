#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[5] = {1,2,3,4,5};
	int *p = a;
	int val = *(p+2);
	cout << val;
	return 1;
}