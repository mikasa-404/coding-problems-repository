/*Given an m x n matrix, return all elements of the matrix in spiral order.
*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int srow=0, erow=matrix.size()-1, scol=0, ecol=matrix[0].size()-1;
    int total=(matrix.size())*(matrix[0].size());
    vector<int>  ans;
    int cnt=0;
    //top row
    while (cnt<total)
    {
        for (int col = scol; col<=ecol; col++)
    {
        ans.push_back(matrix[srow][col]);
        cnt++;
    }
    
    //last col
    for (int row = srow+1; row <=erow; row++)
    {
        ans.push_back(matrix[row][ecol]);
        cnt++;
    }
    //bottom row
    for (int col = ecol-1; col>=scol; col--)
    {
        ans.push_back(matrix[erow][col]);
        cnt++;
    }

    //firstcol
    for (int row = erow-1; row >=srow+1; row--)
    {
       
        ans.push_back(matrix[row][scol]);
        cnt++;
    }
    
    scol++;
    ecol--;
    srow++;
    erow--;
    }
    return ans;
    }
};