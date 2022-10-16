//given a non-negative integer x, return its square root without using built-in exponential funtions
//return only integer part

//approach 1: 
class Solution {
public:
    int mySqrt(int x) {
        
    long long i=0;
     while(i*i<=x){
            i++;
     }
     return (i-1);
    }

//approach 2: binary search
int mySqrt1(int x) {
        long long int l=1, u=x;
        long long int ans;
        while(l<=u){
            long long int mid= (l+u)/2;
            if(mid*mid<=x){
                ans=mid;
                l=mid+1;
            }
            else
            u=mid-1;
            
        }
        return ans;
    }
};

int main(){
    Solution s;
    s.mySqrt(34);
    return 0;
}