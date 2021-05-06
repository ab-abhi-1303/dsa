    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code 
        int eh = 0;
        int res = INT_MIN;
        
        for(int i = 0 ; i < n ; i++) {
            eh += arr[i];
            
            if(eh < 0) {
                eh = 0;
            }
            else {
                res = max(res, eh);
            }
        }
        
        return res;
        
    }
