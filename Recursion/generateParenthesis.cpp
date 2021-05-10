//question link: https://practice.geeksforgeeks.org/problems/generate-all-possible-parentheses/1

//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


 // } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void fun(int n, int open, int close, string str, vector<string> & res) {
        if(close == n) {
            res.push_back(str);
            return;
        }
        if(open > close) {
            fun(n, open, close + 1, str + ')', res);
        }
        if(open < n) {
            fun(n, open + 1, close, str + '(', res);
        }
    }
    
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        
        vector<string> res;
        string str = "";
        fun(n, 0, 0, str, res);
        return res;
    }
};

// { Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 
  // } Driver Code Ends