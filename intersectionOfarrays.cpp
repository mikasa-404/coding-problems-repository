/*Given two sorted integer arrays nums1 and nums2, print their intersection.
All the elements in nums1 and nums2 are unique. While printing, the order of elements must be maintained.
If there is no intersection, print -1 instead.*/

#include<bits/stdc++.h>
using namespace std;   

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      //consider a set S and push element of nums 1 in it
      //consider another set and push  those eleemnt of nums2 in it which are in the set S
      //this set is your nanswer
      set<int> s;
      set<int> ans;
      for(auto h: nums1){
            s.insert(h);
      }
      for (int i = 0; i < nums2.size(); i++)
      {
        int x=nums2[i];
        if(s.find(x)!=s.end())
            ans.insert(x);
      }
      vector<int> a;
      for(int x: ans){
      a.push_back(x);}
      // get unique values
      return a;
   }

};

int main(){
    Solution s;
    vector<int> nums1={1,2,2,1};
    vector<int> nums2={2,2};
    vector<int> ans= s.intersection(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    
    }