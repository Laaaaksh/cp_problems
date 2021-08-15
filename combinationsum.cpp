// target  = n ;
int main()
{
	int dp[n];
	vector<int>nums;
	dp[0] = 1;
	for(int i = 1 ; i<=n;i++)
	{
		for(auto it : nums)
		{
			dp[i] = i-x>=0 ? dp[i-x] : 0;
		}
	}
	return dp[n];
}