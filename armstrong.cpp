//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int num=n;
        int ans=0;
        string s="";
        while(n>0){
            int rem=n%10;
            ans+=pow(rem,3);
            n=n/10;
        }
        
        if(ans==num)
            s="Yes";
        else
        s="No";
        
        return s;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout<<endl<<ob.armstrongNumber(n);
    }
    return 0;
}

// } Driver Code Ends