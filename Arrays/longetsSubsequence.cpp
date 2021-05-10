//question link: https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      set<int> s;
      if(N == 1) 
        return 1;
      
      for(int i = 0 ; i < N ; i++) {
          s.insert(arr[i]);
      }
        
        int res = 0;
        int count = 1;
        for(auto it = s.begin() ; it!=s.end() ; it++) {
            auto nex = next(it);
            if(nex == s.end()) {
                break;
            }
            
            if(*it + 1 == *nex) {
                count++;
                res = max(res, count);
            }
            else{
                count = 1;
            }
            res = max(res, count);
        }
        
        return res;
      
      
    }
};
