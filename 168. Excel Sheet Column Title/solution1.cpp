#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string convertToTitle(int n) 
    {
        vector<char> letters{'\n','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        string output = "";
        if(n>=1 && n<=26) output =  letters[n];
        return output;
    }
};
int main()
{
    int n;
    cin>>n;
    Solution sol;
    string ans = sol.convertToTitle(n);
    cout<<ans;
}