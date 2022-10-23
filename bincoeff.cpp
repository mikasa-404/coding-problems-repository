#include<iostream>
using namespace std;
//using basic factorial formula O(n)
//using recursion O(nlogn)
//using dynamic prohramming to avoid overlapping subproblems o(n*k)

//REC O(n*max(k,n-k)) 
int binCoeffrec(int n, int k){
    if(k>n) //invalid case
    return 0;
    if(k==0 || k==n)
    return 1;

    return (binCoeffrec(n-1,k-1)+binCoeffrec(n-1, k));
}
//DP O(n*k)
int binCoeffDP(int n, int k){
    int C[n+1][k+1];
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j<=min(k,i); j++)
        {
            if(j==0 || i==j)
            C[i][j]=1;
            else
            C[i][j]=C[i-1][j-1]+C[i-1][j];
        }
        
    }
    return C[n][k];
}
int main(){
    cout<<"Enter n and k: ";
    int n,k;
    cin>>n>>k;
    cout<<binCoeffDP(n,k);
    return 0;
}