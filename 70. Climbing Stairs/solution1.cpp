#include<iostream>
using namespace std;

class Solution 
{
    public:
    int climbStairs(int n)
    {
       if(n==1) return 1;
       if(n==2) return 2;
       int dp[n+1];
       dp[1] = 1;
       dp[2] = 2;
       for(int i=3;i<=n;i++)
       {
           dp[i] = dp[n-1] + dp[n-2];
       }
       return dp[n];
    }
};
int main()
{
    int n=3;
    Solution s;
    cout<<s.climbStairs(n);
}