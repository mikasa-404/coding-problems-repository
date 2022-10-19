
#include<bits/stdc++.h>
using namespace std;
//start with a boolean array with all false//we will mark composites as true, false represent prime
//make arr[0] and arr[1] true
/*iterate from 2 to sqrt(n)
if(it is false i.e. prime)->make all its multiples as true(composites)
multiples will start from i*i to n
*/
class Solution {
public:
    int countPrimes(int n) {
        if(n<=1)
        return 0;
        int cnt=0;
        vector <bool> arr(n, false);//n cause we need to check for 0 to n-1, not n
        arr[0]=true;
        arr[1]=true;
        for (int i = 2; i <=sqrt(n); i++)
        {
            if(arr[i]==false){
                for (int j = i*i; j < n; j=j+i)
                {
                    arr[j]=true;
                }
                
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==false)
            cnt++;
        }
        
        return cnt;
        
    }
};
int main(){
    Solution s;
    int n;
    cin>>n;

    cout<<s.countPrimes(n);
}