//question link: https://practice.geeksforgeeks.org/problems/maximum-intervals-overlap5708/1

class Solution{
	
	public:
	vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	   // Your code goes here
	   sort(Entry, Entry + N);
	   sort(Exit, Exit + N);
	   
	   int i = 0, j = 0, timer, max_till_now = -1, count = 0;
	   while(i < N and j < N) {
	       if(Entry[i] <= Exit[j]) {
	           count++;
	           if(count > max_till_now) {
	               timer = Entry[i];
	               max_till_now = count;
	           }
	           i++;
	       }
	       else {
	        count--;
	        j++;
	       }
	   }
	   
	   
	   return {max_till_now, timer};
	   
	}

};