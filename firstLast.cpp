#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int binary(vector<int>& nums, int target, int f){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while (s<=e)
        {
            int mid=(s+e)/2;
            if(target>nums[mid]){
                s=mid+1;
            }
            else if(target<nums[mid]){
                e=mid-1;
            }
            else{
            // for first occurence keep moving to left of search space
            // for last move to right
                ans=mid;
                if(f==-1) e=mid-1; //first
                else s=mid+1; //last occurence
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=binary(nums, target, -1);
        int last=binary(nums, target, 1);
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};