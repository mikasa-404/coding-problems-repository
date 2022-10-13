#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
//     bool isPowerOfThree(int n) {
//        if(n==1){
//         return true;
//         }

//         if((n%3)!=0){ 
//             return false;
// }
//         n=n/3;
        
//         isPowerOfThree(n);    
//     }
    //second function
    bool isPowerOfThree(int n) {
        if(n<0)
            return false;

     float x =log(n)/log(3);
     if(x==((int)x))
        return true;
    else
        return false;
    }
   
};
    
int main(){
    Solution s;
    int n;
    cin>>n;
    cout<<s.isPowerOfThree(n);
}