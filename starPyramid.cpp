//star pyramid pattern
#include <iostream>
using namespace std;


int main() {
   // write your code here 
   int n;
   cin>>n;

    for (int k = 0; k <n; k++)
    {
   for (int i = 0; i <n-k-1; i++)
   {
    cout<<" ";
   }
    for (int j = 0; j < (2*k)-1; j++)
    {
        cout<<"*";
    }
    cout<<endl;
    }
    return 0;
   }
   
    