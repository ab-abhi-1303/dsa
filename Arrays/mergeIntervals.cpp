//question link : https://leetcode.com/problems/merge-intervals/

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> res;
        
        sort(intervals.begin(), intervals.end());
        
        int start = intervals[0][0];
        int end = intervals[0][1];
        
        int i = 1;
        while(i < intervals.size()) {
            int c_s = intervals[i][0];
            int c_e = intervals[i][1];
            
            if(c_s <= end) {
                end = max(end,c_e);
            }
            else {
                res.push_back({start, end});
               
                start = c_s;
                end = c_e;
            }
            i++;
        }
        res.push_back({start, end});
        
        return res;
    }
