int low = 0;
int high = n - 1;
while(high - low > eps)
{
	int mid = (low + high) >> 1;
	if(mid < x / mid)
		low = mid;
	else 
		high = mid;
}
return low + (high - low) / 2;

