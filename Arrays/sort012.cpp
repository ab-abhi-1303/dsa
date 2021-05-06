//question link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

void sort012(int arr[], int n)
    {
        // coode here 
        //das national flag algo
        
        int low = 0, mid = 0, high = n - 1;
        while(mid <= high) {
            switch(arr[mid]) {
                case 0: swap(arr[low], arr[mid]);
                        low++;
                        mid++;
                        break;
                        
                case 1: mid++;
                        break;
                        
                case 2: swap(arr[mid], arr[high]);
                        high--;
                        break;
            }
        }
        
    }
