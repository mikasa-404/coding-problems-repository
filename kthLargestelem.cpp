//kth largest/smallest element
#include<bits/stdc++.h>
using namespace std;
//approach 1: O(nlogn)
  int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()-k];
    }
