//question link: https://practice.geeksforgeeks.org/problems/reverse-a-string/1#

//User function Template for C++

string fun(string &str, int i, int j) {
    if(i >= j)
        return str;
        
    swap(str[i], str[j]);
    return fun(str, i + 1, j - 1);
}

string reverseWord(string str){
    
  //Your code here
  return fun(str, 0, str.size() - 1);
}