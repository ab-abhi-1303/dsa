//question link: https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1

class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        int sum = 0;
        set<int> s;
        
        int prefix_sum = 0;
        for(int i = 0 ; i < n ; i++) {
            prefix_sum += arr[i];
            if(prefix_sum == 0)
                return true;
                
            if(s.find(prefix_sum - sum) != s.end())
                return true;
                
            s.insert(prefix_sum);
        }
        return false;
    }
};
