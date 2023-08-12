#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    string gcdOfStrings(string s1,string s2)
    {
        unordered_map<char,int> map;
        for(int i=0;i<s1.size();i++)
        {
            map[s1[i]]++;
        }
    }
};
int main()
{
    string s1 = "CXTXN CXTXN CXTXN CXTXN CXTXN";
    string s2 = "CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN CXTXN";
    Solution sol;
    cout<<sol.gcdOfStrings(s1,s2);
}

/*
A B C A B C
A B C 0 0 0

A B A B A B
A B A B 0 0 

L E E T 
C O D E

C X T X N C X T X N C X T X N C X T X N C X T X N 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N C X T X N 

T A U X X T A U X X T A U X X T A U X X T A U X X 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
T A U X X T A U X X T A U X X T A U X X T A U X X T A U X X T A U X X T A U X X T A U X X
*/

