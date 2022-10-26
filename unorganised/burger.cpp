/*
Return [total_jumbo, total_small] so that the number of remaining tomatoSlices 
equal to 0 and the number of remaining cheeseSlices equal to 0
 If it is not possible to make the remaining tomatoSlices and cheeseSlices 
 equal to 0 return []
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        //jumbo 4t, 1c
        //small  2t, 1c
        //let x and y are number of jumbo and small respe
        // then 4x+2y=t ; x+y=c 
        //solve both of these equations where x,y>0 and integers
        if(((tomatoSlices-2*cheeseSlices)%2) || (((tomatoSlices-2*cheeseSlices)/2)<0))
            return {};
        if((2*cheeseSlices-(tomatoSlices/2)<0) || (tomatoSlices%2))
            return {};
        
        return {(tomatoSlices-2*cheeseSlices)/2 , (2*cheeseSlices-(tomatoSlices/2))};
    }
};

int main(){

    Solution obj1;
    vector <int>  ans= obj1.numOfBurgers(16,7);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}