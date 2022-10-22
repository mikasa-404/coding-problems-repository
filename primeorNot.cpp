//Every prime number can be written in the form of 6n + 1 or 6n – 1 (except the multiples of prime numbers, i.e. 2, 3, 5, 7, 11), where n is a natural number.
//method 1 loop from 2 to n-1 //bruteforce

//divisors occur in pair: Example 30: divisors are
//1,30
//2,15
//3,10
//5,6
//checking till 1 to 5 is enough i=2 to  i^2<=n

//method 2 loop from 2 to sqrt(n)
#include<iostream>
#include<math.h>
using namespace std;
bool primeorNot(int n){
    if(n<=1)
        return 0;
    for (int i = 2; i*i<=n; i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    if(primeorNot(n))
    cout<<"\nPrime number";
    else
    cout<<"\nNot a prime";
}