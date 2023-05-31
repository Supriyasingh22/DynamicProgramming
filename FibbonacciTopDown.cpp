#include<iostream>
#include<vector>
using namespace std ;
// Code for finding nth fibbonacci number 

int fibb(int n, vector<int>&dp)
{
    if(n==0 || n==1)
    {
        return n ;
    }

    if(dp[n]!=-1)
    {
        return dp[n];
    }

    dp[n]=fibb(n-1,dp)+fibb(n-2,dp);
    return dp[n];
}

int main()
{
    int n ;
    cout<<"Enter the nth number whose fibbonacci is to be found : ";
    cin>>n ;

    vector<int>dp(n+1,-1);

   int ans = fibb(n,dp);
   cout<<n<<"th fibbonacci is : "<<ans ;
    return 0 ;


}