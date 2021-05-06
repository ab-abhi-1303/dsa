//question link: https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1

int doUnion(int a[], int n, int b[], int m)  {
        //code here
        int count = 0;
        int i = 0;
        int j = 0;
        
        sort(a, a + n);
        sort(b, b + m);
        
        while(i < n and j < m) {
            if(i > 0 and a[i] == a[i - 1]) {
                i++;
                continue;
            }
            if(j > 0 and b[j] == b[j - 1]) {
                j++;
                continue;
            }
            
            if(a[i] == b[j]) {
                count++;
                i++;
                j++;
                continue;
            }
            
            else if(a[i] < b[j]) {
                i++;
                count++;
                continue;
            }
            else if(b[j] < a[i]) {
                j++;
                count++;
                continue;
            }
            
        }
        
        while(i < n) {
            if(i > 0 and a[i] == a[i - 1]) {
                i++;
                continue;
            }
            else {
                count++;
                i++;
            }
        }
        
        while(j < m) {
            if(j > 0 and b[j] == b[j - 1]) {
                j++;
                continue;
            }
            else {
                count++;
                j++;
            }
        }
        
        
    return count;
    }
