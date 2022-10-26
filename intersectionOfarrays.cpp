
#include<bits/stdc++.h>
using namespace std;   

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> intersec;
        int flag=0;
        

        for(int j=0; j<nums2.size();j++){
               auto result = find(nums1.begin(), nums1.end(), nums2[j]);
            if(result!=end(nums1))
            {
                flag=1;
                cout<<nums2[j]<<" found"<<endl;
                    intersec.push_back(nums2[j]);
            }
        }
    if(flag==1)
   return intersec; 
   else 
   return {};
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