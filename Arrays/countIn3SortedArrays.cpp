//question link: https://practice.geeksforgeeks.org/problems/common-elements1132/1

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            
            set<int> s;
            //baadme vector me daal denge
            
            int i = 0, j = 0, k = 0;
            while(i < n1 and j < n2 and k < n3) {
                //handle duplicates
                if(i > 0 and A[i] == A[i - 1]) {
                    i++;
                    continue;
                }
                if(j > 0 and B[j] == B[j - 1]) {
                    j++;
                    continue;
                }
                if(k > 0 and C[k] == C[k - 1]) {
                    k++;
                    continue;
                }
                
                //if all 3 equal
                if( (A[i] == B[j]) and (A[i] == C[k]) ) {
                    s.insert(A[i]);
                    i++;
                    j++;
                    k++;
                    continue;
                }
                //if some 2 equal
                if( (A[i] == B[j]) and (B[j] != C[k]) ) {
                    if(C[k] < A[i]) {
                        k++;
                    }
                    else {
                        i++;
                        j++;
                    }
                    continue;
                }
                if( (B[j] == C[k]) and (C[k] != A[i]) ) {
                    if(A[i] < B[j]) {
                        i++;
                    }
                    else {
                        j++;
                        k++;
                    }
                    continue;
                }
                if( (A[i] == C[k]) and (C[k] != B[j]) ) {
                    if(B[j] < A[i]) {
                        j++;
                    }
                    else {
                        i++;
                        k++;
                    }
                    continue;
                }
                
                //if none equal
                //kausa chota hai vo dekhan padea
                
                if( (A[i] < B[j]) and (A[i] < C[k]) ) {
                    i++;
                }
                else if( (B[j] < A[i]) and (B[j] < C[k]) ) {
                    j++;
                }
                else {
                    k++;
                }
                
            }
            
            vector<int> res;
            for(auto x : s) {
                res.push_back(x);
            }
            return res;
        }

};
