
#include<bits/stdc++.h>
using namespace std;
//this approach will partition our array using three pointers low mid and high
//initial mid and low at 0 and high at n-1//till mid reaches high
// we will move mid such that 0s are from a[0] to a[low-1]
//1s lie b/w low to mid-1
//unknowns lie from mid to high-1
//and 2s are from a[high] to a[n-1] 

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int high=nums.size()-1;
        int low=0;
        int mid=0;
        //we will traverse mid from 0 to n-1 
        while(mid<=high){
            //three cases either mid points to 0,1 or 2
            switch (nums[mid])
            {
            //if it is 0
            case 0:{
                //swap element at mid from elet at index low coz and increment low and mid
                //coz 0s end at low-1 index
                swap(nums[low], nums[mid]);
                low++;
                mid++;
                break;
            }
            //if its 1
            case 1:
                //if it is 1 just increment mid(coz it does not effect low or high)
                mid++;
                break;
            //else if its 2
            case 2:{
                //swap eleemnt at mid to element at high and decrese high
                swap(nums[mid], nums[high]);
                high--;
                break;
                }
            }
        }

    }
};