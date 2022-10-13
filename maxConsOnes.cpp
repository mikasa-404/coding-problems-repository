/*Given a binary array nums, return the maximum number of consecutive 1's in the array.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0; int maxx= INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if(nums[i]==1)
                cnt++;
            if(nums[i]==0){
                maxx=max(cnt, maxx);
                cnt=0;
            }
        }

         maxx=max(cnt, maxx);
         return maxx;
        
    }

    //approach using sets
    int findMaxConsecutiveOnes2(vector<int>& nums) {
    set <int> s;
    s.insert(nums.begin(),nums.end());
    if(nums.size()==s.size())
    return false;
    else
    return true;
    }
    //approach2 , sort and see if two adjacent elements are equal
};
int main(){

    Solution obj1;
    
    return 0;
}