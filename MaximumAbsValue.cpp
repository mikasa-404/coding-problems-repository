/*Given two arrays of integers with equal lengths, return the maximum value of:
|arr1[i] - arr1[j]| + |arr2[i] - arr2[j]| + |i - j|
where the maximum is taken over all 0 <= i, j < arr1.length.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    // //Brute force method
    //     int maxAbsValExpr1(vector<int>& arr1, vector<int>& arr2) {
    //         int max = INT_MIN;
    //         //traverse through each (i,j)
    //         for (int i = 0; i < arr1.size(); i++)
    //         {   
    //             int value;
    //             for (int j = 0; j < arr1.size(); j++)
    //             {

    //                 //for each (i,j) calculate abs
    //                 value= ( abs(arr1[i]-arr1[j]) + abs(arr2[i]-arr2[j]) + abs(i-j) ); 
                    
    //                 //if val>max; max=val;
    //                 if(value>max)
    //                     max=value;

    //             }
    //         }
            
    //         return max;

    //     }



    //Interesting method
    /*fOUR Cases : |A|+|B|+|C|= 
        -A + B + C
        A - B + C
        A + B + C
        -A - B + C

    In each case for all i calculate max and min and 
    return max[A[i]+B[i]+i]-min[A[i]+B[i]+i];
    
    max of all differences in each case is answer
    */
    int solveCase(int caseNo);
    int maxAbsValExpr(vector<int>& arr1, vector<int>& arr2) {

        int ans;
        ans= max ( max(solveCase(1,arr1, arr2), solveCase(2,arr1, arr2)), max(solveCase(3,arr1, arr2), solveCase(4,arr1, arr2)) ); //remember max only takes two arguments
        return ans;
    }
    int solveCase(int caseNo, vector <int> A,vector <int> B){
        int maxx= INT_MIN; int minn=INT_MAX;
        for(int i=0; i<A.size(); i++){
            int val; 
            switch (caseNo)
                    {
                    case 1:
                        val= (-A[i]+B[i]+i);
                        cout<<val<<endl;
                        break;
                    case 2:
                        val= (A[i]-B[i]+i);
                        break;
                    case 3:
                        val= (A[i]+B[i]+i);
                        break;
                    default:
                        val= (-A[i]-B[i]+i);
                        break;
                    }
            
            maxx= max(val, maxx);
            minn= min(val, minn);
           
        }
        
        return maxx-minn;
        
    }



};

int main(){
    vector <int> A={1,2,3,4};
    vector <int> B={-1,4,5,6};
    Solution obj1;
    int ans= obj1.maxAbsValExpr(A,B);
    cout<<ans<<endl;
    return 0;
}