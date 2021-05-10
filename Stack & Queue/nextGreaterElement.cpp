/question link: https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

// Function to return Next larger elements


class Solution{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        
        vector<long long> res;
        stack<long long> s;
        int i;
        for(i = n - 1 ; i >= 0 ; i--) {
            if(s.empty()) {
                res.push_back(-1);
                s.push(arr[i]);
                continue;
            }
            if(s.top() > arr[i]) {
                res.push_back(s.top());
                s.push(arr[i]);
            }
            else {
                while(!s.empty() and s.top() < arr[i]) {
                    s.pop();
                }
                if(s.empty()) 
                    res.push_back(-1);
                else
                    res.push_back(s.top());
                    
                s.push(arr[i]);
            }
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};