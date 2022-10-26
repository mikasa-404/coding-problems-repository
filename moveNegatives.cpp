//Move all negative elements to one side of the array
#include<bits/stdc++.h>
using namespace std;
//MOVE ALL NEGATIVE TO BEGINNING
 void moveNegativesToEnd(int* arr,int n)
    {
        int s=0;
        int e=n-1;
        while(s<=e){
            //if start is negative  : start+1
            if(arr[s]<0)
                s++;
            else if(arr[s]>=0 && arr[e]>=0)
             e--;
            else{
                swap(arr[s],arr[e]);
                s++;
                e--;
            }
            //if start is positive and end is positive : end-1
            //if start is positive and end is negative : interchange and start+1 end-1

        }
        
    }
int main(){
    int arr[9]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    moveNegativesToEnd(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
