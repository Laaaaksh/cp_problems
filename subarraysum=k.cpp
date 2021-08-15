class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      int answer = 0;
      int n = nums.size();
      int pref = 0;
        // subarray sum is basically nums[r] - nums[l-1]
      unordered_map<int,int> um;
      um[pref]++;
      for(int r = 0 ; r < n; r++)
      {
         pref+=nums[r];
         int need = pref - k;
         answer+=um[need];
         um[pref]++;
      }
      return answer;
    }
};