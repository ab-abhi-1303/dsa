//question link: https://practice.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

void segregateElements(int arr[],int n)
    {
        // Your code goes here
        deque<int> dq;
        
        for(int i = n - 1 ; i >= 0 ; i--) 
            (arr[i] >= 0) ? dq.push_back(arr[i]) : dq.push_front(arr[i]);
            
        int k = 0;
        while(!dq.empty() and dq.back() >= 0) {
            arr[k++] = dq.back();
            dq.pop_back();
        }
        
        while(!dq.empty()) {
            arr[k++] = dq.front();
            dq.pop_front();
        }
        
    }
