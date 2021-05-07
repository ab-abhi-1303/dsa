//question link: https://practice.geeksforgeeks.org/problems/minimize-the-heights3351/1

int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr, arr + n);
        
        int res = arr[n - 1] - arr[0];
        
        for(int i = 0 ; i < n - 1 ; i++) {
            int minn = min(arr[0] + k, arr[i + 1] - k);
            int maxx = max(arr[n - 1] - k, arr[i] + k);
            if(minn < 0)    continue;
            res = min(res, maxx - minn);
        }
        
        return res;
    }
