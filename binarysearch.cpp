//find first element greater than the given in a sorted array leetcode

l = 0 ;  r = n - 1;
int ans = -1;
while(l<=r)
{
	int mid = l + (r - l) / 2;
	if(a[mid] >=target)
		ans = mid;
		ans = mid - 1;
		// the max value can exist in the left
	else
		l = mid + 1;
	return ans;
}